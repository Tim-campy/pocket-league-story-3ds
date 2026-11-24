// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "data.BaseData.hpp"
#include "data.FanActData.hpp"
#include "data.FanBonusData.hpp"
#include "data.FormationData.hpp"
#include "data.LeagueData.hpp"
#include "data.PlayerData.hpp"
#include "data.QuestMatchData.hpp"
#include "data.SponsorData.hpp"
#include "data.StadiumData.hpp"
#include "data.SupervisorData.hpp"
#include "data.TeamData.hpp"
#include "data.TenantData.hpp"
#include "data.TradeData.hpp"
#include "data.TrainingData.hpp"
#include "form.DebugForm.hpp"
#include "form.FormManager.hpp"
#include "form.GameForm.hpp"
#include "form.MyFormBase.hpp"
#include "form.SoccerForm.hpp"
#include "form.SubForm.hpp"
#include "form.TitleForm.hpp"
#include "game.Ball.hpp"
#include "game.Camera.hpp"
#include "game.GameManager.hpp"
#include "game.GameUtil.hpp"
#include "game.Map.hpp"
#include "game.MapMain.hpp"
#include "game.Player.hpp"
#include "game.Team.hpp"
#include "game.Tenant.hpp"
#include "game.UserData.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.Property.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "main.AppData.hpp"
#include "generated/java.util.JTool_templates.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_util3d = pls::generated::kairo::unity::m3d4::util3d;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using StringArray = pls::cs::Array<pls::cs::String>;
using StringArray2 = pls::cs::Array<pls::cs::Array<pls::cs::String>>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace form {

void DebugForm::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    MyFormBase::trace_edges(visitor);
    pls::cs::trace_value(udat_, visitor);
    pls::cs::trace_value(formationRect_global_pos, visitor);
    pls::cs::trace_value(formationRect_camera_pos, visitor);
    pls::cs::trace_value(temp_player, visitor);
    pls::cs::trace_value(ch_kickSound, visitor);
    pls::cs::trace_value(ch_shootSound, visitor);
    pls::cs::trace_value(on_off, visitor);
    pls::cs::trace_value(str_direct, visitor);
    pls::cs::trace_value(waku, visitor);
    pls::cs::trace_value(player_param, visitor);
    pls::cs::trace_value(sortDraw, visitor);
    pls::cs::trace_value(camera_pos, visitor);
}

static pls::cs::Int32 DebugForm_CH_DATA_INDEX_storage{};

static pls::cs::Int32 DebugForm_CH_DATA_INDEX2_storage{};

static pls::cs::Int32 DebugForm_ch_elements_storage{};

static pls::cs::Int32 DebugForm_ch_eventMsgs_storage{};

static pls::cs::Int32 DebugForm_ch_news_storage{};

static pls::cs::Int32 DebugForm_ch_popUp_storage{};

static pls::cs::Int32 DebugForm_ch_talks_storage{};

static pls::cs::Int32 DebugForm_chFanBonusIndex_storage{};

static pls::cs::Int32 DebugForm_COATEVA_PLAYER_ID_storage{};

static pls::cs::Int32 DebugForm_COATEVA_ROOT_INDEX_storage{};

static pls::cs::Int32 DebugForm_COATEVA_TEAM_ID_storage{};

static pls::cs::Int32 DebugForm_COATEVA_WAKU_storage{};

static pls::cs::Ref<kl_java_util::Vector> DebugForm_debug_scorevec_storage{};

static IntArray DebugForm_debug_testscore_storage{};

static pls::cs::Int32 DebugForm_flg_fanPMax_storage{};

static pls::cs::Int32 DebugForm_flg_formationMax_storage{};

static pls::cs::Int32 DebugForm_flg_leagueMax_storage{};

static pls::cs::Int32 DebugForm_flg_loadCheck_storage{};

static pls::cs::Int32 DebugForm_flg_LVMAX_fanAct_storage{};

static pls::cs::Int32 DebugForm_flg_LVMAX_sponsor_storage{};

static pls::cs::Int32 DebugForm_flg_LVMAX_svisor_storage{};

static pls::cs::Int32 DebugForm_flg_LVMAX_tenant_storage{};

static pls::cs::Int32 DebugForm_flg_menuOpen_storage{};

static pls::cs::Int32 DebugForm_flg_playerAll_storage{};

static pls::cs::Int32 DebugForm_flg_playerLvMax_storage{};

static pls::cs::Int32 DebugForm_flg_playerTPMax_storage{};

static pls::cs::Int32 DebugForm_flg_qmMax_storage{};

static pls::cs::Int32 DebugForm_flg_researchPointMax_storage{};

static pls::cs::Int32 DebugForm_flg_sponsorMax_storage{};

static pls::cs::Int32 DebugForm_flg_svisorMax_storage{};

static pls::cs::Int32 DebugForm_flg_tenantMax_storage{};

static pls::cs::Int32 DebugForm_flg_tradeMax_storage{};

static pls::cs::Int32 DebugForm_flg_trainingMax_storage{};

static pls::cs::Int32 DebugForm_flg_warPMax_storage{};

static pls::cs::Int32 DebugForm_max_assist_storage{};

static pls::cs::Int32 DebugForm_max_fan_storage{};

static pls::cs::Int32 DebugForm_max_nameValue_storage{};

static pls::cs::Int32 DebugForm_TEST_STATE_storage{};

static pls::cs::Int32 DebugForm_tpp_index_storage{};

static PLS_NOINLINE void cs_init_66eb7014769dfe80_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(DebugForm_CH_DATA_INDEX_storage, visitor);
        pls::cs::trace_value(DebugForm_CH_DATA_INDEX2_storage, visitor);
        pls::cs::trace_value(DebugForm_ch_elements_storage, visitor);
        pls::cs::trace_value(DebugForm_ch_eventMsgs_storage, visitor);
        pls::cs::trace_value(DebugForm_ch_news_storage, visitor);
        pls::cs::trace_value(DebugForm_ch_popUp_storage, visitor);
        pls::cs::trace_value(DebugForm_ch_talks_storage, visitor);
        pls::cs::trace_value(DebugForm_chFanBonusIndex_storage, visitor);
        pls::cs::trace_value(DebugForm_COATEVA_PLAYER_ID_storage, visitor);
        pls::cs::trace_value(DebugForm_COATEVA_ROOT_INDEX_storage, visitor);
        pls::cs::trace_value(DebugForm_COATEVA_TEAM_ID_storage, visitor);
        pls::cs::trace_value(DebugForm_COATEVA_WAKU_storage, visitor);
        pls::cs::trace_value(DebugForm_debug_scorevec_storage, visitor);
        pls::cs::trace_value(DebugForm_debug_testscore_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_fanPMax_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_formationMax_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_leagueMax_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_loadCheck_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_LVMAX_fanAct_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_LVMAX_sponsor_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_LVMAX_svisor_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_LVMAX_tenant_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_menuOpen_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_playerAll_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_playerLvMax_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_playerTPMax_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_qmMax_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_researchPointMax_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_sponsorMax_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_svisorMax_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_tenantMax_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_tradeMax_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_trainingMax_storage, visitor);
        pls::cs::trace_value(DebugForm_flg_warPMax_storage, visitor);
        pls::cs::trace_value(DebugForm_max_assist_storage, visitor);
        pls::cs::trace_value(DebugForm_max_fan_storage, visitor);
        pls::cs::trace_value(DebugForm_max_nameValue_storage, visitor);
        pls::cs::trace_value(DebugForm_TEST_STATE_storage, visitor);
        pls::cs::trace_value(DebugForm_tpp_index_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("form.DebugForm", flag, []() {
        DebugForm_TEST_STATE_storage =
            pls::cs::evaluate_type_initializer_field("F:form.DebugForm.TEST_STATE", [&]() { return 0; });
        DebugForm_debug_testscore_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.DebugForm.debug_testscore", [&]() { return IntArray::make(2); });
        DebugForm_debug_scorevec_storage = pls::cs::evaluate_type_initializer_field(
            "F:form.DebugForm.debug_scorevec", [&]() { return kl_java_util::Vector::create(); });
    });
}

void DebugForm::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_66eb7014769dfe80_slow(flag);
}

pls::cs::Int32& DebugForm::CH_DATA_INDEX() {
    DebugForm::ensure_initialized();
    return DebugForm_CH_DATA_INDEX_storage;
}

pls::cs::Int32& DebugForm::CH_DATA_INDEX2() {
    DebugForm::ensure_initialized();
    return DebugForm_CH_DATA_INDEX2_storage;
}

pls::cs::Int32& DebugForm::ch_elements() {
    DebugForm::ensure_initialized();
    return DebugForm_ch_elements_storage;
}

pls::cs::Int32& DebugForm::ch_eventMsgs() {
    DebugForm::ensure_initialized();
    return DebugForm_ch_eventMsgs_storage;
}

pls::cs::Int32& DebugForm::ch_news() {
    DebugForm::ensure_initialized();
    return DebugForm_ch_news_storage;
}

pls::cs::Int32& DebugForm::ch_popUp() {
    DebugForm::ensure_initialized();
    return DebugForm_ch_popUp_storage;
}

pls::cs::Int32& DebugForm::ch_talks() {
    DebugForm::ensure_initialized();
    return DebugForm_ch_talks_storage;
}

pls::cs::Int32& DebugForm::chFanBonusIndex() {
    DebugForm::ensure_initialized();
    return DebugForm_chFanBonusIndex_storage;
}

pls::cs::Int32& DebugForm::COATEVA_PLAYER_ID() {
    DebugForm::ensure_initialized();
    return DebugForm_COATEVA_PLAYER_ID_storage;
}

pls::cs::Int32& DebugForm::COATEVA_ROOT_INDEX() {
    DebugForm::ensure_initialized();
    return DebugForm_COATEVA_ROOT_INDEX_storage;
}

pls::cs::Int32& DebugForm::COATEVA_TEAM_ID() {
    DebugForm::ensure_initialized();
    return DebugForm_COATEVA_TEAM_ID_storage;
}

pls::cs::Int32& DebugForm::COATEVA_WAKU() {
    DebugForm::ensure_initialized();
    return DebugForm_COATEVA_WAKU_storage;
}

pls::cs::Ref<kl_java_util::Vector>& DebugForm::debug_scorevec() {
    DebugForm::ensure_initialized();
    return DebugForm_debug_scorevec_storage;
}

IntArray& DebugForm::debug_testscore() {
    DebugForm::ensure_initialized();
    return DebugForm_debug_testscore_storage;
}

pls::cs::Int32& DebugForm::flg_fanPMax() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_fanPMax_storage;
}

pls::cs::Int32& DebugForm::flg_formationMax() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_formationMax_storage;
}

pls::cs::Int32& DebugForm::flg_leagueMax() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_leagueMax_storage;
}

pls::cs::Int32& DebugForm::flg_loadCheck() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_loadCheck_storage;
}

pls::cs::Int32& DebugForm::flg_LVMAX_fanAct() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_LVMAX_fanAct_storage;
}

pls::cs::Int32& DebugForm::flg_LVMAX_sponsor() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_LVMAX_sponsor_storage;
}

pls::cs::Int32& DebugForm::flg_LVMAX_svisor() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_LVMAX_svisor_storage;
}

pls::cs::Int32& DebugForm::flg_LVMAX_tenant() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_LVMAX_tenant_storage;
}

pls::cs::Int32& DebugForm::flg_menuOpen() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_menuOpen_storage;
}

pls::cs::Int32& DebugForm::flg_playerAll() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_playerAll_storage;
}

pls::cs::Int32& DebugForm::flg_playerLvMax() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_playerLvMax_storage;
}

pls::cs::Int32& DebugForm::flg_playerTPMax() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_playerTPMax_storage;
}

pls::cs::Int32& DebugForm::flg_qmMax() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_qmMax_storage;
}

pls::cs::Int32& DebugForm::flg_researchPointMax() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_researchPointMax_storage;
}

pls::cs::Int32& DebugForm::flg_sponsorMax() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_sponsorMax_storage;
}

pls::cs::Int32& DebugForm::flg_svisorMax() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_svisorMax_storage;
}

pls::cs::Int32& DebugForm::flg_tenantMax() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_tenantMax_storage;
}

pls::cs::Int32& DebugForm::flg_tradeMax() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_tradeMax_storage;
}

pls::cs::Int32& DebugForm::flg_trainingMax() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_trainingMax_storage;
}

pls::cs::Int32& DebugForm::flg_warPMax() {
    DebugForm::ensure_initialized();
    return DebugForm_flg_warPMax_storage;
}

pls::cs::Int32& DebugForm::max_assist() {
    DebugForm::ensure_initialized();
    return DebugForm_max_assist_storage;
}

pls::cs::Int32& DebugForm::max_fan() {
    DebugForm::ensure_initialized();
    return DebugForm_max_fan_storage;
}

pls::cs::Int32& DebugForm::max_nameValue() {
    DebugForm::ensure_initialized();
    return DebugForm_max_nameValue_storage;
}

pls::cs::Int32& DebugForm::TEST_STATE() {
    DebugForm::ensure_initialized();
    return DebugForm_TEST_STATE_storage;
}

pls::cs::Int32& DebugForm::tpp_index() {
    DebugForm::ensure_initialized();
    return DebugForm_tpp_index_storage;
}

void DebugForm::create_init(pls::cs::Ref<DebugForm> self) {
    DebugForm::ensure_initialized();
    self->temp_player = game::Player::create(0);
    self->PLAYER_FACE = 300;
    self->PLAYER_DIRECT = 1;
    self->PLAYER_ANIME = 1;
    self->TEST_P2_TEAM = 1;
    self->ch_kickSound = IntArray::make(5);
    self->ch_shootSound = IntArray::make(2);
    self->on_off = StringArray::from({literal(u"off"), literal(u"on"), literal(u"on2")});
    self->str_direct = StringArray::from({literal(u"↑"), literal(u"→"), literal(u"↓"), literal(u"←")});
    self->waku = StringArray::from({literal(u"○"), literal(u"×")});
    self->player_param = StringArray::make(11);
    self->sortDraw = kl_java_util::Vector::create();
    self->camera_pos = IntArray::make(2);
    MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 5);
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.#ctor", game);
    {
    }
}

// M:form.DebugForm.#ctor
pls::cs::Ref<DebugForm> DebugForm::create() {
    DebugForm::ensure_initialized();
    auto self = pls::cs::make_ref<DebugForm>();
    DebugForm::create_init(self);
    return self;
}

// M:form.DebugForm.Init
bool DebugForm::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.Init", game);
    {
        main::AppData::ensure_initialized();
        game::Ball::ensure_initialized();

        MyFormBase::Init();
        udat_ = game::UserData::GetInstance();
        PLS_API(([&]() -> void {
            pls::cs::String cs_arg0 = main::AppData::softLabels_()[6];
            pls::cs::String cs_arg1 = main::AppData::softLabels_()[2];
            this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{});
        }()));
        mode = 0;
        formationRect_global_pos = pls::cs::Array<pls::cs::Ref<kl_util3d::Vector3D>>::make(4);
        for (pls::cs::Int32 i = 0; i < formationRect_global_pos.length(); ++i) {
            {
                auto cs_target = formationRect_global_pos;
                auto cs_index = i;
                auto cs_value = kl_util3d::Vector3D::create();
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        formationRect_camera_pos = PLS_API(kl_java_util::JTool::MakeArray<IntArray2>(IntArray::from({4, 2})));
        UpdateTestParam();
        ch_bgmVolumeIndex = require(require(apdat_)->sysSave_)->ints[3];
        ch_seVolumeIndex = require(require(apdat_)->sysSave_)->ints[4];
        ch_kickSound[0] = game::Ball::SOUND_PASS()[0] - 8;
        ch_kickSound[1] = game::Ball::SOUND_PASS()[2] - 8;
        ch_kickSound[2] = game::Ball::SOUND_PASS()[3] - 8;
        ch_kickSound[3] = game::Ball::SOUND_PASS()[5] - 8;
        ch_kickSound[4] = game::Ball::SOUND_HEAD() - 8;
        state_ = 10;
        return true;
    }
}

// M:form.DebugForm.Finish
bool DebugForm::Finish() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.Finish", game);
    {
        return true;
    }
}

// M:form.DebugForm.Update
bool DebugForm::Update() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.Update", game);
    {
        frame_ = ((frame_ + 1) % 2147483647 /* Int32.MaxValue */);
        if (PLS_API(require(canvas_)->CheckKeyPulse(1)) || require(apdat_)->IsPushSoftLabel(6)) {
            mode = (mode + 1) % 3;
            state_ = 0;
            select_ = 0;
        }
        if (mode == 0) {
            Update_param();
        } else if (mode == 1) {
            Update_gameParam();
        } else if (mode == 2) {
            Update_window();
        }
        return true;
    }
}

// M:form.DebugForm.Update_param
bool DebugForm::Update_param() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.Update_param", game);
    {
        game::Team::ensure_initialized();
        game::Map::ensure_initialized();
        game::MapMain::ensure_initialized();
        data::TenantData::ensure_initialized();
        game::UserData::ensure_initialized();
        main::AppData::ensure_initialized();

        pls::cs::Int32 num = 12;
        if (state_ == 0) {
            pls::cs::Int32 num2 = 4;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num2) % num2;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num2) % num2;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    DebugForm::COATEVA_TEAM_ID() = 1 - DebugForm::COATEVA_TEAM_ID();
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    DebugForm::COATEVA_TEAM_ID() = 1 - DebugForm::COATEVA_TEAM_ID();
                }
            }
            if (select_ == 2) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    DebugForm::COATEVA_ROOT_INDEX() = (DebugForm::COATEVA_ROOT_INDEX() - 1 + 9) % 9;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    DebugForm::COATEVA_ROOT_INDEX() = (DebugForm::COATEVA_ROOT_INDEX() + 1 + 9) % 9;
                }
            }
            if (select_ == 3) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    DebugForm::COATEVA_WAKU() = 1 - DebugForm::COATEVA_WAKU();
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    DebugForm::COATEVA_WAKU() = 1 - DebugForm::COATEVA_WAKU();
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 1) {
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            for (pls::cs::Int32 i = 0; i < game::Team::ch_ceva().length(); ++i) {
                if (select_ == i + 1) {
                    if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                        game::Team::ch_ceva()[i] = 1 - game::Team::ch_ceva()[i];
                    }
                    if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                        game::Team::ch_ceva()[i] = 1 - game::Team::ch_ceva()[i];
                    }
                }
            }
            if ((PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                 PLS_API(require(canvas_)->CheckKeyRepeat(262144))) &&
                ([&]() {
                    auto cs_left = pls::cs::box(require(udat_)->teams_);
                    auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<game::Team>>{});
                    return cs_left != cs_right;
                }())) {
                require(require(udat_)->teams_.get_Item(0))->Update_coatEva();
                require(require(udat_)->teams_.get_Item(1))->Update_coatEva();
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 2) {
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    DebugForm::CH_DATA_INDEX() = 1 - DebugForm::CH_DATA_INDEX();
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    DebugForm::CH_DATA_INDEX() = 1 - DebugForm::CH_DATA_INDEX();
                }
            }
            if (select_ == 2) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    DebugForm::CH_DATA_INDEX2() = (DebugForm::CH_DATA_INDEX2() - 1 + 6) % 6;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    DebugForm::CH_DATA_INDEX2() = (DebugForm::CH_DATA_INDEX2() + 1 + 6) % 6;
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 3) {
            pls::cs::Int32 mAPCHIP_COAT_WNUM = game::Map::MAPCHIP_COAT_WNUM();
            pls::cs::Int32 mAPCHIP_COAT_HNUM = game::Map::MAPCHIP_COAT_HNUM();
            pls::cs::Int32 num3 = 0;
            if (!is_null(require(apdat_)->map_)) {
                num3 = require(require(apdat_)->map_)->goalBackNetNum_;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    game::Map::MAPCHIP_COAT_WNUM() =
                        main::AppData::ClampMin(game::Map::MAPCHIP_COAT_WNUM() - 1, 1);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    game::Map::MAPCHIP_COAT_WNUM() =
                        main::AppData::ClampMax(game::Map::MAPCHIP_COAT_WNUM() + 1, 100);
                }
            }
            if (select_ == 2) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    game::Map::MAPCHIP_COAT_HNUM() =
                        main::AppData::ClampMin(game::Map::MAPCHIP_COAT_HNUM() - 1, 1);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    game::Map::MAPCHIP_COAT_HNUM() =
                        main::AppData::ClampMax(game::Map::MAPCHIP_COAT_HNUM() + 1, 100);
                }
            }
            if (select_ == 3 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                require(require(apdat_)->camera)->ChangeMode(0);
                return PLS_API(require(formMan_)->Pop());
            }
            if (select_ == 4 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                require(require(apdat_)->camera)->ChangeMode(1);
                return PLS_API(require(formMan_)->Pop());
            }
            if (select_ == 5 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                require(require(apdat_)->camera)->ChangeMode(2);
                return PLS_API(require(formMan_)->Pop());
            }
            if (select_ == 6) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    {
                        auto cs_target = require(apdat_)->map_;
                        pls::cs::Int32 cs_value =
                            main::AppData::ClampMin(require(require(apdat_)->map_)->goalBackNetNum_ - 1, 2);
                        require(cs_target)->goalBackNetNum_ = cs_value;
                    }
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    {
                        auto cs_target = require(apdat_)->map_;
                        pls::cs::Int32 cs_value =
                            main::AppData::ClampMax(require(require(apdat_)->map_)->goalBackNetNum_ + 1, 3);
                        require(cs_target)->goalBackNetNum_ = cs_value;
                    }
                }
            }
            if (!is_null(require(apdat_)->map_) &&
                (mAPCHIP_COAT_WNUM != game::Map::MAPCHIP_COAT_WNUM() ||
                 mAPCHIP_COAT_HNUM != game::Map::MAPCHIP_COAT_HNUM() ||
                 num3 != require(require(apdat_)->map_)->goalBackNetNum_)) {
                game::Camera::SetScreenData();
                require(require(apdat_)->map_)->SetCoatLine();
                for (pls::cs::Int32 j = 0; j < require(udat_)->teams_.length(); ++j) {
                    require(require(udat_)->teams_.get_Item(j))->Init_coatEva();
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 4) {
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    DebugForm::COATEVA_TEAM_ID() = 1 - DebugForm::COATEVA_TEAM_ID();
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    DebugForm::COATEVA_TEAM_ID() = 1 - DebugForm::COATEVA_TEAM_ID();
                }
            }
            if (select_ == 2) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    DebugForm::COATEVA_PLAYER_ID() = (DebugForm::COATEVA_PLAYER_ID() - 1 + 11) % 11;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    DebugForm::COATEVA_PLAYER_ID() = (DebugForm::COATEVA_PLAYER_ID() + 1 + 11) % 11;
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 5) {
            pls::cs::Int32 num4 = 3;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num4) % num4;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num4) % num4;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                require(udat_)->League_update();
            }
            if (select_ == 2) {
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 6) {
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1) {
            }
            if (select_ == 2) {
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 7) {
            pls::cs::Int32 num5 = 6;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num5) % num5;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num5) % num5;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                PLS_API(require(formMan_)->ChangeCurrentForm(require(apdat_)->frmSoccer_));
            }
            if (select_ == 2) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    {
                        auto cs_target = require(require(udat_)->gm_)->team_potential_;
                        auto cs_index = 0;
                        auto cs_value = main::AppData::ClampMin(
                            require(require(udat_)->gm_)->team_potential_[0] - 100, 0);
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    {
                        auto cs_target = require(require(udat_)->gm_)->team_potential_;
                        auto cs_index = 0;
                        auto cs_value = main::AppData::ClampMax(
                            require(require(udat_)->gm_)->team_potential_[0] + 100, 1000);
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
            }
            if (select_ == 3) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    {
                        auto cs_target = require(require(udat_)->gm_)->team_potential_;
                        auto cs_index = 1;
                        auto cs_value = main::AppData::ClampMin(
                            require(require(udat_)->gm_)->team_potential_[1] - 100, 0);
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    {
                        auto cs_target = require(require(udat_)->gm_)->team_potential_;
                        auto cs_index = 1;
                        auto cs_value = main::AppData::ClampMax(
                            require(require(udat_)->gm_)->team_potential_[1] + 100, 1000);
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
            }
            if (select_ == 4) {
            }
            if (select_ == 5) {
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 8) {
            pls::cs::Int32 num6 = 6;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num6) % num6;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num6) % num6;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    GOAL = 1 - GOAL;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    GOAL = 1 - GOAL;
                }
            }
            if (select_ == 2) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    GOAL_INDEX = (GOAL_INDEX - 1 + game::Map::GOAL1_PARTS_POS().length()) %
                                 game::Map::GOAL1_PARTS_POS().length();
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    GOAL_INDEX = (GOAL_INDEX + 1 + game::Map::GOAL1_PARTS_POS().length()) %
                                 game::Map::GOAL1_PARTS_POS().length();
                }
            }
            if (select_ == 3) {
                IntArray array = IntArray{};
                if (GOAL == 0) {
                    array = game::Map::GOAL1_PARTS_POS()[GOAL_INDEX];
                }
                if (GOAL == 1) {
                    array = game::Map::GOAL2_PARTS_POS()[GOAL_INDEX];
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    array[0] = main::AppData::ClampMin(array[0] - 1, -1000);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    array[0] = main::AppData::ClampMax(array[0] + 1, 1000);
                }
            }
            if (select_ == 4) {
                IntArray array2 = IntArray{};
                if (GOAL == 0) {
                    array2 = game::Map::GOAL1_PARTS_POS()[GOAL_INDEX];
                }
                if (GOAL == 1) {
                    array2 = game::Map::GOAL2_PARTS_POS()[GOAL_INDEX];
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    array2[1] = main::AppData::ClampMin(array2[1] - 1, -1000);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    array2[1] = main::AppData::ClampMax(array2[1] + 1, 1000);
                }
            }
            if (select_ == 5) {
                pls::cs::Int32 num7 = 0;
                if (GOAL == 0) {
                    num7 = game::Map::GOAL1_PARTS_GRA()[GOAL_INDEX][2];
                }
                if (GOAL == 1) {
                    num7 = game::Map::GOAL2_PARTS_GRA()[GOAL_INDEX][2];
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    num7 = main::AppData::ClampMin(num7 - 1, -1000);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    num7 = main::AppData::ClampMax(num7 + 1, 1000);
                }
                if (GOAL == 0) {
                    game::Map::GOAL1_PARTS_GRA()[GOAL_INDEX][2] = num7;
                }
                if (GOAL == 1) {
                    game::Map::GOAL2_PARTS_GRA()[GOAL_INDEX][2] = num7;
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 9) {
            if (GOAL_INDEX >= game::MapMain::GOAL1_PARTS_POS().length()) {
                GOAL_INDEX = 0;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    GOAL = 1 - GOAL;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    GOAL = 1 - GOAL;
                }
            }
            if (select_ == 2) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    GOAL_INDEX = (GOAL_INDEX - 1 + game::MapMain::GOAL1_PARTS_POS().length()) %
                                 game::MapMain::GOAL1_PARTS_POS().length();
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    GOAL_INDEX = (GOAL_INDEX + 1 + game::MapMain::GOAL1_PARTS_POS().length()) %
                                 game::MapMain::GOAL1_PARTS_POS().length();
                }
            }
            if (select_ == 3) {
                IntArray array3 = IntArray{};
                if (GOAL == 0) {
                    array3 = game::MapMain::GOAL1_PARTS_POS()[GOAL_INDEX];
                }
                if (GOAL == 1) {
                    array3 = game::MapMain::GOAL2_PARTS_POS()[GOAL_INDEX];
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    array3[0] = main::AppData::ClampMin(array3[0] - 1, -1000);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    array3[0] = main::AppData::ClampMax(array3[0] + 1, 1000);
                }
            }
            if (select_ == 4) {
                IntArray array4 = IntArray{};
                if (GOAL == 0) {
                    array4 = game::MapMain::GOAL1_PARTS_POS()[GOAL_INDEX];
                }
                if (GOAL == 1) {
                    array4 = game::MapMain::GOAL2_PARTS_POS()[GOAL_INDEX];
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    array4[1] = main::AppData::ClampMin(array4[1] - 1, -1000);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    array4[1] = main::AppData::ClampMax(array4[1] + 1, 1000);
                }
            }
            if (select_ == 5) {
                pls::cs::Int32 num8 = 0;
                if (GOAL == 0) {
                    num8 = game::MapMain::GOAL1_PARTS_GRA()[GOAL_INDEX][2];
                }
                if (GOAL == 1) {
                    num8 = game::MapMain::GOAL2_PARTS_GRA()[GOAL_INDEX][2];
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    num8 = main::AppData::ClampMin(num8 - 1, -1000);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    num8 = main::AppData::ClampMax(num8 + 1, 1000);
                }
                if (GOAL == 0) {
                    game::MapMain::GOAL1_PARTS_GRA()[GOAL_INDEX][2] = num8;
                }
                if (GOAL == 1) {
                    game::MapMain::GOAL2_PARTS_GRA()[GOAL_INDEX][2] = num8;
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 10) {
            pls::cs::Int32 num9 = 11;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num9) % num9;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num9) % num9;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1) {
                pls::cs::Int32 num10 = DebugForm::flg_loadCheck();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_loadCheck() = 1;
                }
                if (num10 != DebugForm::flg_loadCheck()) {
                    for (pls::cs::Int32 k = 0; k < require(udat_)->tenants_.length(); ++k) {
                        {
                            auto cs_receiver = require(udat_)->tenants_.get_Item(k);
                            pls::cs::Int32 cs_arg0 = data::TenantData::TENANT_ROOT()[k];
                            require(cs_receiver)->Init(cs_arg0);
                        }
                        require(require(udat_)->tenants_.get_Item(k))->BuildTenant(6);
                        require(require(udat_)->tenants_.get_Item(k))->ChangeState(1);
                    }
                    for (pls::cs::Int32 l = 0; l < require(apdat_)->pData_.length(); ++l) {
                        if (PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_))) >=
                            30) {
                            break;
                        }
                        pls::cs::Ref<data::PlayerData> playerData = require(apdat_)->pData_.get_Item(l);
                        if (PLS_API(kl_unity_util::BitUtil::Check(require(playerData)->flag_, 12))) {
                            continue;
                        }
                        data::PlayerData::Employ(l);
                    }
                    for (pls::cs::Int32 m = 0; m < require(udat_)->researchPoint_.length(); ++m) {
                        require(udat_)->AddResearchPoint(m, 10000);
                    }
                    pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(0);
                    require(teamData)->stadium_ = 2;
                    {
                        auto cs_target = udat_;
                        pls::cs::Int32 cs_value =
                            main::AppData::ClampMax(require(udat_)->tAreaRootNum_ + 1, 2);
                        require(cs_target)->tAreaRootNum_ = cs_value;
                    }
                    require(require(apdat_)->mapMain_)->UpdateTrainingCoatNum();
                    {
                        auto cs_target = udat_;
                        pls::cs::Int32 cs_value = main::AppData::ClampMax(require(udat_)->tAreaLv_ + 1, 2);
                        require(cs_target)->tAreaLv_ = cs_value;
                    }
                    require(require(apdat_)->frmGame_)->SetAllDraw();
                }
            }
            if (select_ == 2) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    game::UserData::DEBUG_DISPFPS() = (game::UserData::DEBUG_DISPFPS() - 1 + 2) % 2;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    game::UserData::DEBUG_DISPFPS() = (game::UserData::DEBUG_DISPFPS() + 1 + 2) % 2;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    game::UserData::DEBUG_DISPFPS() = (game::UserData::DEBUG_DISPFPS() + 1 + 2) % 2;
                }
            }
            if (select_ == 3) {
                pls::cs::Int32 num11 = require(apdat_)->newsTitles_.length();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    DebugForm::ch_news() = (DebugForm::ch_news() - 1 + num11) % num11;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    DebugForm::ch_news() = (DebugForm::ch_news() + 1 + num11) % num11;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    {
                        auto cs_receiver = apdat_;
                        pls::cs::Ref<pls::kairo::FormBase> cs_arg0 =
                            SubForm::MakeNews(DebugForm::ch_news(), pls::cs::String{});
                        require(cs_receiver)->Push(cs_arg0);
                    }
                }
            }
            if (select_ == 4) {
                pls::cs::Int32 num12 = main::AppData::talks_().length();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    DebugForm::ch_talks() = (DebugForm::ch_talks() - 1 + num12) % num12;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    DebugForm::ch_talks() = (DebugForm::ch_talks() + 1 + num12) % num12;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    pls::cs::Ref<SubForm> form =
                        SubForm::MakeTalkForm(DebugForm::ch_talks(), literal(u"<x>"));
                    require(apdat_)->Push(form);
                }
            }
            if (select_ == 5) {
                pls::cs::Int32 num13 = require(apdat_)->eventMsgs_.length();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    DebugForm::ch_eventMsgs() = (DebugForm::ch_eventMsgs() - 1 + num13) % num13;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    DebugForm::ch_eventMsgs() = (DebugForm::ch_eventMsgs() + 1 + num13) % num13;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576)) && DebugForm::ch_eventMsgs() >= 3) {
                    pls::cs::Ref<SubForm> form2 =
                        SubForm::MakeEvent(require(apdat_)->eventMsgs_[DebugForm::ch_eventMsgs()],
                                           literal(u"<x>"), DebugForm::ch_eventMsgs());
                    require(apdat_)->Push(form2);
                }
            }
            if (select_ == 6) {
                pls::cs::Int32 num14 = game::UserData::POPUP_MEM().length();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    DebugForm::ch_popUp() = (DebugForm::ch_popUp() - 1 + num14) % num14;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    DebugForm::ch_popUp() = (DebugForm::ch_popUp() + 1 + num14) % num14;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    require(apdat_)->AddPopupMessage(DebugForm::ch_popUp(), literal(u"<x>"));
                    PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
                }
            }
            if (select_ == 7) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::ch_elements() = 1 - DebugForm::ch_elements();
                    if (DebugForm::ch_elements() == 1) {
                        for (pls::cs::Int32 n = 0; n < 6; ++n) {
                            require(udat_)->OnEventFlg(pls::cs::Int32(1) << n);
                        }
                        {
                            auto cs_target = require(require(apdat_)->save_)->ints;
                            auto cs_index = 0;
                            auto cs_old = cs_target.at(cs_index);
                            auto cs_rhs = 1000000;
                            pls::cs::Int32 cs_value = cs_old + cs_rhs;
                            cs_target.at(cs_index) = cs_value;
                        }
                        for (pls::cs::Int32 num15 = 0; num15 < require(udat_)->researchPoint_.length();
                             ++num15) {
                            require(udat_)->AddResearchPoint(num15, 10000);
                        }
                        for (pls::cs::Int32 num16 = 0; num16 < require(apdat_)->formationData_.length();
                             ++num16) {
                            pls::cs::Ref<data::FormationData> formationData =
                                require(apdat_)->formationData_.get_Item(num16);
                            require(formationData)->state_ = 1;
                        }
                        for (pls::cs::Int32 num17 = 0; num17 < require(apdat_)->leagueData_.length();
                             ++num17) {
                            pls::cs::Ref<data::LeagueData> leagueData =
                                require(apdat_)->leagueData_.get_Item(num17);
                            require(leagueData)->ChangeState(1);
                        }
                        require(udat_)->OnEventFlg(1);
                        for (pls::cs::Int32 num18 = 0; num18 < require(apdat_)->qmData_.length(); ++num18) {
                            pls::cs::Ref<data::QuestMatchData> questMatchData =
                                require(apdat_)->qmData_.get_Item(num18);
                            require(questMatchData)->ChangeState(2);
                        }
                        require(udat_)->OnEventFlg(1);
                        for (pls::cs::Int32 num19 = 0; num19 < require(apdat_)->trainingData_.length();
                             ++num19) {
                            pls::cs::Ref<data::TrainingData> trainingData =
                                require(apdat_)->trainingData_.get_Item(num19);
                            require(trainingData)->ChangeState(1);
                        }
                        for (pls::cs::Int32 num20 = 0; num20 < require(apdat_)->fanActData_.length();
                             ++num20) {
                            pls::cs::Ref<data::FanActData> fanActData =
                                require(apdat_)->fanActData_.get_Item(num20);
                            require(fanActData)->ChangeState(1);
                        }
                        for (pls::cs::Int32 num21 = 0; num21 < require(apdat_)->tradeData_.length();
                             ++num21) {
                            pls::cs::Ref<data::TradeData> tradeData =
                                require(apdat_)->tradeData_.get_Item(num21);
                            require(tradeData)->ChangeState(1);
                        }
                        for (pls::cs::Int32 num22 = 0; num22 < require(apdat_)->tenantData_.length();
                             ++num22) {
                            pls::cs::Ref<data::TenantData> tenantData =
                                require(apdat_)->tenantData_.get_Item(num22);
                            require(tenantData)->ChangeState(1);
                        }
                        for (pls::cs::Int32 num23 = 0; num23 < require(apdat_)->sponsorData_.length();
                             ++num23) {
                            pls::cs::Ref<data::SponsorData> sponsorData =
                                require(apdat_)->sponsorData_.get_Item(num23);
                            require(sponsorData)->ChangeState(1);
                        }
                        for (pls::cs::Int32 num24 = 0; num24 < require(apdat_)->svisorData_.length();
                             ++num24) {
                            pls::cs::Ref<data::SupervisorData> supervisorData =
                                require(apdat_)->svisorData_.get_Item(num24);
                            require(supervisorData)->ChangeState(1);
                        }
                        for (pls::cs::Int32 num25 = 0; num25 < require(apdat_)->svisorData_.length();
                             ++num25) {
                            pls::cs::Ref<data::SupervisorData> supervisorData2 =
                                require(apdat_)->svisorData_.get_Item(num25);
                            require(supervisorData2)->SetLv(9);
                        }
                        for (pls::cs::Int32 num26 = 0; num26 < require(apdat_)->fanBonus_.length(); ++num26) {
                            require(require(apdat_)->fanBonus_.get_Item(num26))->ChangeState(1);
                        }
                    }
                }
            } else if (select_ == 8) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    game::UserData::DEBUG_SALLARY_MAX() = (game::UserData::DEBUG_SALLARY_MAX() - 1 + 2) % 2;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    game::UserData::DEBUG_SALLARY_MAX() = (game::UserData::DEBUG_SALLARY_MAX() + 1 + 2) % 2;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    game::UserData::DEBUG_SALLARY_MAX() = (game::UserData::DEBUG_SALLARY_MAX() + 1 + 2) % 2;
                }
            } else if (select_ == 9) {
                pls::cs::Int32 num27 = game::UserData::EF_FEELPT_COMMENT_()[0].length();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    fukidashiIndex_ = (fukidashiIndex_ - 1 + num27) % num27;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    fukidashiIndex_ = (fukidashiIndex_ + 1 + num27) % num27;
                }
            } else if (select_ == 10) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    --fukidashiFeel_;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    ++fukidashiFeel_;
                }
                if (fukidashiFeel_ < 0) {
                    fukidashiFeel_ = 0;
                }
                if (fukidashiFeel_ >= 100) {
                    fukidashiFeel_ = 100;
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 11) {
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    DebugForm::CH_DATA_INDEX() = (DebugForm::CH_DATA_INDEX() - 1) % 2;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    DebugForm::CH_DATA_INDEX() = (DebugForm::CH_DATA_INDEX() + 1) % 2;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    DebugForm::CH_DATA_INDEX() = (DebugForm::CH_DATA_INDEX() + 1) % 2;
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        }
        return true;
    }
}

// M:form.DebugForm.Update_gameParam
bool DebugForm::Update_gameParam() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.Update_gameParam", game);
    {
        SoccerForm::ensure_initialized();
        data::TenantData::ensure_initialized();
        game::Team::ensure_initialized();
        main::AppData::ensure_initialized();
        game::Ball::ensure_initialized();
        game::Map::ensure_initialized();
        game::Player::ensure_initialized();

        pls::cs::Int32 num = 7;
        if (state_ == 0) {
            pls::cs::Int32 num2 = 16;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num2) % num2;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num2) % num2;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    {
                        auto cs_target = require(require(apdat_)->save_)->ints;
                        auto cs_index = 1;
                        auto cs_value =
                            main::AppData::ClampMin(require(require(apdat_)->save_)->ints[1] - 1, 0);
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    {
                        auto cs_target = require(require(apdat_)->save_)->ints;
                        auto cs_index = 1;
                        auto cs_value =
                            main::AppData::ClampMax(require(require(apdat_)->save_)->ints[1] + 1, 100);
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
            }
            if (select_ == 2) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    require(require(apdat_)->save_)->ints[2] =
                        (require(require(apdat_)->save_)->ints[2] - 1 + 12) % 12;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    require(require(apdat_)->save_)->ints[2] =
                        (require(require(apdat_)->save_)->ints[2] + 1 + 12) % 12;
                }
            }
            if (select_ == 3) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    require(require(apdat_)->save_)->ints[3] =
                        (require(require(apdat_)->save_)->ints[3] - 1 + 4) % 4;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    require(require(apdat_)->save_)->ints[3] =
                        (require(require(apdat_)->save_)->ints[3] + 1 + 4) % 4;
                }
            }
            if (select_ == 4) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    {
                        auto cs_target = require(require(apdat_)->save_)->lngs;
                        auto cs_index = 0;
                        auto cs_value = main::AppData::ClampMinLong(
                            require(require(apdat_)->save_)->lngs[0] - pls::cs::Int64(10000), -10000000ll);
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    {
                        auto cs_target = require(require(apdat_)->save_)->lngs;
                        auto cs_index = 0;
                        auto cs_value = main::AppData::ClampMaxLong(
                            require(require(apdat_)->save_)->lngs[0] + pls::cs::Int64(10000), 1000000000ll);
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    {
                        auto cs_target = require(require(apdat_)->save_)->lngs;
                        auto cs_index = 0;
                        auto cs_value = main::AppData::ClampMaxLong(
                            require(require(apdat_)->save_)->lngs[0] + pls::cs::Int64(1000000), 1000000000ll);
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
            }
            if (select_ == 5 && (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                                 PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                                 PLS_API(require(canvas_)->CheckKeyRepeat(1048576)))) {
                SoccerForm::DEBUG_GAMETIMESTOP() = 1;
            }
            if (select_ == 6 && (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                                 PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                                 PLS_API(require(canvas_)->CheckKeyRepeat(1048576)))) {
                SoccerForm::DEBUG_GAMEMODE_5KEY() = 1;
            }
            if (select_ == 7) {
                pls::cs::Int32 num3 = DebugForm::flg_playerAll();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_playerAll() = 1;
                }
                if (num3 != DebugForm::flg_playerAll()) {
                    pls::cs::Int32 num4 = pls::cs::Int32(require(apdat_)->pData_.length()) - 1;
                    while ((num4 >= 0)) {
                        if ((PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_))) >=
                             30)) {
                            break;
                        }
                        pls::cs::Ref<data::PlayerData> playerData = require(apdat_)->pData_.get_Item(num4);
                        if (PLS_API(kl_unity_util::BitUtil::Check(require(playerData)->flag_, 12))) {

                        } else {
                            data::PlayerData::Employ(num4);
                        }
                        --num4;
                    }
                }
            }
            if (select_ == 8) {
                pls::cs::Int32 num5 = DebugForm::flg_playerLvMax();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_playerLvMax() = 1;
                }
                if (num5 != DebugForm::flg_playerLvMax()) {
                    for (pls::cs::Int32 i = 0; i < require(apdat_)->pData_.length(); ++i) {
                        pls::cs::Ref<data::PlayerData> playerData2 = require(apdat_)->pData_.get_Item(i);
                        if (PLS_API(kl_unity_util::BitUtil::Check(require(playerData2)->flag_, 12))) {
                            continue;
                        }
                        require(playerData2)->SetLv(30);
                    }
                }
            }
            if (select_ == 9) {
                pls::cs::Int32 num6 = DebugForm::flg_playerTPMax();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_playerTPMax() = 1;
                }
                if (num6 != DebugForm::flg_playerTPMax()) {
                    IntArray array = IntArray::make(5);
                    for (pls::cs::Int32 j = 0; j < array.length(); ++j) {
                        array[j] = 1000;
                    }
                    for (pls::cs::Int32 k = 0; k < require(apdat_)->pData_.length(); ++k) {
                        pls::cs::Ref<data::PlayerData> playerData3 = require(apdat_)->pData_.get_Item(k);
                        if (PLS_API(kl_unity_util::BitUtil::Check(require(playerData3)->flag_, 12))) {
                            continue;
                        }
                        require(playerData3)->AddPhysicalParam(array);
                    }
                }
            }
            if (select_ == 10) {
                pls::cs::Int32 num7 = DebugForm::flg_formationMax();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_formationMax() = 1;
                }
                if (num7 != DebugForm::flg_formationMax()) {
                    for (pls::cs::Int32 l = 0; l < require(apdat_)->formationData_.length(); ++l) {
                        pls::cs::Ref<data::FormationData> formationData =
                            require(apdat_)->formationData_.get_Item(l);
                        require(formationData)->state_ = 1;
                    }
                }
            }
            if (select_ == 11) {
                pls::cs::Int32 num8 = DebugForm::flg_warPMax();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_warPMax() = 1;
                }
                if (num8 != DebugForm::flg_warPMax()) {
                    pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(0);
                    require(teamData)->AddTeamEva(1000);
                }
            }
            if (select_ == 12) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    DebugForm::flg_researchPointMax() = 0;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    DebugForm::flg_researchPointMax() = 1;
                }
                if (DebugForm::flg_researchPointMax() == 1) {
                    for (pls::cs::Int32 m = 0; m < require(udat_)->researchPoint_.length(); ++m) {
                        require(udat_)->AddResearchPoint(m, 10000);
                    }
                }
            }
            if (select_ == 13) {
                pls::cs::Int32 num9 = DebugForm::flg_loadCheck();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_loadCheck() = 1;
                }
                if (num9 != DebugForm::flg_loadCheck()) {
                    for (pls::cs::Int32 n = 0; n < require(udat_)->tenants_.length(); ++n) {
                        {
                            auto cs_receiver = require(udat_)->tenants_.get_Item(n);
                            pls::cs::Int32 cs_arg0 = data::TenantData::TENANT_ROOT()[n];
                            require(cs_receiver)->Init(cs_arg0);
                        }
                        require(require(udat_)->tenants_.get_Item(n))->BuildTenant(6);
                        require(require(udat_)->tenants_.get_Item(n))->ChangeState(1);
                    }
                    for (pls::cs::Int32 num10 = 0; num10 < require(apdat_)->pData_.length(); ++num10) {
                        if (PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_))) >=
                            30) {
                            break;
                        }
                        pls::cs::Ref<data::PlayerData> playerData4 = require(apdat_)->pData_.get_Item(num10);
                        if (PLS_API(kl_unity_util::BitUtil::Check(require(playerData4)->flag_, 12))) {

                        } else {
                            data::PlayerData::Employ(num10);
                        }
                    }
                    for (pls::cs::Int32 num11 = 0; num11 < require(udat_)->researchPoint_.length(); ++num11) {
                        require(udat_)->AddResearchPoint(num11, 10000);
                    }
                    pls::cs::Ref<data::TeamData> teamData2 = require(apdat_)->tData_.get_Item(0);
                    require(teamData2)->stadium_ = 2;
                    {
                        auto cs_target = udat_;
                        pls::cs::Int32 cs_value =
                            main::AppData::ClampMax(require(udat_)->tAreaRootNum_ + 1, 2);
                        require(cs_target)->tAreaRootNum_ = cs_value;
                    }
                    require(require(apdat_)->mapMain_)->UpdateTrainingCoatNum();
                    {
                        auto cs_target = udat_;
                        pls::cs::Int32 cs_value = main::AppData::ClampMax(require(udat_)->tAreaLv_ + 1, 2);
                        require(cs_target)->tAreaLv_ = cs_value;
                    }
                    require(require(apdat_)->frmGame_)->SetAllDraw();
                }
            }
            if (select_ == 14 && (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                                  PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                                  PLS_API(require(canvas_)->CheckKeyRepeat(1048576)))) {
                DebugForm::flg_menuOpen() = 1;
                for (pls::cs::Int32 num12 = 0; num12 < 6; ++num12) {
                    require(udat_)->OnEventFlg(pls::cs::Int32(1) << num12);
                }
            }
            if (select_ == 15) {
                pls::cs::Int32 max_ = require(apdat_)->formationData_.length();
                pls::cs::Int32 num13 = 0;
                pls::cs::Int32 num14 = 0;
                for (pls::cs::Int32 num15 = 0; num15 < require(apdat_)->formationData_.length(); ++num15) {
                    pls::cs::Ref<data::FormationData> formationData2 =
                        require(apdat_)->formationData_.get_Item(num15);
                    if (require(formationData2)->state_ == 1) {
                        ++num13;
                    }
                }
                num14 = num13;
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    num14 = main::AppData::ClampMin(num14 - 1, 0);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    num14 = main::AppData::ClampMax(num14 + 1, max_);
                }
                if (num13 != num14) {
                    for (pls::cs::Int32 num16 = 0; num16 < require(apdat_)->formationData_.length();
                         ++num16) {
                        pls::cs::Ref<data::FormationData> formationData3 =
                            require(apdat_)->formationData_.get_Item(num16);
                        require(formationData3)->state_ = 0;
                        if (num16 < num14) {
                            require(formationData3)->state_ = 1;
                        }
                    }
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 1) {
            pls::cs::Int32 num17 = 16;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num17) % num17;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num17) % num17;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1 && (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                                 PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                                 PLS_API(require(canvas_)->CheckKeyRepeat(1048576)))) {
                DebugForm::max_fan() = 1;
                require(udat_)->fanParam_[0] = 10000;
            }
            if (select_ == 2 && (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                                 PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                                 PLS_API(require(canvas_)->CheckKeyRepeat(1048576)))) {
                DebugForm::max_assist() = 1;
                require(udat_)->fanParam_[1] = 1000;
            }
            if (select_ == 3 && (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                                 PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                                 PLS_API(require(canvas_)->CheckKeyRepeat(1048576)))) {
                DebugForm::max_nameValue() = 1;
                require(udat_)->fanParam_[2] = 10000;
            }
            if (select_ == 4) {
                pls::cs::Int32 num18 = DebugForm::flg_leagueMax();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_leagueMax() = 1;
                }
                if (num18 != DebugForm::flg_leagueMax()) {
                    for (pls::cs::Int32 num19 = 0; num19 < require(apdat_)->leagueData_.length(); ++num19) {
                        pls::cs::Ref<data::LeagueData> leagueData =
                            require(apdat_)->leagueData_.get_Item(num19);
                        require(leagueData)->ChangeState(1);
                    }
                    require(udat_)->OnEventFlg(1);
                }
            }
            if (select_ == 5) {
                pls::cs::Int32 num20 = DebugForm::flg_qmMax();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_qmMax() = 1;
                }
                if (num20 != DebugForm::flg_qmMax()) {
                    for (pls::cs::Int32 num21 = 0; num21 < require(apdat_)->qmData_.length(); ++num21) {
                        pls::cs::Ref<data::QuestMatchData> questMatchData =
                            require(apdat_)->qmData_.get_Item(num21);
                        require(questMatchData)->ChangeState(2);
                    }
                    require(udat_)->OnEventFlg(1);
                }
            }
            if (select_ == 6) {
                pls::cs::Int32 num22 = DebugForm::flg_trainingMax();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_trainingMax() = 1;
                }
                if (num22 != DebugForm::flg_trainingMax()) {
                    for (pls::cs::Int32 num23 = 0; num23 < require(apdat_)->trainingData_.length(); ++num23) {
                        pls::cs::Ref<data::TrainingData> trainingData =
                            require(apdat_)->trainingData_.get_Item(num23);
                        require(trainingData)->ChangeState(1);
                    }
                }
            }
            if (select_ == 7) {
                pls::cs::Int32 num24 = DebugForm::flg_fanPMax();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_fanPMax() = 1;
                }
                if (num24 != DebugForm::flg_fanPMax()) {
                    for (pls::cs::Int32 num25 = 0; num25 < require(apdat_)->fanActData_.length(); ++num25) {
                        pls::cs::Ref<data::FanActData> fanActData =
                            require(apdat_)->fanActData_.get_Item(num25);
                        require(fanActData)->ChangeState(1);
                    }
                }
            }
            if (select_ == 8) {
                pls::cs::Int32 num26 = DebugForm::flg_tradeMax();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_tradeMax() = 1;
                }
                if (num26 != DebugForm::flg_tradeMax()) {
                    for (pls::cs::Int32 num27 = 0; num27 < require(apdat_)->tradeData_.length(); ++num27) {
                        pls::cs::Ref<data::TradeData> tradeData = require(apdat_)->tradeData_.get_Item(num27);
                        require(tradeData)->ChangeState(1);
                    }
                }
            }
            if (select_ == 9) {
                pls::cs::Int32 num28 = DebugForm::flg_tenantMax();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_tenantMax() = 1;
                }
                if (num28 != DebugForm::flg_tenantMax()) {
                    for (pls::cs::Int32 num29 = 0; num29 < require(apdat_)->tenantData_.length(); ++num29) {
                        pls::cs::Ref<data::TenantData> tenantData =
                            require(apdat_)->tenantData_.get_Item(num29);
                        require(tenantData)->ChangeState(1);
                    }
                }
            }
            if (select_ == 10) {
                pls::cs::Int32 num30 = DebugForm::flg_sponsorMax();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_sponsorMax() = 1;
                }
                if (num30 != DebugForm::flg_sponsorMax()) {
                    for (pls::cs::Int32 num31 = 0; num31 < require(apdat_)->sponsorData_.length(); ++num31) {
                        pls::cs::Ref<data::SponsorData> sponsorData =
                            require(apdat_)->sponsorData_.get_Item(num31);
                        require(sponsorData)->ChangeState(1);
                    }
                }
            }
            if (select_ == 11) {
                pls::cs::Int32 num32 = DebugForm::flg_svisorMax();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_svisorMax() = 1;
                }
                if (num32 != DebugForm::flg_svisorMax()) {
                    for (pls::cs::Int32 num33 = 0; num33 < require(apdat_)->svisorData_.length(); ++num33) {
                        pls::cs::Ref<data::SupervisorData> supervisorData =
                            require(apdat_)->svisorData_.get_Item(num33);
                        require(supervisorData)->ChangeState(1);
                    }
                }
            }
            if (select_ == 12) {
                pls::cs::Int32 num34 = DebugForm::flg_LVMAX_svisor();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_LVMAX_svisor() = 1;
                }
                if (num34 != DebugForm::flg_LVMAX_svisor()) {
                    for (pls::cs::Int32 num35 = 0; num35 < require(apdat_)->svisorData_.length(); ++num35) {
                        pls::cs::Ref<data::SupervisorData> supervisorData2 =
                            require(apdat_)->svisorData_.get_Item(num35);
                        require(supervisorData2)->SetLv(9);
                    }
                }
            }
            if (select_ == 13) {
                pls::cs::Int32 num36 = DebugForm::flg_LVMAX_fanAct();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_LVMAX_fanAct() = 1;
                }
                if (num36 != DebugForm::flg_LVMAX_fanAct()) {
                    for (pls::cs::Int32 num37 = 0; num37 < require(apdat_)->fanActData_.length(); ++num37) {
                        pls::cs::Ref<data::FanActData> fa_data = require(apdat_)->fanActData_.get_Item(num37);
                        for (pls::cs::Int32 num38 = 0; num38 < 6; ++num38) {
                            data::FanActData::RankUp(fa_data);
                        }
                    }
                }
            }
            if (select_ == 14) {
                pls::cs::Int32 num39 = DebugForm::flg_LVMAX_sponsor();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_LVMAX_sponsor() = 1;
                }
                if (num39 != DebugForm::flg_LVMAX_sponsor()) {
                    for (pls::cs::Int32 num40 = 0; num40 < require(apdat_)->sponsorData_.length(); ++num40) {
                        pls::cs::Ref<data::SponsorData> sponsorData2 =
                            require(apdat_)->sponsorData_.get_Item(num40);
                        require(sponsorData2)->satisfactPoint_ = 100;
                    }
                }
            }
            if (select_ == 15) {
                pls::cs::Int32 num41 = DebugForm::flg_LVMAX_tenant();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                    PLS_API(require(canvas_)->CheckKeyRepeat(1048576))) {
                    DebugForm::flg_LVMAX_tenant() = 1;
                }
                if (num41 != DebugForm::flg_LVMAX_tenant()) {
                    for (pls::cs::Int32 num42 = 0; num42 < require(apdat_)->tenantData_.length(); ++num42) {
                        pls::cs::Ref<data::TenantData> tenantData2 =
                            require(apdat_)->tenantData_.get_Item(num42);
                        require(tenantData2)->SetLv(5);
                    }
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 2) {
            pls::cs::Int32 num43 = 11;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num43) % num43;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num43) % num43;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1 && (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                                 PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                                 PLS_API(require(canvas_)->CheckKeyPulse(1048576)))) {
                for (pls::cs::Int32 num44 = 0;
                     num44 < PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_)));
                     ++num44) {
                    pls::cs::Ref<data::PlayerData> playerData5 =
                        pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                            PLS_API(kl_java_util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_),
                                                                     num44)));
                    require(playerData5)->auraPoint_ = 10000;
                }
                return PLS_API(require(formMan_)->Pop());
            }
            if (select_ == 2) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    ch_formationId = (ch_formationId - 1 + 3) % 3;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    ch_formationId = (ch_formationId + 1 + 3) % 3;
                }
            }
            if (select_ == 3) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    {
                        auto cs_target = game::Team::FORMATION_TYPE_RATE();
                        auto cs_index = ch_formationId;
                        auto cs_value = main::AppData::ClampMin(
                            game::Team::FORMATION_TYPE_RATE()[ch_formationId] - 10, -1000);
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    {
                        auto cs_target = game::Team::FORMATION_TYPE_RATE();
                        auto cs_index = ch_formationId;
                        auto cs_value = main::AppData::ClampMax(
                            game::Team::FORMATION_TYPE_RATE()[ch_formationId] + 10, 1000);
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
            }
            if (select_ == 4) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    game::Team::FORMATION_RATE_DEFFECNE() =
                        main::AppData::ClampMin(game::Team::FORMATION_RATE_DEFFECNE() - 10, -1000);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    game::Team::FORMATION_RATE_DEFFECNE() =
                        main::AppData::ClampMax(game::Team::FORMATION_RATE_DEFFECNE() + 10, 1000);
                }
            }
            if (select_ == 5) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    ch_ameftoId = (ch_ameftoId - 1 + 3) % 3;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    ch_ameftoId = (ch_ameftoId + 1 + 3) % 3;
                }
            }
            if (select_ == 6) {
                pls::cs::Int32 num45 = game::Team::AMEFTO_PZ()[ch_ameftoId];
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    {
                        auto cs_target = game::Team::AMEFTO_PZ();
                        auto cs_index = ch_ameftoId;
                        auto cs_value =
                            main::AppData::ClampMin(game::Team::AMEFTO_PZ()[ch_ameftoId] - 10, -1000);
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    {
                        auto cs_target = game::Team::AMEFTO_PZ();
                        auto cs_index = ch_ameftoId;
                        auto cs_value =
                            main::AppData::ClampMax(game::Team::AMEFTO_PZ()[ch_ameftoId] + 10, 1000);
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
                if (num45 != game::Team::AMEFTO_PZ()[ch_ameftoId] && ([&]() {
                        auto cs_left = pls::cs::box(require(udat_)->teams_);
                        auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<game::Team>>{});
                        return cs_left != cs_right;
                    }()) &&
                    ch_ameftoId == require(require(apdat_)->frmSoccer_)->statusAmeftoMode_) {
                    PLS_API(kl_unity_util::Log::Info(
                        literal(u"■DebugForm.java update_gameParam() データ修正処理"),
                        pls::cs::Ref<pls::cs::ExceptionObject>{}));
                    if (!require(require(udat_)->gm_)->halfTime) {
                        {
                            auto cs_target = require(udat_)->teams_.get_Item(0);
                            pls::cs::Int32 cs_value = game::Team::AMEFTO_PZ()[ch_ameftoId];
                            require(cs_target)->amefto_pz = cs_value;
                        }
                    } else {
                        {
                            auto cs_target = require(udat_)->teams_.get_Item(1);
                            pls::cs::Int32 cs_value = game::Team::AMEFTO_PZ()[ch_ameftoId];
                            require(cs_target)->amefto_pz = cs_value;
                        }
                    }
                }
            }
            if (select_ == 7) {
                pls::cs::Int32 aMEFTO_ONECHARGETIME_PLAYER = game::Team::AMEFTO_ONECHARGETIME_PLAYER();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    game::Team::AMEFTO_ONECHARGETIME_PLAYER() =
                        main::AppData::ClampMin(game::Team::AMEFTO_ONECHARGETIME_PLAYER() - 10, 0);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    game::Team::AMEFTO_ONECHARGETIME_PLAYER() =
                        main::AppData::ClampMax(game::Team::AMEFTO_ONECHARGETIME_PLAYER() + 10, 1000);
                }
                if (aMEFTO_ONECHARGETIME_PLAYER != game::Team::AMEFTO_ONECHARGETIME_PLAYER() && ([&]() {
                        auto cs_left = pls::cs::box(require(udat_)->teams_);
                        auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<game::Team>>{});
                        return cs_left != cs_right;
                    }())) {
                    if (!require(require(udat_)->gm_)->halfTime) {
                        require(require(udat_)->teams_.get_Item(0))->amefto_oneChargeTime =
                            game::Team::AMEFTO_ONECHARGETIME_PLAYER();
                    } else {
                        require(require(udat_)->teams_.get_Item(1))->amefto_oneChargeTime =
                            game::Team::AMEFTO_ONECHARGETIME_PLAYER();
                    }
                }
            }
            if (select_ == 8 && (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                                 PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                                 PLS_API(require(canvas_)->CheckKeyRepeat(1048576)))) {
                for (pls::cs::Int32 num46 = 0; num46 < require(apdat_)->fanBonus_.length(); ++num46) {
                    require(require(apdat_)->fanBonus_.get_Item(num46))->ChangeState(1);
                }
            }
            if (select_ == 9) {
                pls::cs::Int32 max2 = require(apdat_)->trainingData_.length();
                pls::cs::Int32 num47 = 0;
                pls::cs::Int32 num48 = 0;
                for (pls::cs::Int32 num49 = 0; num49 < require(apdat_)->trainingData_.length(); ++num49) {
                    pls::cs::Ref<data::TrainingData> trainingData2 =
                        require(apdat_)->trainingData_.get_Item(num49);
                    if (require(trainingData2)->state_ == 1) {
                        ++num47;
                    }
                }
                num48 = num47;
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    num48 = main::AppData::ClampMin(num48 - 1, 0);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    num48 = main::AppData::ClampMax(num48 + 1, max2);
                }
                if (num47 != num48) {
                    for (pls::cs::Int32 num50 = 0; num50 < require(apdat_)->trainingData_.length(); ++num50) {
                        pls::cs::Ref<data::TrainingData> trainingData3 =
                            require(apdat_)->trainingData_.get_Item(num50);
                        require(trainingData3)->state_ = 0;
                        if (num50 < num48) {
                            require(trainingData3)->state_ = 1;
                        }
                    }
                }
            }
            if (select_ == 10 && (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                                  PLS_API(require(canvas_)->CheckKeyRepeat(262144)) ||
                                  PLS_API(require(canvas_)->CheckKeyRepeat(1048576)))) {
                require(require(apdat_)->sysSave_)->ints[14] =
                    1 - require(require(apdat_)->sysSave_)->ints[14];
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 3) {
            pls::cs::Int32 num51 = 13;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num51) % num51;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num51) % num51;
            }
            pls::cs::Ref<pls::kairo::SoundPlayer> instance = PLS_API(pls::kairo::SoundPlayer::GetInstance());
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    ch_bgmIndex = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_bgmIndex - 1;
                            auto cs_right = main::AppData::SOUND_FILENAME()[0].length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = main::AppData::SOUND_FILENAME()[0].length();
                        return cs_left % cs_right;
                    }());
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    ch_bgmIndex = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_bgmIndex + 1;
                            auto cs_right = main::AppData::SOUND_FILENAME()[0].length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = main::AppData::SOUND_FILENAME()[0].length();
                        return cs_left % cs_right;
                    }());
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    require(apdat_)->PlayBgm(ch_bgmIndex);
                }
            }
            if (select_ == 2) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    ch_seIndex = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_seIndex - 1;
                            auto cs_right = main::AppData::SOUND_FILENAME()[1].length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = main::AppData::SOUND_FILENAME()[1].length();
                        return cs_left % cs_right;
                    }());
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    ch_seIndex = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_seIndex + 1;
                            auto cs_right = main::AppData::SOUND_FILENAME()[1].length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = main::AppData::SOUND_FILENAME()[1].length();
                        return cs_left % cs_right;
                    }());
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    {
                        auto cs_left_63 = ch_seIndex;
                        auto cs_right_63 = main::AppData::SOUND_FILENAME()[0].length();
                        pls::cs::Int32 cs_arg0 = cs_left_63 + cs_right_63;
                        require(apdat_)->PlaySe(cs_arg0);
                    }
                }
            }
            if (select_ == 3) {
                pls::cs::Int32 num52 = ch_bgmVolumeIndex;
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    ch_bgmVolumeIndex = (ch_bgmVolumeIndex - 1 + 6) % 6;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    ch_bgmVolumeIndex = (ch_bgmVolumeIndex + 1 + 6) % 6;
                }
                if (num52 != ch_bgmVolumeIndex) {
                    require(require(apdat_)->sysSave_)->ints[3] = ch_bgmVolumeIndex;
                    PLS_API(([&]() -> void {
                        pls::cs::Int32 cs_arg1 = require(require(apdat_)->sysSave_)->ints[3] * 51;
                        require(instance)->SetVolume(0, cs_arg1);
                    }()));
                    PLS_API(([&]() -> void {
                        bool cs_arg1 = require(require(apdat_)->sysSave_)->ints[3] == 0;
                        require(instance)->SetMute(0, cs_arg1);
                    }()));
                }
            }
            if (select_ == 4) {
                pls::cs::Int32 num53 = ch_seVolumeIndex;
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    ch_seVolumeIndex = (ch_seVolumeIndex - 1 + 6) % 6;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    ch_seVolumeIndex = (ch_seVolumeIndex + 1 + 6) % 6;
                }
                if (num53 != ch_seVolumeIndex) {
                    require(require(apdat_)->sysSave_)->ints[4] = ch_seVolumeIndex;
                    PLS_API(([&]() -> void {
                        pls::cs::Int32 cs_arg1 = require(require(apdat_)->sysSave_)->ints[4] * 51;
                        require(instance)->SetVolume(1, cs_arg1);
                    }()));
                    PLS_API(([&]() -> void {
                        bool cs_arg1 = require(require(apdat_)->sysSave_)->ints[4] == 0;
                        require(instance)->SetMute(1, cs_arg1);
                    }()));
                    PLS_API(([&]() -> void {
                        pls::cs::Ref<pls::kairo::SoundBase> cs_arg0 =
                            require(require(apdat_)->resSound_)->sound.get_Item(5);
                        require(instance)->Play(cs_arg0);
                    }()));
                }
            }
            if (select_ == 5) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    game::Ball::SOUND_RANDOM() = 1 - game::Ball::SOUND_RANDOM();
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    game::Ball::SOUND_RANDOM() = 1 - game::Ball::SOUND_RANDOM();
                }
            }
            if (select_ == 6) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    ch_kickSound[0] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_kickSound[0] - 1;
                            auto cs_right = game::Ball::SOUND_KICK().length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = game::Ball::SOUND_KICK().length();
                        return cs_left % cs_right;
                    }());
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    ch_kickSound[0] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_kickSound[0] + 1;
                            auto cs_right = game::Ball::SOUND_KICK().length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = game::Ball::SOUND_KICK().length();
                        return cs_left % cs_right;
                    }());
                }
            }
            if (select_ == 7) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    ch_kickSound[1] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_kickSound[1] - 1;
                            auto cs_right = game::Ball::SOUND_KICK().length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = game::Ball::SOUND_KICK().length();
                        return cs_left % cs_right;
                    }());
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    ch_kickSound[1] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_kickSound[1] + 1;
                            auto cs_right = game::Ball::SOUND_KICK().length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = game::Ball::SOUND_KICK().length();
                        return cs_left % cs_right;
                    }());
                }
            }
            if (select_ == 8) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    ch_kickSound[2] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_kickSound[2] - 1;
                            auto cs_right = game::Ball::SOUND_KICK().length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = game::Ball::SOUND_KICK().length();
                        return cs_left % cs_right;
                    }());
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    ch_kickSound[2] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_kickSound[2] + 1;
                            auto cs_right = game::Ball::SOUND_KICK().length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = game::Ball::SOUND_KICK().length();
                        return cs_left % cs_right;
                    }());
                }
            }
            if (select_ == 9) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    ch_kickSound[3] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_kickSound[3] - 1;
                            auto cs_right = game::Ball::SOUND_KICK().length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = game::Ball::SOUND_KICK().length();
                        return cs_left % cs_right;
                    }());
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    ch_kickSound[3] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_kickSound[3] + 1;
                            auto cs_right = game::Ball::SOUND_KICK().length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = game::Ball::SOUND_KICK().length();
                        return cs_left % cs_right;
                    }());
                }
            }
            if (select_ == 10) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    ch_kickSound[4] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_kickSound[4] - 1;
                            auto cs_right = game::Ball::SOUND_KICK().length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = game::Ball::SOUND_KICK().length();
                        return cs_left % cs_right;
                    }());
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    ch_kickSound[4] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_kickSound[4] + 1;
                            auto cs_right = game::Ball::SOUND_KICK().length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = game::Ball::SOUND_KICK().length();
                        return cs_left % cs_right;
                    }());
                }
            }
            if (select_ == 11) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    ch_shootSound[0] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_shootSound[0] - 1;
                            auto cs_right = game::Ball::SOUND_SHOOT().length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = game::Ball::SOUND_SHOOT().length();
                        return cs_left % cs_right;
                    }());
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    ch_shootSound[0] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_shootSound[0] + 1;
                            auto cs_right = game::Ball::SOUND_SHOOT().length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = game::Ball::SOUND_SHOOT().length();
                        return cs_left % cs_right;
                    }());
                }
            }
            if (select_ == 12) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    ch_shootSound[1] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_shootSound[1] - 1;
                            auto cs_right = game::Ball::SOUND_SHOOT().length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = game::Ball::SOUND_SHOOT().length();
                        return cs_left % cs_right;
                    }());
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    ch_shootSound[1] = ([&]() -> pls::cs::Int32 {
                        auto cs_left = (([&]() -> pls::cs::Int32 {
                            auto cs_left = ch_shootSound[1] + 1;
                            auto cs_right = game::Ball::SOUND_SHOOT().length();
                            return cs_left + cs_right;
                        }()));
                        auto cs_right = game::Ball::SOUND_SHOOT().length();
                        return cs_left % cs_right;
                    }());
                }
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(65536)) ||
                PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                game::Ball::SOUND_PASS()[0] = ch_kickSound[0] + 8;
                game::Ball::SOUND_PASS()[1] = ch_kickSound[0] + 8;
                game::Ball::SOUND_PASS()[2] = ch_kickSound[1] + 8;
                game::Ball::SOUND_PASS()[3] = ch_kickSound[2] + 8;
                game::Ball::SOUND_PASS()[4] = ch_kickSound[2] + 8;
                game::Ball::SOUND_PASS()[5] = ch_kickSound[3] + 8;
                game::Ball::SOUND_HEAD() = ch_kickSound[4] + 8;
                game::Ball::SOUND_SHOOT_KICK() = ch_shootSound[0] + 15;
                game::Ball::SOUND_SHOOT_HEAD() = ch_shootSound[1] + 15;
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 4) {
            pls::cs::Int32 num54 = 13;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num54) % num54;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num54) % num54;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(2))) {
                TEST_P1_POTENTIAL = 30;
                TEST_P2_POTENTIAL = 30;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(4))) {
                TEST_P1_POTENTIAL = 1000;
                TEST_P2_POTENTIAL = 1000;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1) {
            }
            if (select_ == 2) {
                pls::cs::Int32 num55 = require(apdat_)->tData_.length();
                pls::cs::Int32 tEST_P1_TEAM = TEST_P1_TEAM;
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    TEST_P1_TEAM = (TEST_P1_TEAM - 1 + num55) % num55;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    TEST_P1_TEAM = (TEST_P1_TEAM + 1 + num55) % num55;
                }
                if (tEST_P1_TEAM != TEST_P1_TEAM) {
                    UpdateTestParam();
                }
            }
            if (select_ == 3) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    TEST_P1_POTENTIAL = main::AppData::ClampMin(TEST_P1_POTENTIAL - 10, 0);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    TEST_P1_POTENTIAL = main::AppData::ClampMax(TEST_P1_POTENTIAL + 10, 1000);
                }
            }
            if (select_ == 4) {
                pls::cs::Int32 num56 = require(apdat_)->formationData_.length();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    TEST_P1_FORMATION = (TEST_P1_FORMATION - 1 + num56) % num56;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    TEST_P1_FORMATION = (TEST_P1_FORMATION + 1 + num56) % num56;
                }
            }
            if (select_ == 5) {
                pls::cs::Int32 num57 = require(apdat_)->tData_.length();
                pls::cs::Int32 tEST_P2_TEAM = TEST_P2_TEAM;
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    TEST_P2_TEAM = (TEST_P2_TEAM - 1 + num57) % num57;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    TEST_P2_TEAM = (TEST_P2_TEAM + 1 + num57) % num57;
                }
                if (tEST_P2_TEAM != TEST_P2_TEAM) {
                    UpdateTestParam();
                }
            }
            if (select_ == 6) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    TEST_P2_POTENTIAL = main::AppData::ClampMin(TEST_P2_POTENTIAL - 10, 0);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    TEST_P2_POTENTIAL = main::AppData::ClampMax(TEST_P2_POTENTIAL + 10, 1000);
                }
            }
            if (select_ == 7) {
                pls::cs::Int32 num58 = require(apdat_)->formationData_.length();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    TEST_P2_FORMATION = (TEST_P2_FORMATION - 1 + num58) % num58;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    TEST_P2_FORMATION = (TEST_P2_FORMATION + 1 + num58) % num58;
                }
            }
            if (select_ == 8) {
                pls::cs::Int32 num59 = require(apdat_)->stadiumData_.length();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    TEST_STADIUM = (TEST_STADIUM - 1 + num59) % num59;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    TEST_STADIUM = (TEST_STADIUM + 1 + num59) % num59;
                }
            }
            if (select_ == 9) {
                pls::cs::Int32 num60 = game::Map::MAP_GROUND_NAME().length();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    TEST_GROUND = (TEST_GROUND - 1 + num60) % num60;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    TEST_GROUND = (TEST_GROUND + 1 + num60) % num60;
                }
            }
            if (select_ == 10) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    DebugForm::TEST_STATE() =
                        (DebugForm::TEST_STATE() - 1 + SoccerForm::TEST_STATE().length()) %
                        SoccerForm::TEST_STATE().length();
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    DebugForm::TEST_STATE() =
                        (DebugForm::TEST_STATE() + 1 + SoccerForm::TEST_STATE().length()) %
                        SoccerForm::TEST_STATE().length();
                }
            }
            if (select_ == 11 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                TEST_P1_POTENTIAL = 500;
                TEST_P2_POTENTIAL = 500;
            }
            if (select_ == 12 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                TEST_P1_POTENTIAL = 1000;
                TEST_P2_POTENTIAL = 1000;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                pls::cs::Ref<data::TeamData> teamData3 = require(apdat_)->tData_.get_Item(TEST_P1_TEAM);
                pls::cs::Ref<data::TeamData> teamData4 = require(apdat_)->tData_.get_Item(TEST_P2_TEAM);
                require(teamData3)->warPotential_ = TEST_P1_POTENTIAL;
                require(teamData4)->warPotential_ = TEST_P2_POTENTIAL;
                require(teamData3)->formation_ = TEST_P1_FORMATION;
                require(teamData4)->formation_ = TEST_P2_FORMATION;
                SoccerForm::DEBUG_START_P1_TEAMID() = TEST_P1_TEAM;
                SoccerForm::DEBUG_START_P2_TEAMID() = TEST_P2_TEAM;
                require(udat_)->selectFormationId_ = TEST_P1_FORMATION;
                require(teamData3)->SetWarParamPhysical();
                require(teamData4)->SetWarParamPhysical();
                PLS_API(require(formMan_)->ChangeCurrentForm(require(apdat_)->frmSoccer_));
                SoccerForm::DEBUG_START_STATE() = SoccerForm::TEST_STATE()[DebugForm::TEST_STATE()];
                require(require(apdat_)->frmSoccer_)->udat_ = udat_;
                require(require(apdat_)->frmSoccer_)->apdat_ = apdat_;
                {
                    auto cs_receiver = require(apdat_)->frmSoccer_;
                    pls::cs::Int32 cs_arg0 = SoccerForm::TEST_STATE()[DebugForm::TEST_STATE()];
                    require(cs_receiver)->ChangeState(cs_arg0);
                }
                try {
                    {
                        pls::cs::Int32 cs_arg0 = TEST_STADIUM;
                        pls::cs::String cs_arg1 =
                            require(require(apdat_)->stadiumData_.get_Item(TEST_STADIUM))->fileName_;
                        game::Map::CreateMap(cs_arg0, cs_arg1);
                    }
                    require(require(apdat_)->frmSoccer_)->SetAllDraw();
                } catch (const pls::cs::Exception& cs_caught_96) {
                    pls::cs::capture_exception(cs_caught_96);
                    {
                    }
                }
                require(require(apdat_)->frmSoccer_)->SetCustomerNum();
                game::Map::MAP_GROUND() = TEST_GROUND;
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 5) {
            if (PLAYER_SEB == 14) {
                require(temp_player)->team_id_ = PLAYER_FRAME;
            }
            pls::cs::Int32 num61 = 16;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num61) % num61;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num61) % num61;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    while (true) {
                        {
                            --PLAYER_FACE;
                            if (PLAYER_FACE < 300) {
                                PLAYER_FACE =
                                    pls::cs::Int32(require(require(apdat_)->resHumanHead_)->img.length()) - 1;
                            }
                        }
                        if (!is_null(require(require(apdat_)->resHumanHead_)->img.get_Item(PLAYER_FACE))) {
                            break;
                        }
                    }
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    while (true) {
                        {
                            ++PLAYER_FACE;
                            if (PLAYER_FACE >=
                                pls::cs::Int32(require(require(apdat_)->resHumanHead_)->img.length()) - 1) {
                                PLAYER_FACE = 300;
                            }
                        }
                        if (!is_null(require(require(apdat_)->resHumanHead_)->img.get_Item(PLAYER_FACE))) {
                            break;
                        }
                    }
                }
            }
            if (select_ == 2) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    while (true) {
                        {
                            --PLAYER_BODY;
                            if (PLAYER_BODY < 0) {
                                PLAYER_BODY = 99;
                            }
                        }
                        if (!is_null(require(require(apdat_)->resHuman2_)->img.get_Item(PLAYER_BODY + 100))) {
                            break;
                        }
                    }
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    while (true) {
                        {
                            ++PLAYER_BODY;
                            if (PLAYER_BODY >= 100) {
                                PLAYER_BODY = 0;
                            }
                        }
                        if (!is_null(require(require(apdat_)->resHuman2_)->img.get_Item(PLAYER_BODY + 100))) {
                            break;
                        }
                    }
                }
            }
            if (select_ == 3) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    PLAYER_SEB = (PLAYER_SEB - 1 + 17) % 17;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    PLAYER_SEB = (PLAYER_SEB + 1 + 17) % 17;
                }
            }
            if (select_ == 4) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    PLAYER_DIRECT = (PLAYER_DIRECT - 1 + 4) % 4;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    PLAYER_DIRECT = (PLAYER_DIRECT + 1 + 4) % 4;
                }
            }
            if (select_ == 5) {
                pls::cs::Int32 num62 = game::Player::SEBH_TO_RESHUMANSEB()[PLAYER_SEB];
                pls::cs::Int32 maxFrame =
                    require(require(require(apdat_)->resHuman2_)->seb.get_Item(num62))->GetMaxFrame();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    PLAYER_FRAME = main::AppData::ClampMin(PLAYER_FRAME - 1, 0);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    PLAYER_FRAME = main::AppData::ClampMax(PLAYER_FRAME + 1, maxFrame - 1);
                }
            }
            if (select_ == 6) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    PLAYER_ANIME = 1 - PLAYER_ANIME;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    PLAYER_ANIME = 1 - PLAYER_ANIME;
                }
            }
            if (select_ == 7) {
                IntArray array2 = game::Player::body_off()[PLAYER_SEB];
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    array2[0] = main::AppData::ClampMin(array2[0] - 1, -100);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    array2[0] = main::AppData::ClampMax(array2[0] + 1, 100);
                }
            }
            if (select_ == 8) {
                IntArray array3 = game::Player::body_off()[PLAYER_SEB];
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    array3[1] = main::AppData::ClampMin(array3[1] - 1, -100);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    array3[1] = main::AppData::ClampMax(array3[1] + 1, 100);
                }
            }
            if (select_ == 9) {
                IntArray array4 = game::Player::head_off()[PLAYER_SEB][PLAYER_DIRECT][PLAYER_FRAME];
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    array4[0] = main::AppData::ClampMin(array4[0] - 1, -100);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    array4[0] = main::AppData::ClampMax(array4[0] + 1, 100);
                }
            }
            if (select_ == 10) {
                IntArray array5 = game::Player::head_off()[PLAYER_SEB][PLAYER_DIRECT][PLAYER_FRAME];
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    array5[1] = main::AppData::ClampMin(array5[1] - 1, -100);
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    array5[1] = main::AppData::ClampMax(array5[1] + 1, 100);
                }
            }
            if (select_ == 11) {
            }
            if (select_ == 12) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    PLAYER_TEAM = 1 - PLAYER_TEAM;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    PLAYER_TEAM = 1 - PLAYER_TEAM;
                }
            }
            if (select_ == 13) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    BALL = 1 - BALL;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    BALL = 1 - BALL;
                }
            }
            if (select_ == 14) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    PLAYER_EFINDEX = (PLAYER_EFINDEX - 1 + game::Player::PLAYER_EFLIST().length()) %
                                     game::Player::PLAYER_EFLIST().length();
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    PLAYER_EFINDEX = (PLAYER_EFINDEX + 1 + game::Player::PLAYER_EFLIST().length()) %
                                     game::Player::PLAYER_EFLIST().length();
                }
            }
            if (select_ == 15) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    SHADOW = 1 - SHADOW;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    SHADOW = 1 - SHADOW;
                }
            }
            pls::cs::Int32 num63 = game::Player::SEBH_TO_RESHUMANSEB()[PLAYER_SEB];
            if ([&]() -> bool {
                    auto cs_left = PLAYER_FRAME;
                    auto cs_right =
                        require(require(require(apdat_)->resHuman2_)->seb.get_Item(num63))->GetMaxFrame();
                    return cs_left >= cs_right;
                }()) {
                PLAYER_FRAME =
                    require(require(require(apdat_)->resHuman2_)->seb.get_Item(num63))->GetMaxFrame() - 1;
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 6) {
            pls::cs::Int32 num64 = 3;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num64) % num64;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num64) % num64;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1) {
                pls::cs::Int32 tAreaLv_ = require(udat_)->tAreaLv_;
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    {
                        auto cs_target = udat_;
                        pls::cs::Int32 cs_value = main::AppData::ClampMin(require(udat_)->tAreaLv_ - 1, 0);
                        require(cs_target)->tAreaLv_ = cs_value;
                    }
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    {
                        auto cs_target = udat_;
                        pls::cs::Int32 cs_value = main::AppData::ClampMax(require(udat_)->tAreaLv_ + 1, 2);
                        require(cs_target)->tAreaLv_ = cs_value;
                    }
                }
                if (tAreaLv_ != require(udat_)->tAreaLv_) {
                    require(require(apdat_)->frmGame_)->SetAllDraw();
                }
            }
            if (select_ == 2) {
                pls::cs::Int32 tAreaRootNum_ = require(udat_)->tAreaRootNum_;
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    {
                        auto cs_target = udat_;
                        pls::cs::Int32 cs_value =
                            main::AppData::ClampMin(require(udat_)->tAreaRootNum_ - 1, 1);
                        require(cs_target)->tAreaRootNum_ = cs_value;
                    }
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    {
                        auto cs_target = udat_;
                        pls::cs::Int32 cs_value =
                            main::AppData::ClampMax(require(udat_)->tAreaRootNum_ + 1, 2);
                        require(cs_target)->tAreaRootNum_ = cs_value;
                    }
                }
                if (tAreaRootNum_ != require(udat_)->tAreaRootNum_) {
                    require(require(apdat_)->mapMain_)->UpdateTrainingCoatNum();
                    require(require(apdat_)->frmGame_)->SetAllDraw();
                }
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                return PLS_API(require(formMan_)->Pop());
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        }
        return true;
    }
}

// M:form.DebugForm.Update_window
bool DebugForm::Update_window() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.Update_window", game);
    {
        game::MapMain::ensure_initialized();
        game::Camera::ensure_initialized();
        SoccerForm::ensure_initialized();
        SubForm::ensure_initialized();

        pls::cs::Int32 num = 6;
        if (state_ == 0) {
            pls::cs::Int32 num2 = 2;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num2) % num2;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num2) % num2;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1) {
                pls::cs::Int32 num3 = require(udat_)->tpplay_stock.length();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    DebugForm::tpp_index() = (DebugForm::tpp_index() - 1 + num3) % num3;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    DebugForm::tpp_index() = (DebugForm::tpp_index() + 1 + num3) % num3;
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 1) {
            if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                state_ = (state_ - 1 + num) % num;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                state_ = (state_ + 1) % num;
            }
            if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                state_ = (state_ + 1) % num;
            }
            pls::cs::Int32 num4 =
                PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->tpplay_battleRecode))) - 13 + 1;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                tpp_scrollValue_ = (tpp_scrollValue_ - 1 + num4) % num4;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                tpp_scrollValue_ = (tpp_scrollValue_ + 1) % num4;
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 2) {
            pls::cs::Int32 num5 = 15;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num5) % num5;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num5) % num5;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                return PLS_API(require(formMan_)->Pop());
            }
            if (select_ == 2 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                return PLS_API(
                    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(26)));
            }
            if (select_ == 3 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                {
                    auto cs_target = game::Camera::pos();
                    pls::cs::Single cs_value = game::MapMain::DEFAULT_INIT_CAMERA_POS()[0];
                    require(cs_target)->x_ = cs_value;
                }
                {
                    auto cs_target = game::Camera::pos();
                    pls::cs::Single cs_value = game::MapMain::DEFAULT_INIT_CAMERA_POS()[1];
                    require(cs_target)->y_ = cs_value;
                }
                require(require(apdat_)->camera)->ChangeMode(0);
                PLS_API(require(formMan_)->ChangeCurrentForm(require(apdat_)->frmGame_));
            }
            if (select_ == 4 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                PLS_API(require(formMan_)->ChangeCurrentForm(require(apdat_)->frmTitle_));
            }
            if (select_ != 5 || PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
            }
            if (select_ == 6 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                PLS_API(require(formMan_)->Pop());
                return PLS_API(
                    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(37)));
            }
            if (select_ == 7 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                return PLS_API(
                    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(39)));
            }
            if (select_ == 8 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                return PLS_API(
                    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(50)));
            }
            if (select_ == 9 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                return PLS_API(
                    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(53)));
            }
            if (select_ == 10 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                return PLS_API(
                    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(29)));
            }
            if (select_ == 11 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                PLS_API(require(formMan_)->ChangeCurrentForm(require(apdat_)->frmSoccer_));
            }
            if (select_ == 12 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                PLS_API(require(formMan_)->ChangeCurrentForm(require(apdat_)->frmSoccer_));
                SoccerForm::DEBUG_START_STATE() = 9;
                if (!is_null(require(require(apdat_)->frmSoccer_)->apdat_)) {
                    require(require(apdat_)->frmSoccer_)->ChangeState(9);
                }
            }
            if (select_ == 13 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                PLS_API(require(formMan_)->ChangeCurrentForm(require(apdat_)->frmSoccer_));
                SoccerForm::DEBUG_START_STATE() = 10;
                if (!is_null(require(require(apdat_)->frmSoccer_)->apdat_)) {
                    require(require(apdat_)->frmSoccer_)->ChangeState(10);
                }
            }
            if (select_ == 14 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                PLS_API(require(formMan_)->ChangeCurrentForm(require(apdat_)->frmSoccer_));
                SoccerForm::DEBUG_START_STATE() = 14;
                if (!is_null(require(require(apdat_)->frmSoccer_)->apdat_)) {
                    require(require(apdat_)->frmSoccer_)->ChangeState(14);
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 3) {
            pls::cs::Int32 num6 = 11;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num6) % num6;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num6) % num6;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                return PLS_API(
                    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(38)));
            }
            if (select_ == 2) {
                pls::cs::Int32 num7 = SubForm::SCENE_CHANGE_NAME().length();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    ch_sChangeId = (ch_sChangeId - 1 + num7) % num7;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    ch_sChangeId = (ch_sChangeId + 1) % num7;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    PLS_API(require(formMan_)->Pop());
                    pls::cs::Ref<SubForm> subForm = SubForm::create(69);
                    require(subForm)->value1_ = ch_sChangeId;
                    return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(subForm));
                }
            }
            if (select_ == 3 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                PLS_API(require(formMan_)->Pop());
                require(apdat_)->ExecEvent(1, pls::cs::String{}, IntArray{});
            }
            if (select_ == 4 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                PLS_API(require(formMan_)->Pop());
                require(apdat_)->ExecEvent(2, pls::cs::String{}, IntArray{});
            }
            if (select_ == 5 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                return PLS_API(
                    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(71)));
            }
            if (select_ == 6 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                return PLS_API(
                    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(52)));
            }
            if (select_ == 7 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                return PLS_API(
                    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(72)));
            }
            if (select_ == 8 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(0);
                ([&]() -> pls::cs::Ref<SubForm> {
                    auto cs_receiver = apdat_;
                    pls::cs::String cs_arg1 = ([&]() {
                        auto cs_left = pls::cs::String::concat(require(teamData)->name_, literal(u"\t"));
                        auto cs_right = integer_string(
                            PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->memberPDataist_))));
                        return pls::cs::String::concat(cs_left, cs_right);
                    }());
                    return require(cs_receiver)->ExecEvent(110, cs_arg1, IntArray{});
                }());
                PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
            }
            if (select_ == 9 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                pls::cs::Ref<SubForm> subForm2 = SubForm::create(64);
                require(subForm2)->tenantDataId_ = 5;
                return PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(subForm2));
            }
            if (select_ == 10 && PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                return PLS_API(
                    static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(SubForm::create(74)));
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 4) {
            pls::cs::Int32 num8 = 2;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num8) % num8;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num8) % num8;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (select_ == 1) {
                pls::cs::Int32 num9 = require(apdat_)->fanBonus_.length();
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    DebugForm::chFanBonusIndex() = (DebugForm::chFanBonusIndex() - 1 + num9) % num9;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    DebugForm::chFanBonusIndex() = (DebugForm::chFanBonusIndex() + 1) % num9;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    PLS_API(static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop());
                    pls::cs::Ref<data::FanBonusData> fanBonusData =
                        require(apdat_)->fanBonus_.get_Item(DebugForm::chFanBonusIndex());
                    require(require(udat_)->gm_)->teamId_[0] = 0;
                    require(require(udat_)->gm_)->teamId_[1] = 1;
                    pls::cs::Ref<data::TeamData> teamData2 =
                        require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[0]);
                    pls::cs::Ref<data::TeamData> teamData3 =
                        require(apdat_)->tData_.get_Item(require(require(udat_)->gm_)->teamId_[1]);
                    if (require(fanBonusData)->termMode_ == 0) {
                        DebugForm::debug_testscore()[0] = 5;
                        DebugForm::debug_testscore()[1] = 0;
                        require(teamData2)->warPotential_ = 0;
                        require(teamData3)->warPotential_ = 50 + 100 * require(fanBonusData)->termModeIndex_;
                    }
                    if (require(fanBonusData)->termMode_ == 13 &&
                        require(fanBonusData)->termModeIndex_ == 0) {
                        DebugForm::debug_testscore()[0] = 1;
                        DebugForm::debug_testscore()[1] = 1;
                        require(teamData2)->warPotential_ = 0;
                        require(teamData3)->warPotential_ = 150;
                    }
                    if (require(fanBonusData)->termMode_ == 13 &&
                        require(fanBonusData)->termModeIndex_ == 1) {
                        DebugForm::debug_testscore()[0] = 1;
                        DebugForm::debug_testscore()[1] = 1;
                        require(teamData2)->warPotential_ = 150;
                        require(teamData3)->warPotential_ = 0;
                    }
                    if (require(fanBonusData)->termMode_ == 1) {
                        DebugForm::debug_testscore()[0] = 0;
                        DebugForm::debug_testscore()[1] = 5;
                        require(teamData2)->warPotential_ = 50 + 100 * require(fanBonusData)->termModeIndex_;
                        require(teamData3)->warPotential_ = 0;
                    }
                    if (require(fanBonusData)->termMode_ == 2) {
                        DebugForm::debug_testscore()[0] = 5;
                        DebugForm::debug_testscore()[1] = 0;
                        require(udat_)->game_winConsecutive_ = require(fanBonusData)->termModeValue_;
                    }
                    if (require(fanBonusData)->termMode_ == 15) {
                        DebugForm::debug_testscore()[0] = 5;
                        DebugForm::debug_testscore()[1] = 0;
                    }
                    if (require(fanBonusData)->termMode_ == 4) {
                        DebugForm::debug_testscore()[0] = 5;
                        DebugForm::debug_testscore()[1] = 5;
                    }
                    if (require(fanBonusData)->termMode_ == 5) {
                        pls::cs::Ref<data::PlayerData> playerData =
                            pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                                PLS_API(kl_java_util::Vector_2_ElementAt(
                                    require(require(udat_)->memberPDataist_), 7)));
                        PLS_API(([&]() -> void {
                            auto cs_receiver = DebugForm::debug_scorevec();
                            pls::cs::Ref<pls::cs::Object> cs_arg0 =
                                pls::cs::box(kl_lang::JInteger::create(require(playerData)->id_));
                            kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                        }()));
                        PLS_API(([&]() -> void {
                            auto cs_receiver = DebugForm::debug_scorevec();
                            pls::cs::Ref<pls::cs::Object> cs_arg0 =
                                pls::cs::box(kl_lang::JInteger::create(require(playerData)->id_));
                            kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                        }()));
                        PLS_API(([&]() -> void {
                            auto cs_receiver = DebugForm::debug_scorevec();
                            pls::cs::Ref<pls::cs::Object> cs_arg0 =
                                pls::cs::box(kl_lang::JInteger::create(require(playerData)->id_));
                            kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
                        }()));
                    }
                    if (require(fanBonusData)->termMode_ == 6) {
                        pls::cs::Ref<data::PlayerData> playerData2 =
                            pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                                PLS_API(kl_java_util::Vector_2_ElementAt(
                                    require(require(udat_)->memberPDataist_), 7)));
                        require(playerData2)->matchNum_ = require(fanBonusData)->termModeValue_;
                    }
                    if (require(fanBonusData)->termMode_ == 7) {
                        pls::cs::Ref<data::PlayerData> playerData3 =
                            pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                                PLS_API(kl_java_util::Vector_2_ElementAt(
                                    require(require(udat_)->memberPDataist_), 7)));
                        require(playerData3)->game_goalConsecutive_ = require(fanBonusData)->termModeValue_;
                    }
                    if (require(fanBonusData)->termMode_ == 8) {
                        pls::cs::Ref<data::PlayerData> playerData4 =
                            pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                                PLS_API(kl_java_util::Vector_2_ElementAt(
                                    require(require(udat_)->memberPDataist_), 7)));
                        require(playerData4)->game_goalTotal_ = require(fanBonusData)->termModeValue_;
                    }
                    if (require(fanBonusData)->termMode_ == 11) {
                        pls::cs::Ref<data::SupervisorData> supervisorData =
                            require(apdat_)->svisorData_.get_Item(require(udat_)->selectSupervisorId_);
                        require(supervisorData)->winTotal_ = require(fanBonusData)->termModeValue_;
                    }
                    if (require(fanBonusData)->termMode_ == 12) {
                        require(udat_)->customer_total_ =
                            pls::cs::cast_integral<pls::cs::Int64>(require(fanBonusData)->termModeValue_);
                    }
                    PLS_API(require(formMan_)->ChangeCurrentForm(require(apdat_)->frmSoccer_));
                    require(require(udat_)->gm_)->score_[0] = DebugForm::debug_testscore()[0];
                    require(require(udat_)->gm_)->score_[1] = DebugForm::debug_testscore()[1];
                    SoccerForm::DEBUG_START_STATE() = 9;
                    if (!is_null(require(require(apdat_)->frmSoccer_)->apdat_)) {
                        require(require(apdat_)->frmSoccer_)->ChangeState(9);
                    }
                    require(require(udat_)->gm_)->score_[0] = DebugForm::debug_testscore()[0];
                    require(require(udat_)->gm_)->score_[1] = DebugForm::debug_testscore()[1];
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        } else if (state_ == 5) {
            pls::cs::Int32 num10 = 1;
            if (PLS_API(require(canvas_)->CheckKeyRepeat(131072))) {
                select_ = (select_ - 1 + num10) % num10;
            }
            if (PLS_API(require(canvas_)->CheckKeyRepeat(524288))) {
                select_ = (select_ + 1 + num10) % num10;
            }
            if (select_ == 0) {
                if (PLS_API(require(canvas_)->CheckKeyRepeat(65536))) {
                    state_ = (state_ - 1 + num) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyRepeat(262144))) {
                    state_ = (state_ + 1) % num;
                }
                if (PLS_API(require(canvas_)->CheckKeyPulse(1048576))) {
                    state_ = (state_ + 1) % num;
                }
            }
            if (require(apdat_)->IsPushSoftLabel(2)) {
                return PLS_API(require(formMan_)->Pop());
            }
        }
        return true;
    }
}

// M:form.DebugForm.Draw(kairo.unity.ui.Graphics)
void DebugForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.Draw(kairo.unity.ui.Graphics)", game);
    {
        if (mode == 0) {
            Draw_param(g);
        } else if (mode == 1) {
            Draw_gameParam(g);
        } else if (mode == 2) {
            Draw_window(g);
        }
    }
}

// M:form.DebugForm.Draw_param(kairo.unity.ui.Graphics)
void DebugForm::Draw_param(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.Draw_param(kairo.unity.ui.Graphics)", game);
    {
        game::Map::ensure_initialized();
        main::AppData::ensure_initialized();
        game::UserData::ensure_initialized();
        SubForm::ensure_initialized();

        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(64, 0, 0))));
        PLS_API(require(g)->FillRect(0.0f, 0.0f, 240.0f, 240.0f));
        if (state_ == 0) {
            StringArray array = StringArray::from(
                {literal(u"new_offence"), literal(u"new_deffence"), literal(u"new_offence_Pass"),
                 literal(u"passer2"), literal(u"freerun2"), literal(u"守備用"), literal(u"ルーズボール用"),
                 literal(u"パッサー用"), literal(u"味方フリーラン用")});
            StringArray2 array2 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"チーム"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = integer_string(DebugForm::COATEVA_TEAM_ID());
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"種類"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = array[DebugForm::COATEVA_ROOT_INDEX()];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({pls::cs::String::concat(literal(u"枠"), waku[DebugForm::COATEVA_WAKU()]),
                                    pls::cs::String(u"")})});
            try {
                Draw_coatEva(g);
            } catch (const pls::cs::Exception& cs_caught_79) {
                pls::cs::capture_exception(cs_caught_79);
                {
                }
            }
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 i = 0; i < array2.length(); ++i) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array2[i][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + i * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array2[i][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + i * 14);
                }()));
                if (select_ == i) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + i * 14));
                }
            }
        } else if (state_ == 1) {
            StringArray2 array3 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from(
                     {literal(u"このデバッグ機能は現在使えません"), literal(u"\u3000\u3000\u3000\u3000")})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 j = 0; j < array3.length(); ++j) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array3[j][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + j * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array3[j][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + j * 14);
                }()));
                if (select_ == j) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + j * 14));
                }
            }
        } else if (state_ == 2) {
            StringArray2 array4 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from(
                     {literal(u"このデバッグ機能は現在使えません"), literal(u"\u3000\u3000\u3000\u3000")})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 k = 0; k < array4.length(); ++k) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array4[k][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + k * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array4[k][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + k * 14);
                }()));
                if (select_ == k) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + k * 14));
                }
            }
        } else if (state_ == 3) {
            StringArray2 array5 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from(
                     {literal(u"このデバッグ機能は現在使えません"), literal(u"\u3000\u3000\u3000\u3000")})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 l = 0; l < array5.length(); ++l) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array5[l][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + l * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array5[l][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + l * 14);
                }()));
                if (select_ == l) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + l * 14));
                }
            }
        } else if (state_ == 4) {
            StringArray2 array6 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from(
                     {literal(u"このデバッグ機能は現在使えません"), literal(u"\u3000\u3000\u3000\u3000")})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 m = 0; m < array6.length(); ++m) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array6[m][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + m * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array6[m][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + m * 14);
                }()));
                if (select_ == m) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + m * 14));
                }
            }
        } else if (state_ == 5) {
            StringArray2 array7 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from(
                     {literal(u"リーグ更新"),
                      pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"\u3000\u3000\u3000第"),
                                                  integer_string((require(udat_)->league_setu_ + 1))),
                          literal(u"節"))}),
                 StringArray::from(
                     {literal(u"チーム数"),
                      pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                              integer_string(require(udat_)->league_teamNum_))})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 n = 0; n < array7.length(); ++n) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array7[n][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + n * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array7[n][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + n * 14);
                }()));
                if (select_ == n) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + n * 14));
                }
            }
        } else if (state_ == 6) {
            StringArray2 array8 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from(
                     {literal(u"このデバッグ機能は現在使えません"), literal(u"\u3000\u3000\u3000\u3000")})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 num = 0; num < array8.length(); ++num) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array8[num][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + num * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array8[num][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + num * 14);
                }()));
                if (select_ == num) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + num * 14));
                }
            }
        } else if (state_ == 7) {
            StringArray2 array9 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"試合シーン(決定)"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"戦力値_味方"),
                                    pls::cs::String::concat(
                                        literal(u"\u3000\u3000\u3000"),
                                        integer_string(require(require(udat_)->gm_)->team_potential_[0]))}),
                 StringArray::from({literal(u"戦力値_敵"),
                                    pls::cs::String::concat(
                                        literal(u"\u3000\u3000\u3000"),
                                        integer_string(require(require(udat_)->gm_)->team_potential_[1]))}),
                 StringArray::from({literal(u"ﾌｫｰﾒｰｼｮﾝ_味方"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"ﾌｫｰﾒｰｼｮﾝ_敵"), literal(u"\u3000\u3000\u3000")})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 num2 = 0; num2 < array9.length(); ++num2) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array9[num2][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + num2 * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array9[num2][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + num2 * 14);
                }()));
                if (select_ == num2) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + num2 * 14));
                }
            }
        } else if (state_ == 8) {
            IntArray array10 = IntArray{};
            if (GOAL == 0) {
                array10 = game::Map::GOAL1_PARTS_POS()[GOAL_INDEX];
            }
            if (GOAL == 1) {
                array10 = game::Map::GOAL2_PARTS_POS()[GOAL_INDEX];
            }
            pls::cs::Int32 num3 = 0;
            if (GOAL == 0) {
                num3 = game::Map::GOAL1_PARTS_GRA()[GOAL_INDEX][2];
            }
            if (GOAL == 1) {
                num3 = game::Map::GOAL2_PARTS_GRA()[GOAL_INDEX][2];
            }
            StringArray2 array11 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"GOAL"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                              integer_string(GOAL))}),
                 StringArray::from({literal(u"GOAL_INDEX"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                            game::Map::GOAL_PARTS_NAME()[GOAL_INDEX])}),
                 StringArray::from({literal(u"OX"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                            integer_string(array10[0]))}),
                 StringArray::from({literal(u"OY"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                            integer_string(array10[1]))}),
                 StringArray::from({literal(u"depth"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                               integer_string(num3))})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 num4 = 0; num4 < array11.length(); ++num4) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array11[num4][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + num4 * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array11[num4][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + num4 * 14);
                }()));
                if (select_ == num4) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + num4 * 14));
                }
            }
            Draw_goal(g);
        } else if (state_ == 9) {
            StringArray2 array12 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from(
                     {literal(u"このデバッグ機能は現在使えません"), literal(u"\u3000\u3000\u3000\u3000")})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 num5 = 0; num5 < array12.length(); ++num5) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array12[num5][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + num5 * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array12[num5][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + num5 * 14);
                }()));
                if (select_ == num5) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + num5 * 14));
                }
            }
            Draw_goalMini(g);
        } else if (state_ == 10) {
            pls::cs::String value = main::AppData::talks_()[DebugForm::ch_talks()];
            StringArray array13 = PLS_API(kl_unity_util::StringUtil::Split(value, literal(u"\t")));
            pls::cs::String text = array13[0];
            StringArray2 array14 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from(
                     {literal(u"負荷チェック"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                        on_off[DebugForm::flg_loadCheck()])}),
                 StringArray::from({literal(u"ＦＰＳ表示"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                            on_off[game::UserData::DEBUG_DISPFPS()])}),
                 StringArray::from({literal(u"新聞チェック"), ([&]() {
                                        auto cs_left = pls::cs::String::concat(
                                            ([&]() {
                                                auto cs_left = pls::cs::String::concat(
                                                    ([&]() {
                                                        auto cs_left = pls::cs::String(u"");
                                                        auto cs_right = integer_string(DebugForm::ch_news());
                                                        return pls::cs::String::concat(cs_left, cs_right);
                                                    }()),
                                                    literal(u"/"));
                                                auto cs_right = integer_string(
                                                    (pls::cs::Int32(require(apdat_)->newsTitles_.length()) -
                                                     1));
                                                return pls::cs::String::concat(cs_left, cs_right);
                                            }()),
                                            literal(u":"));
                                        auto cs_right = require(apdat_)->newsTitles_[DebugForm::ch_news()];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"会話文チェック"), ([&]() {
                                        auto cs_left = pls::cs::String::concat(
                                            ([&]() {
                                                auto cs_left = pls::cs::String(u"");
                                                auto cs_right = integer_string(DebugForm::ch_talks());
                                                return pls::cs::String::concat(cs_left, cs_right);
                                            }()),
                                            literal(u"/"));
                                        auto cs_right = integer_string(
                                            (pls::cs::Int32(main::AppData::talks_().length()) - 1));
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"ｲﾍﾞﾝﾄﾒｯｾｰｼﾞﾁｪｯｸ"), ([&]() {
                                        auto cs_left = pls::cs::String::concat(
                                            ([&]() {
                                                auto cs_left = pls::cs::String(u"");
                                                auto cs_right = integer_string(DebugForm::ch_eventMsgs());
                                                return pls::cs::String::concat(cs_left, cs_right);
                                            }()),
                                            literal(u"/"));
                                        auto cs_right = integer_string(
                                            (pls::cs::Int32(require(apdat_)->eventMsgs_.length()) - 1));
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from(
                     {literal(u"ﾎﾟｯﾌﾟｱｯﾌﾟﾁｪｯｸ"),
                      pls::cs::String::concat(
                          pls::cs::String::concat(
                              pls::cs::String::concat(literal(u"\u3000\u3000"),
                                                      integer_string((DebugForm::ch_popUp() + 1))),
                              literal(u":")),
                          game::UserData::POPUP_MEM()[DebugForm::ch_popUp()])}),
                 StringArray::from(
                     {literal(u"ゲーム要素open"),
                      pls::cs::String::concat(literal(u"\u3000\u3000"), on_off[DebugForm::ch_elements()])}),
                 StringArray::from({literal(u"給料MAX"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000"),
                                                            on_off[game::UserData::DEBUG_SALLARY_MAX()])}),
                 StringArray::from(
                     {pls::cs::String::concat(
                          ([&]() {
                              auto cs_left = pls::cs::String::concat(
                                  pls::cs::String::concat(literal(u"フキダシ("),
                                                          integer_string(fukidashiIndex_)),
                                  literal(u"/"));
                              auto cs_right = integer_string(
                                  (pls::cs::Int32(game::UserData::EF_FEELPT_COMMENT_()[0].length()) - 1));
                              return pls::cs::String::concat(cs_left, cs_right);
                          }()),
                          literal(u")")),
                      pls::cs::String(u"")}),
                 StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"気持ち"), integer_string(fukidashiFeel_)),
                          literal(u"%")),
                      pls::cs::String(u"")})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 num6 = 0; num6 < array14.length(); ++num6) {
                pls::cs::Int32 num7 = 10 + num6 * 14;
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array14[num6][0];
                    require(g)->DrawString(cs_arg0, 20.0f, num7);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array14[num6][1];
                    require(g)->DrawString(cs_arg0, 120.0f, num7);
                }()));
                if (select_ == num6) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, num7));
                }
                if (num6 == 8) {
                    pls::cs::String text2 = game::UserData::EF_FEELPT_COMMENT_()[0][fukidashiIndex_];
                    require(apdat_)->DrawFukidashiBalloon(g, text2, 160, num7 + 20,
                                                          SubForm::SC_WINDOW_BLUE());
                }
                if (num6 == 9) {
                    require(apdat_)->DrawFukidashiKimochi(g, 160, num7 + 20 + 8, fukidashiFeel_, 78);
                }
            }
        } else {
            if (state_ == 11) {
                StringArray2 array15 = StringArray2::from(
                    {StringArray::from(
                         {pls::cs::String::concat(
                              pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                              literal(u" >> ")),
                          literal(u"\u3000\u3000\u3000\u3000")}),
                     StringArray::from({literal(u"このデバッグ機能は現在使えません"),
                                        literal(u"\u3000\u3000\u3000\u3000")})});
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
                for (pls::cs::Int32 num8 = 0; num8 < array15.length(); ++num8) {
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 = array15[num8][0];
                        require(g)->DrawString(cs_arg0, 20.0f, 10 + num8 * 14);
                    }()));
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 = array15[num8][1];
                        require(g)->DrawString(cs_arg0, 120.0f, 10 + num8 * 14);
                    }()));
                    if (select_ == num8) {
                        PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + num8 * 14));
                    }
                }
            }
        }
    }
}

// M:form.DebugForm.Draw_gameParam(kairo.unity.ui.Graphics)
void DebugForm::Draw_gameParam(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.Draw_gameParam(kairo.unity.ui.Graphics)", game);
    {
        SoccerForm::ensure_initialized();
        game::Team::ensure_initialized();
        main::AppData::ensure_initialized();
        game::Ball::ensure_initialized();
        game::Map::ensure_initialized();
        game::Player::ensure_initialized();

        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 64, 0))));
        PLS_API(require(g)->FillRect(0.0f, 0.0f, 240.0f, 240.0f));
        if (state_ == 0) {
            pls::cs::Int32 num = 0;
            for (pls::cs::Int32 i = 0; i < require(apdat_)->formationData_.length(); ++i) {
                pls::cs::Ref<data::FormationData> formationData = require(apdat_)->formationData_.get_Item(i);
                if (require(formationData)->state_ == 1) {
                    ++num;
                }
            }
            StringArray2 array = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"    0:window")}),
                 StringArray::from(
                     {literal(u"年"), pls::cs::String::concat(
                                          literal(u"\u3000\u3000"),
                                          integer_string((require(require(apdat_)->save_)->ints[1] + 1)))}),
                 StringArray::from(
                     {literal(u"月"), pls::cs::String::concat(
                                          literal(u"\u3000\u3000"),
                                          integer_string((require(require(apdat_)->save_)->ints[2] + 1)))}),
                 StringArray::from(
                     {literal(u"週"), pls::cs::String::concat(
                                          literal(u"\u3000\u3000"),
                                          integer_string((require(require(apdat_)->save_)->ints[3] + 1)))}),
                 StringArray::from(
                     {literal(u"お金(決定+)"),
                      pls::cs::String::concat(
                          pls::cs::String::concat(
                              literal(u"\u3000\u3000"),
                              main::AppData::CommaSeparate(require(require(apdat_)->save_)->lngs[0])),
                          literal(u"万"))}),
                 StringArray::from({literal(u"試合時間_STOP"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000"),
                                                            on_off[SoccerForm::DEBUG_GAMETIMESTOP()])}),
                 StringArray::from({literal(u"試合速度_5KEY"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000"),
                                                            on_off[SoccerForm::DEBUG_GAMEMODE_5KEY()])}),
                 StringArray::from({literal(u"f_選手全員出現"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000\u3000\u3000"),
                                                            on_off[DebugForm::flg_playerAll()])}),
                 StringArray::from({literal(u"f_選手全員LVMAX"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000\u3000\u3000"),
                                                            on_off[DebugForm::flg_playerLvMax()])}),
                 StringArray::from({literal(u"f_選手全員ﾄﾚｰﾆﾝｸﾞP_MAX"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000\u3000\u3000"),
                                                            on_off[DebugForm::flg_playerTPMax()])}),
                 StringArray::from({literal(u"f_ﾌｫｰﾒｰｼｮﾝMAX"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000\u3000\u3000"),
                                                            on_off[DebugForm::flg_formationMax()])}),
                 StringArray::from(
                     {literal(u"f_総合力MAX"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000\u3000"),
                                                                       on_off[DebugForm::flg_warPMax()])}),
                 StringArray::from({literal(u"研究ﾎﾟｲﾝﾄMAX"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000\u3000\u3000"),
                                                            on_off[DebugForm::flg_researchPointMax()])}),
                 StringArray::from(
                     {literal(u"負荷ﾁｪｯｸﾓｰﾄﾞ"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000\u3000"),
                                                                        on_off[DebugForm::flg_loadCheck()])}),
                 StringArray::from(
                     {literal(u"ﾒﾆｭｰ全部open"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000\u3000"),
                                                                        on_off[DebugForm::flg_menuOpen()])}),
                 StringArray::from(
                     {literal(u"ﾌｫｰﾒｰｼｮﾝ数"),
                      pls::cs::String::concat(literal(u"\u3000\u3000\u3000\u3000"), integer_string(num))})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 j = 0; j < array.length(); ++j) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array[j][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + j * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array[j][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + j * 14);
                }()));
                if (select_ == j) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + j * 14));
                }
            }
        } else if (state_ == 1) {
            StringArray2 array2 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"    0:window")}),
                 StringArray::from(
                     {literal(u"max_ファン"),
                      pls::cs::String::concat(literal(u"\u3000\u3000\u3000"), on_off[DebugForm::max_fan()])}),
                 StringArray::from(
                     {literal(u"max_応援"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                    on_off[DebugForm::max_assist()])}),
                 StringArray::from(
                     {literal(u"max_知名度"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                      on_off[DebugForm::max_nameValue()])}),
                 StringArray::from(
                     {literal(u"f_ﾘｰｸﾞ戦MAX"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                       on_off[DebugForm::flg_leagueMax()])}),
                 StringArray::from(
                     {literal(u"f_ｶｯﾌﾟ戦MAX"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                       on_off[DebugForm::flg_qmMax()])}),
                 StringArray::from({literal(u"f_ﾄﾚｰﾆﾝｸﾞMAX"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                            on_off[DebugForm::flg_trainingMax()])}),
                 StringArray::from(
                     {literal(u"f_地域活動MAX"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                         on_off[DebugForm::flg_fanPMax()])}),
                 StringArray::from(
                     {literal(u"f_ﾄﾚｰﾄﾞMAX"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                      on_off[DebugForm::flg_tradeMax()])}),
                 StringArray::from(
                     {literal(u"f_施設MAX"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                     on_off[DebugForm::flg_tenantMax()])}),
                 StringArray::from(
                     {literal(u"f_ｽﾎﾟﾝｻｰMAX"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                       on_off[DebugForm::flg_sponsorMax()])}),
                 StringArray::from(
                     {literal(u"f_監督MAX"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                     on_off[DebugForm::flg_svisorMax()])}),
                 StringArray::from({literal(u"監督LV_MAX"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                            on_off[DebugForm::flg_LVMAX_svisor()])}),
                 StringArray::from({literal(u"地域活動RANK_MAX"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                            on_off[DebugForm::flg_LVMAX_fanAct()])}),
                 StringArray::from({literal(u"ｽﾎﾟﾝｻｰ満足度_MAX"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                            on_off[DebugForm::flg_LVMAX_sponsor()])}),
                 StringArray::from({literal(u"施設LV_MAX"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                            on_off[DebugForm::flg_LVMAX_tenant()])})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 k = 0; k < array2.length(); ++k) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array2[k][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + k * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array2[k][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + k * 14);
                }()));
                if (select_ == k) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + k * 14));
                }
            }
        } else if (state_ == 2) {
            StringArray array3 =
                StringArray::from({literal(u"通常"), literal(u"攻め重視"), literal(u"守り重視")});
            StringArray array4 =
                StringArray::from({literal(u"通常"), literal(u"ﾄﾞﾘﾌﾞﾙ主体"), literal(u"ﾛﾝｸﾞﾊﾟｽ主体")});
            pls::cs::Int32 num2 = 0;
            for (pls::cs::Int32 l = 0; l < require(apdat_)->trainingData_.length(); ++l) {
                pls::cs::Ref<data::TrainingData> trainingData = require(apdat_)->trainingData_.get_Item(l);
                if (require(trainingData)->state_ == 1) {
                    ++num2;
                }
            }
            StringArray2 array5 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"オーラMAX"), pls::cs::String(u"")}),
                 StringArray::from({literal(u"ﾌｫｰﾒｰｼｮﾝﾀｲﾌﾟ"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = array3[ch_formationId];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"ﾀｲﾌﾟ別の補正値"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right =
                                            integer_string(game::Team::FORMATION_TYPE_RATE()[ch_formationId]);
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"守備の補正"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = integer_string(game::Team::FORMATION_RATE_DEFFECNE());
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from(
                     {literal(u"攻めのﾀｲﾌﾟ"),
                      pls::cs::String::concat(literal(u"\u3000\u3000\u3000\u3000"), array4[ch_ameftoId])}),
                 StringArray::from(
                     {literal(u"攻め:距離test"),
                      pls::cs::String::concat(literal(u"\u3000\u3000\u3000\u3000"),
                                              integer_string(game::Team::AMEFTO_PZ()[ch_ameftoId]))}),
                 StringArray::from(
                     {literal(u"攻め:TIMEtest"),
                      pls::cs::String::concat(literal(u"\u3000\u3000\u3000\u3000"),
                                              integer_string(game::Team::AMEFTO_ONECHARGETIME_PLAYER()))}),
                 StringArray::from({literal(u"チームの歴史"), literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from(
                     {literal(u"ﾄﾚｰﾆﾝｸﾞ数"),
                      pls::cs::String::concat(literal(u"\u3000\u3000\u3000\u3000"), integer_string(num2))}),
                 StringArray::from({literal(u"通貨単位の切り替え"),
                                    pls::cs::String::concat(
                                        literal(u"\u3000\u3000\u3000\u3000"),
                                        integer_string(require(require(apdat_)->sysSave_)->ints[14]))})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 m = 0; m < array5.length(); ++m) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array5[m][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + m * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array5[m][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + m * 14);
                }()));
                if (select_ == m) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + m * 14));
                }
            }
        } else if (state_ == 3) {
            StringArray2 array6 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"BGM_テスト"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = main::AppData::SOUND_FILENAME()[0][ch_bgmIndex];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"SE_テスト"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = main::AppData::SOUND_FILENAME()[1][ch_seIndex];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"BGM音量"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = integer_string(ch_bgmVolumeIndex);
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"SE音量"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = integer_string(ch_seVolumeIndex);
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"ｷｯｸ音ﾗﾝﾀﾞﾑ"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = on_off[game::Ball::SOUND_RANDOM()];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"ﾊﾟｽ"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right =
                                            main::AppData::SOUND_FILENAME()[1][([&]() -> pls::cs::Int32 {
                                                auto cs_left = ch_kickSound[0] + 8;
                                                auto cs_right = main::AppData::SOUND_FILENAME()[0].length();
                                                return cs_left - cs_right;
                                            }())];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"ｸﾘｱｰ"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right =
                                            main::AppData::SOUND_FILENAME()[1][([&]() -> pls::cs::Int32 {
                                                auto cs_left = ch_kickSound[1] + 8;
                                                auto cs_right = main::AppData::SOUND_FILENAME()[0].length();
                                                return cs_left - cs_right;
                                            }())];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"ｾﾝﾀﾘﾝｸﾞ"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right =
                                            main::AppData::SOUND_FILENAME()[1][([&]() -> pls::cs::Int32 {
                                                auto cs_left = ch_kickSound[2] + 8;
                                                auto cs_right = main::AppData::SOUND_FILENAME()[0].length();
                                                return cs_left - cs_right;
                                            }())];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"ｽﾛｰｲﾝ"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right =
                                            main::AppData::SOUND_FILENAME()[1][([&]() -> pls::cs::Int32 {
                                                auto cs_left = ch_kickSound[3] + 8;
                                                auto cs_right = main::AppData::SOUND_FILENAME()[0].length();
                                                return cs_left - cs_right;
                                            }())];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"ﾍﾃﾞｨﾝｸﾞ"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right =
                                            main::AppData::SOUND_FILENAME()[1][([&]() -> pls::cs::Int32 {
                                                auto cs_left = ch_kickSound[4] + 8;
                                                auto cs_right = main::AppData::SOUND_FILENAME()[0].length();
                                                return cs_left - cs_right;
                                            }())];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"ｼｭｰﾄ_kick"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right =
                                            main::AppData::SOUND_FILENAME()[1][([&]() -> pls::cs::Int32 {
                                                auto cs_left = ch_shootSound[0] + 15;
                                                auto cs_right = main::AppData::SOUND_FILENAME()[0].length();
                                                return cs_left - cs_right;
                                            }())];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"ｼｭｰﾄ_head"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right =
                                            main::AppData::SOUND_FILENAME()[1][([&]() -> pls::cs::Int32 {
                                                auto cs_left = ch_shootSound[1] + 15;
                                                auto cs_right = main::AppData::SOUND_FILENAME()[0].length();
                                                return cs_left - cs_right;
                                            }())];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 n = 0; n < array6.length(); ++n) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array6[n][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + n * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array6[n][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + n * 14);
                }()));
                if (select_ == n) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + n * 14));
                }
            }
        } else if (state_ == 4) {
            StringArray2 array7 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"試合スタート"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"Ｐ１チーム"),
                                    pls::cs::String::concat(
                                        literal(u"\u3000\u3000\u3000"),
                                        require(require(apdat_)->tData_.get_Item(TEST_P1_TEAM))->name_)}),
                 StringArray::from(
                     {literal(u"Ｐ１戦力値"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                      integer_string(TEST_P1_POTENTIAL))}),
                 StringArray::from(
                     {literal(u"Ｐ１ﾌｫｰﾒｰｼｮﾝ"),
                      pls::cs::String::concat(
                          literal(u"\u3000\u3000\u3000"),
                          require(require(apdat_)->formationData_.get_Item(TEST_P1_FORMATION))->name_)}),
                 StringArray::from({literal(u"Ｐ２チーム"),
                                    pls::cs::String::concat(
                                        literal(u"\u3000\u3000\u3000"),
                                        require(require(apdat_)->tData_.get_Item(TEST_P2_TEAM))->name_)}),
                 StringArray::from(
                     {literal(u"Ｐ２戦力値"), pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                      integer_string(TEST_P2_POTENTIAL))}),
                 StringArray::from(
                     {literal(u"Ｐ２ﾌｫｰﾒｰｼｮﾝ"),
                      pls::cs::String::concat(
                          literal(u"\u3000\u3000\u3000"),
                          require(require(apdat_)->formationData_.get_Item(TEST_P2_FORMATION))->name_)}),
                 StringArray::from(
                     {literal(u"スタジアム"),
                      pls::cs::String::concat(
                          literal(u"\u3000\u3000\u3000"),
                          require(require(apdat_)->stadiumData_.get_Item(TEST_STADIUM))->name_)}),
                 StringArray::from({literal(u"スタジアムの土"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                            game::Map::MAP_GROUND_NAME()[TEST_GROUND])}),
                 StringArray::from({literal(u"test_state"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"両チーム戦力500(決定)"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"両チーム戦力1000(決定)"), literal(u"\u3000\u3000\u3000")})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 num3 = 0; num3 < array7.length(); ++num3) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array7[num3][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + num3 * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array7[num3][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + num3 * 14);
                }()));
                if (select_ == num3) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + num3 * 14));
                }
            }
        } else if (state_ == 5) {
            IntArray array8 = game::Player::body_off()[PLAYER_SEB];
            IntArray array9 = game::Player::head_off()[PLAYER_SEB][PLAYER_DIRECT][PLAYER_FRAME];
            StringArray2 array10 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"face"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = integer_string((PLAYER_FACE - 300));
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"body"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = integer_string(PLAYER_BODY);
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"seb"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = game::Player::SEB_NAME()[PLAYER_SEB];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"direct"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = integer_string(PLAYER_DIRECT);
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"frame"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = integer_string(PLAYER_FRAME);
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"anime"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = on_off[PLAYER_ANIME];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"body_ox"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = integer_string(array8[0]);
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"body_oy"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = integer_string(array8[1]);
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"head_ox"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = integer_string(array9[0]);
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"head_oy"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = integer_string(array9[1]);
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"head_f"), pls::cs::String(u"")}),
                 StringArray::from({literal(u"team"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = integer_string(PLAYER_TEAM);
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"ball"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = on_off[BALL];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"eff"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = game::Player::PLAYER_EFLIST_NAME()[PLAYER_EFINDEX];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())}),
                 StringArray::from({literal(u"shadow"), ([&]() {
                                        auto cs_left = pls::cs::String(u"");
                                        auto cs_right = on_off[SHADOW];
                                        return pls::cs::String::concat(cs_left, cs_right);
                                    }())})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 num4 = 0; num4 < array10.length(); ++num4) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array10[num4][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + num4 * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array10[num4][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + num4 * 14);
                }()));
                if (select_ == num4) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + num4 * 14));
                }
            }
            Draw_player(g);
        } else {
            if (state_ == 6) {
                StringArray2 array11 = StringArray2::from(
                    {StringArray::from(
                         {pls::cs::String::concat(
                              pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                              literal(u" >> ")),
                          literal(u"\u3000\u3000\u3000\u3000")}),
                     StringArray::from({literal(u"メイン画面_練習環境Lv"),
                                        pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                integer_string(require(udat_)->tAreaLv_))}),
                     StringArray::from(
                         {literal(u"メイン画面_コート数"),
                          pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                  integer_string(require(udat_)->tAreaRootNum_))})});
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
                for (pls::cs::Int32 num5 = 0; num5 < array11.length(); ++num5) {
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 = array11[num5][0];
                        require(g)->DrawString(cs_arg0, 20.0f, 10 + num5 * 14);
                    }()));
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 = array11[num5][1];
                        require(g)->DrawString(cs_arg0, 120.0f, 10 + num5 * 14);
                    }()));
                    if (select_ == num5) {
                        PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + num5 * 14));
                    }
                }
            }
        }
    }
}

// M:form.DebugForm.Draw_window(kairo.unity.ui.Graphics)
void DebugForm::Draw_window(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.Draw_window(kairo.unity.ui.Graphics)", game);
    {
        SubForm::ensure_initialized();

        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 64))));
        PLS_API(require(g)->FillRect(0.0f, 0.0f, 240.0f, 240.0f));
        if (state_ == 0) {
            IntArray array = require(udat_)->tpplay_stock[DebugForm::tpp_index()];
            StringArray2 array2 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from(
                     {literal(u"チェック年数"),
                      pls::cs::String::concat(pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                                      integer_string(DebugForm::tpp_index())),
                                              literal(u"年前"))}),
                 StringArray::from(
                     {literal(u"t_資金"),
                      pls::cs::String::concat(literal(u"\u3000\u3000\u3000"), integer_string(array[0]))}),
                 StringArray::from(
                     {literal(u"t_勝ち"),
                      pls::cs::String::concat(literal(u"\u3000\u3000\u3000"), integer_string(array[1]))}),
                 StringArray::from(
                     {literal(u"t_引分"),
                      pls::cs::String::concat(literal(u"\u3000\u3000\u3000"), integer_string(array[2]))}),
                 StringArray::from(
                     {literal(u"t_負け"),
                      pls::cs::String::concat(literal(u"\u3000\u3000\u3000"), integer_string(array[3]))}),
                 StringArray::from(
                     {literal(u"t_研究_ﾌｧﾝ"),
                      pls::cs::String::concat(literal(u"\u3000\u3000\u3000"), integer_string(array[4]))}),
                 StringArray::from(
                     {literal(u"t_研究_ｱｲﾃﾞｱ"),
                      pls::cs::String::concat(literal(u"\u3000\u3000\u3000"), integer_string(array[5]))}),
                 StringArray::from(
                     {literal(u"t_研究_ﾌｨｼﾞｶﾙ"),
                      pls::cs::String::concat(literal(u"\u3000\u3000\u3000"), integer_string(array[6]))}),
                 StringArray::from(
                     {literal(u"t_研究_戦術"),
                      pls::cs::String::concat(literal(u"\u3000\u3000\u3000"), integer_string(array[7]))}),
                 StringArray::from(
                     {literal(u"t_ﾁｰﾑ評価"),
                      pls::cs::String::concat(literal(u"\u3000\u3000\u3000"), integer_string(array[8]))})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 i = 0; i < array2.length(); ++i) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array2[i][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + i * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array2[i][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + i * 14);
                }()));
                if (select_ == i) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + i * 14));
                }
            }
        } else if (state_ == 1) {
            StringArray2 array3 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"試合No  対戦相手      スコア  結果"),
                                    literal(u"\u3000\u3000\u3000\u3000")})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 j = 0; j < array3.length(); ++j) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array3[j][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + j * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array3[j][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + j * 14);
                }()));
            }
            pls::cs::Int32 num = 38;
            pls::cs::Int32 num2 = 0;
            for (pls::cs::Int32 k = tpp_scrollValue_;
                 k < PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->tpplay_battleRecode)));
                 ++k) {
                pls::cs::Int32 num3 = k - tpp_scrollValue_;
                if (num3 >= 13) {
                    break;
                }
                IntArray array4 = pls::cs::unbox<IntArray>(PLS_API(
                    kl_java_util::Vector_2_ElementAt(require(require(udat_)->tpplay_battleRecode), k)));
                pls::cs::Int32 num4 = array4[1] / 10000;
                pls::cs::Int32 num5 = array4[1] / 100 % 100;
                pls::cs::Int32 num6 = array4[1] % 100;
                num2 = num + num3 * 14;
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = ([&]() {
                        auto cs_left = integer_string(array4[0]);
                        auto cs_right = pls::cs::String(u"");
                        return pls::cs::String::concat(cs_left, cs_right);
                    }());
                    require(g)->DrawString(cs_arg0, 47.0f, num2, 4);
                }()));
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
                pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(num4);
                PLS_API(require(g)->DrawString(require(teamData)->name_, 66.0f, num2));
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
                PLS_API(require(g)->DrawString(
                    pls::cs::String::concat(pls::cs::String::concat(integer_string(num5), literal(u"-")),
                                            integer_string(num6)),
                    166.0f, num2, 2));
                pls::cs::String empty = pls::cs::String(u"");
                if (num5 > num6) {
                    PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_BLUE()));
                    empty = literal(u"○");
                } else if (num5 == num6) {
                    PLS_API(
                        require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
                    empty = literal(u"△");
                } else {
                    PLS_API(require(g)->SetColor(SubForm::SC_WINDOW_RED()));
                    empty = literal(u"×");
                }
                PLS_API(require(g)->DrawString(empty, 206.0f, num2));
            }
            {
                auto cs_receiver = apdat_;
                pls::cs::Ref<pls::kairo::Graphics> cs_arg0 = g;
                pls::cs::Int32 cs_arg5 = tpp_scrollValue_;
                pls::cs::Int32 cs_arg6 =
                    PLS_API(kl_java_util::Vector_2_Size(require(require(udat_)->tpplay_battleRecode))) - 1;
                require(cs_receiver)->DrawVerticalScroll2(cs_arg0, 226, 38, 3, 181, cs_arg5, cs_arg6, 13);
            }
        } else if (state_ == 2) {
            StringArray2 array5 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"試合の画面遷移テスト(決定)"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"新編集画面テスト(決定)"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"メイン画面テスト(決定)"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"タイトル(決定)"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"他の試合結果(決定)"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"試合終了(決定)"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"ファン活動(決定)"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"監督(決定)"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"ﾄﾚｰﾄﾞﾘｽﾄ(決定)"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"ﾒﾝﾊﾞｰ一覧(決定)"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"ﾎﾞｰﾅｽ画面のﾁｪｯｸ(決定)_選手"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"ﾎﾞｰﾅｽ画面のﾁｪｯｸ(決定)_ﾌｧﾝ"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from(
                     {literal(u"ﾎﾞｰﾅｽ画面のﾁｪｯｸ(決定)_収支情報"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from(
                     {literal(u"ﾎﾞｰﾅｽ画面のﾁｪｯｸ(決定)_選手new["), literal(u"\u3000\u3000\u3000")})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 l = 0; l < array5.length(); ++l) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array5[l][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + l * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array5[l][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + l * 14);
                }()));
                if (select_ == l) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + l * 14));
                }
            }
        } else if (state_ == 3) {
            StringArray2 array6 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"優勝シーン"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"シーン切り替え"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                            SubForm::SCENE_CHANGE_NAME()[ch_sChangeId])}),
                 StringArray::from({literal(u"イベント_喜び"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"イベント_悲しみ"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"ゲームスタート"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"年末人事_監督"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"年末人事_選手"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"年末人事"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"施設のLVUP"), literal(u"\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"収支報告"), literal(u"\u3000\u3000\u3000")})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 m = 0; m < array6.length(); ++m) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array6[m][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + m * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array6[m][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + m * 14);
                }()));
                if (select_ == m) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + m * 14));
                }
            }
        } else if (state_ == 4) {
            StringArray2 array7 = StringArray2::from(
                {StringArray::from(
                     {pls::cs::String::concat(
                          pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                          literal(u" >> ")),
                      literal(u"\u3000\u3000\u3000\u3000")}),
                 StringArray::from({literal(u"ﾌｧﾝﾎﾞｰﾅｽのﾁｪｯｸ"),
                                    pls::cs::String::concat(literal(u"\u3000\u3000\u3000"),
                                                            require(require(apdat_)->fanBonus_.get_Item(
                                                                        DebugForm::chFanBonusIndex()))
                                                                ->message_)})});
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
            for (pls::cs::Int32 n = 0; n < array7.length(); ++n) {
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array7[n][0];
                    require(g)->DrawString(cs_arg0, 20.0f, 10 + n * 14);
                }()));
                PLS_API(([&]() -> void {
                    pls::cs::String cs_arg0 = array7[n][1];
                    require(g)->DrawString(cs_arg0, 120.0f, 10 + n * 14);
                }()));
                if (select_ == n) {
                    PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + n * 14));
                }
            }
        } else {
            if (state_ == 5) {
                StringArray2 array8 = StringArray2::from({StringArray::from(
                    {pls::cs::String::concat(
                         pls::cs::String::concat(literal(u"<< 次のページへ"), integer_string(state_)),
                         literal(u" >> ")),
                     literal(u"\u3000\u3000\u3000\u3000")})});
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
                for (pls::cs::Int32 num7 = 0; num7 < array8.length(); ++num7) {
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 = array8[num7][0];
                        require(g)->DrawString(cs_arg0, 20.0f, 10 + num7 * 14);
                    }()));
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 = array8[num7][1];
                        require(g)->DrawString(cs_arg0, 120.0f, 10 + num7 * 14);
                    }()));
                    if (select_ == num7) {
                        PLS_API(require(g)->DrawString(literal(u"○"), 5.0f, 10 + num7 * 14));
                    }
                }
                pls::cs::String value = require(require(apdat_)->sysSave_)->strs[11];
                StringArray array9 = PLS_API(kl_unity_util::StringUtil::Split(value, literal(u"\n")));
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
                for (pls::cs::Int32 num8 = 0; num8 < array9.length(); ++num8) {
                    PLS_API(([&]() -> void {
                        pls::cs::String cs_arg0 = array9[num8];
                        require(g)->DrawString(cs_arg0, 20.0f, 10 + num8 * 14 + 14);
                    }()));
                }
            }
        }
    }
}

// M:form.DebugForm.Resume
bool DebugForm::Resume() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.Resume", game);
    {
        return true;
    }
}

// M:form.DebugForm.Draw_coatEva(kairo.unity.ui.Graphics)
void DebugForm::Draw_coatEva(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.Draw_coatEva(kairo.unity.ui.Graphics)", game);
    {
        game::Map::ensure_initialized();

        IntArray2 array = IntArray2{};
        pls::cs::Ref<game::Team> team = require(udat_)->teams_.get_Item(DebugForm::COATEVA_TEAM_ID());
        pls::cs::Ref<game::Team> team2 = require(udat_)->teams_.get_Item(1 - DebugForm::COATEVA_TEAM_ID());
        if (DebugForm::COATEVA_ROOT_INDEX() == 0) {
            array = require(team)->coatEva_new_offence;
        }
        if (DebugForm::COATEVA_ROOT_INDEX() == 1) {
            array = require(team)->coatEva_new_deffence;
        }
        if (DebugForm::COATEVA_ROOT_INDEX() == 2) {
            array = require(team)->coatEva_new_offence_passer;
        }
        if (DebugForm::COATEVA_ROOT_INDEX() == 3) {
            array = require(team)->coatEva_passer2;
        }
        if (DebugForm::COATEVA_ROOT_INDEX() == 4) {
            array = require(team)->coatEva_freeRun2;
        }
        if (DebugForm::COATEVA_ROOT_INDEX() == 5) {
            array = require(team)->coatEva_defence;
        }
        if (DebugForm::COATEVA_ROOT_INDEX() == 6) {
            array = require(team)->coatEva_looseBall;
        }
        if (DebugForm::COATEVA_ROOT_INDEX() == 7) {
            array = require(team)->coatEva_passer;
        }
        if (DebugForm::COATEVA_ROOT_INDEX() == 8) {
            array = require(team)->coatEva_freeRun;
        }
        pls::cs::Int32 num = 10;
        pls::cs::Int32 num2 = 120 - game::Map::MAPCHIP_COAT_WNUM() / 2 * num;
        pls::cs::Int32 num3 = 60;
        pls::cs::Int32 coordinateX;
        pls::cs::Int32 coordinateY;
        pls::cs::Int32 num4 = 0;
        for (pls::cs::Int32 num5 = game::Map::MAPCHIP_COAT_HNUM() - 1; num5 >= 0; --num5) {
            for (pls::cs::Int32 i = 0; i < game::Map::MAPCHIP_COAT_WNUM(); ++i) {
                pls::cs::Int32 num6 = array[num5][i];
                if (num6 < 20) {
                    PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 255))));
                } else if (num6 < 40) {
                    PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 255, 255))));
                } else if (num6 < 60) {
                    PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 255, 0))));
                } else if (num6 < 80) {
                    PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 0))));
                } else {
                    PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 0, 0))));
                }
                coordinateX = num2 + i * num;
                coordinateY = num3 + num4 * num;
                PLS_API(require(g)->FillRect(coordinateX, coordinateY, num, num));
            }
            ++num4;
        }
        if (DebugForm::COATEVA_WAKU() == 0) {
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(128, 128, 128))));
            for (pls::cs::Int32 num9 = game::Map::MAPCHIP_COAT_HNUM() - 1; num9 >= 0; --num9) {
                for (pls::cs::Int32 j = 0; j < game::Map::MAPCHIP_COAT_WNUM(); ++j) {
                    coordinateX = num2 + j * num;
                    coordinateY = num3 + num9 * num;
                    PLS_API(require(g)->DrawRect(coordinateX, coordinateY, num, num));
                }
            }
        }
        pls::cs::Ref<game::Player> passer = require(team)->GetPasser();
        if (is_null(passer)) {
            passer = require(team2)->GetPasser();
        }
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 0))));
        if (!is_null(passer)) {
            coordinateX = num2 + require(passer)->address_[0] * num;
            coordinateY = num3 + (game::Map::MAPCHIP_COAT_HNUM() - 1 - require(passer)->address_[1]) * num;
            PLS_API(require(g)->DrawRect(coordinateX, coordinateY, num, num));
        }
        pls::cs::Int32 num10 = -1;
        if (!is_null(require(require(udat_)->ball_)->owner_)) {
            num10 = require(require(require(udat_)->ball_)->owner_)->team_id_;
        } else if (!is_null(require(require(udat_)->ball_)->lastOwner_)) {
            num10 = require(require(require(udat_)->ball_)->lastOwner_)->team_id_;
        }
        if (num10 == -1) {
            return;
        }
        pls::cs::Ref<game::Team> team3 = require(udat_)->teams_.get_Item(0);
        pls::cs::Ref<game::Team> team4 = require(udat_)->teams_.get_Item(1);
        pls::cs::Int32 num11 = num2;
        pls::cs::Int32 num12 = num2 + game::Map::MAPCHIP_COAT_WNUM() * num;
        pls::cs::Int32 num13 = pls::cs::to_int32(game::GameUtil::RateConvertFloat(
            ([&]() -> pls::cs::FloatEval {
                auto cs_left = require(team4)->fPos_[1];
                auto cs_right = require(team4)->fPos_[3] / 2.0f;
                return cs_left + cs_right;
            }()),
            900.0f, -900.0f, num3, num3 + game::Map::MAPCHIP_COAT_HNUM() * num, true));
        pls::cs::Int32 num14 = pls::cs::to_int32(game::GameUtil::RateConvertFloat(
            ([&]() -> pls::cs::FloatEval {
                auto cs_left = require(team4)->fPos_[1];
                auto cs_right = require(team4)->fPos_[3] / 2.0f;
                return cs_left - cs_right;
            }()),
            900.0f, -900.0f, num3, num3 + game::Map::MAPCHIP_COAT_HNUM() * num, true));
        num11 -= 2;
        num12 += 2;
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 168, 255))));
        PLS_API(require(g)->DrawRect(num11, num13, num12 - num11, num14 - num13));
        PLS_API(require(g)->DrawRect(num11 + 1, num13 + 1, num12 - num11 - 2, num14 - num13 - 2));
        num11 = num2;
        num12 = num2 + game::Map::MAPCHIP_COAT_WNUM() * num;
        num13 = pls::cs::to_int32(game::GameUtil::RateConvertFloat(
            ([&]() -> pls::cs::FloatEval {
                auto cs_left = require(team3)->fPos_[1];
                auto cs_right = require(team3)->fPos_[3] / 2.0f;
                return cs_left + cs_right;
            }()),
            900.0f, -900.0f, num3, num3 + game::Map::MAPCHIP_COAT_HNUM() * num, true));
        num14 = pls::cs::to_int32(game::GameUtil::RateConvertFloat(
            ([&]() -> pls::cs::FloatEval {
                auto cs_left = require(team3)->fPos_[1];
                auto cs_right = require(team3)->fPos_[3] / 2.0f;
                return cs_left - cs_right;
            }()),
            900.0f, -900.0f, num3, num3 + game::Map::MAPCHIP_COAT_HNUM() * num, true));
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 206, 16))));
        PLS_API(require(g)->DrawRect(num11, num13, num12 - num11, num14 - num13));
        PLS_API(require(g)->DrawRect(num11 + 1, num13 + 1, num12 - num11 - 2, num14 - num13 - 2));
        pls::cs::Int32 num15 = num2;
        pls::cs::Int32 num16 = num2 + game::Map::MAPCHIP_COAT_WNUM() * num;
        pls::cs::Int32 num17 = pls::cs::to_int32(game::GameUtil::RateConvertFloat(
            require(require(team)->amefto_goalPos_.get_Item(0))->z_, 900.0f, -900.0f, num3,
            num3 + game::Map::MAPCHIP_COAT_HNUM() * num, true));
        if (frame_ % 4 < 2) {
            if (require(team)->team_id_ == 0) {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 0))));
            } else {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 255))));
            }
        } else if (require(team)->team_id_ == 0) {
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(200, 255, 100))));
        } else {
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(100, 100, 255))));
        }
        if (num10 != -1) {
            PLS_API(require(g)->DrawLine(num15, num17, num16, num17, 1.0f));
            PLS_API(require(g)->DrawLine(num15, num17 + 1, num16, num17 + 1, 1.0f));
        }
        pls::cs::Int32 num18 = 6;
        for (pls::cs::Int32 num19 = pls::cs::Int32(require(udat_)->teams_.length()) - 1; num19 >= 0;
             --num19) {
            for (pls::cs::Int32 k = 0; k < require(require(udat_)->teams_.get_Item(num19))->players_.length();
                 ++k) {
                pls::cs::Ref<game::Player> player =
                    require(require(udat_)->teams_.get_Item(num19))->players_.get_Item(k);
                coordinateX = pls::cs::to_int32(game::GameUtil::RateConvertFloat(
                    require(require(player)->pos_)->x_, -450.0f, 450.0f, num2,
                    num2 + game::Map::MAPCHIP_COAT_WNUM() * num, true));
                coordinateY = pls::cs::to_int32(game::GameUtil::RateConvertFloat(
                    require(require(player)->pos_)->z_, 900.0f, -900.0f, num3,
                    num3 + game::Map::MAPCHIP_COAT_HNUM() * num, true));
                if (num19 == 1) {
                    PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 128, 128))));
                } else {
                    PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 122, 0))));
                }
                PLS_API(require(g)->FillArc(coordinateX, coordinateY, num18, num18, 0.0f, 359.0f));
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 0, 0))));
                PLS_API(
                    require(g)->DrawArc(coordinateX, coordinateY, num18 - 1, num18 - 1, 0.0f, 359.0f, 1.0f));
                if (PLS_API(kl_unity_util::BitUtil::Check(require(player)->flag_, 4))) {
                    PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 0, 255))));
                    PLS_API(require(g)->FillArc(coordinateX - 2, coordinateY - 2, num18 + 4, num18 + 4, 0.0f,
                                                359.0f));
                }
            }
        }
    }
}

// M:form.DebugForm.Draw_moveArea(kairo.unity.ui.Graphics,System.Int32,System.Int32)
void DebugForm::Draw_moveArea(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 team_id,
                              pls::cs::Int32 p_id) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:form.DebugForm.Draw_moveArea(kairo.unity.ui.Graphics,System.Int32,System.Int32)",
                     game);
    {
        game::Map::ensure_initialized();

        pls::cs::Ref<game::Team> team = require(udat_)->teams_.get_Item(team_id);
        pls::cs::Int32 num = 10;
        pls::cs::Int32 num2 = 120 - game::Map::MAPCHIP_COAT_WNUM() / 2 * num;
        pls::cs::Int32 num3 = 60;
        pls::cs::Int32 coordinateX;
        pls::cs::Int32 coordinateY;
        pls::cs::Int32 num4 = 0;
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 255))));
        for (pls::cs::Int32 num5 = game::Map::MAPCHIP_COAT_HNUM() - 1; num5 >= 0; --num5) {
            for (pls::cs::Int32 i = 0; i < game::Map::MAPCHIP_COAT_WNUM(); ++i) {
                coordinateX = num2 + i * num;
                coordinateY = num3 + num5 * num;
                PLS_API(require(g)->DrawRect(coordinateX, coordinateY, num, num));
            }
        }
        {
            auto cs_target = formationRect_global_pos.get_Item(0);
            auto cs_left_36 = require(team)->fPos_[0];
            auto cs_right_36 = require(team)->fPos_[2] / 2.0f;
            pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_36 - cs_right_36);
            require(cs_target)->x_ = cs_value;
        }
        {
            auto cs_target = formationRect_global_pos.get_Item(0);
            auto cs_left_37 = require(team)->fPos_[1];
            auto cs_right_37 = require(team)->fPos_[3] / 2.0f;
            pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_37 + cs_right_37);
            require(cs_target)->z_ = cs_value;
        }
        {
            auto cs_target = formationRect_global_pos.get_Item(1);
            auto cs_left_38 = require(team)->fPos_[0];
            auto cs_right_38 = require(team)->fPos_[2] / 2.0f;
            pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_38 + cs_right_38);
            require(cs_target)->x_ = cs_value;
        }
        {
            auto cs_target = formationRect_global_pos.get_Item(1);
            auto cs_left_39 = require(team)->fPos_[1];
            auto cs_right_39 = require(team)->fPos_[3] / 2.0f;
            pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_39 + cs_right_39);
            require(cs_target)->z_ = cs_value;
        }
        {
            auto cs_target = formationRect_global_pos.get_Item(2);
            auto cs_left_40 = require(team)->fPos_[0];
            auto cs_right_40 = require(team)->fPos_[2] / 2.0f;
            pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_40 + cs_right_40);
            require(cs_target)->x_ = cs_value;
        }
        {
            auto cs_target = formationRect_global_pos.get_Item(2);
            auto cs_left_41 = require(team)->fPos_[1];
            auto cs_right_41 = require(team)->fPos_[3] / 2.0f;
            pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_41 - cs_right_41);
            require(cs_target)->z_ = cs_value;
        }
        {
            auto cs_target = formationRect_global_pos.get_Item(3);
            auto cs_left_42 = require(team)->fPos_[0];
            auto cs_right_42 = require(team)->fPos_[2] / 2.0f;
            pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_42 - cs_right_42);
            require(cs_target)->x_ = cs_value;
        }
        {
            auto cs_target = formationRect_global_pos.get_Item(3);
            auto cs_left_43 = require(team)->fPos_[1];
            auto cs_right_43 = require(team)->fPos_[3] / 2.0f;
            pls::cs::Single cs_value = pls::cs::FloatEval(cs_left_43 - cs_right_43);
            require(cs_target)->z_ = cs_value;
        }
        for (pls::cs::Int32 j = 0; j < formationRect_global_pos.length(); ++j) {
            {
                auto cs_target = formationRect_camera_pos[j];
                auto cs_index = 0;
                auto cs_value = pls::cs::to_int32(game::GameUtil::RateConvertFloat(
                    require(formationRect_global_pos.get_Item(j))->x_, -450.0f, 450.0f, num2,
                    num2 + game::Map::MAPCHIP_COAT_WNUM() * num, true));
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = formationRect_camera_pos[j];
                auto cs_index = 1;
                auto cs_value = pls::cs::to_int32(game::GameUtil::RateConvertFloat(
                    require(formationRect_global_pos.get_Item(j))->z_, 900.0f, -900.0f, num3,
                    num3 + game::Map::MAPCHIP_COAT_HNUM() * num, true));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 0, 0, 128))));
        PLS_API(([&]() -> void {
            pls::cs::Single cs_arg0 = formationRect_camera_pos[0][0];
            pls::cs::Single cs_arg1 = formationRect_camera_pos[0][1];
            pls::cs::Single cs_arg2 = ([&]() -> pls::cs::Int32 {
                auto cs_left = formationRect_camera_pos[1][0];
                auto cs_right = formationRect_camera_pos[0][0];
                return cs_left - cs_right;
            }());
            pls::cs::Single cs_arg3 = ([&]() -> pls::cs::Int32 {
                auto cs_left = formationRect_camera_pos[2][1];
                auto cs_right = formationRect_camera_pos[0][1];
                return cs_left - cs_right;
            }());
            require(g)->FillRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
        }()));
        for (pls::cs::Int32 k = 0; k < require(team)->players_.length(); ++k) {
            pls::cs::Ref<game::Player> player = require(team)->players_.get_Item(k);
            if (k == p_id) {
                pls::cs::Int32 num8 = 0;
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(0, 255, 0, 220))));
                for (pls::cs::Int32 num9 = require(player)->formation_address_[0][1];
                     num9 >= require(player)->formation_address_[3][1]; --num9) {
                    for (pls::cs::Int32 l = require(player)->formation_address_[0][0];
                         l <= require(player)->formation_address_[1][0]; ++l) {
                        coordinateX = num2 + l * num;
                        coordinateY = num3 + (game::Map::MAPCHIP_COAT_HNUM() - num9 - 1) * num;
                        PLS_API(require(g)->FillRect(coordinateX, coordinateY, num, num));
                    }
                    ++num8;
                }
            }
        }
        pls::cs::Int32 num10 = 6;
        for (pls::cs::Int32 m = 0; m < require(team)->players_.length(); ++m) {
            pls::cs::Ref<game::Player> player2 = require(team)->players_.get_Item(m);
            coordinateX = pls::cs::to_int32(
                game::GameUtil::RateConvertFloat(require(require(player2)->pos_)->x_, -450.0f, 450.0f, num2,
                                                 num2 + game::Map::MAPCHIP_COAT_WNUM() * num, true));
            coordinateY = pls::cs::to_int32(
                game::GameUtil::RateConvertFloat(require(require(player2)->pos_)->z_, 900.0f, -900.0f, num3,
                                                 num3 + game::Map::MAPCHIP_COAT_HNUM() * num, true));
            if (PLS_API(kl_unity_util::BitUtil::Check(require(player2)->flag_, 4))) {
                PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 0, 255))));
                PLS_API(require(g)->FillArc(coordinateX - 2, coordinateY - 2, num10 + 4, num10 + 4, 0.0f,
                                            359.0f));
            }
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 0))));
            PLS_API(require(g)->FillArc(coordinateX, coordinateY, num10, num10, 0.0f, 359.0f));
        }
    }
}

// M:form.DebugForm.Draw_player(kairo.unity.ui.Graphics)
void DebugForm::Draw_player(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.Draw_player(kairo.unity.ui.Graphics)", game);
    {
        game::Ball::ensure_initialized();
        game::UserData::ensure_initialized();

        pls::cs::Int32 pLAYER_SEB = PLAYER_SEB;
        pls::cs::Int32 pLAYER_DIRECT = PLAYER_DIRECT;
        pls::cs::Int32 head_id = PLAYER_FACE - 300;
        pls::cs::Int32 num = PLAYER_BODY;
        if (pLAYER_SEB == 14) {
            num += 100;
        }
        require(temp_player)->direct_ = pLAYER_DIRECT;
        require(temp_player)->sebCnt_ =
            ((require(temp_player)->sebCnt_ + 1) % 2147483647 /* Int32.MaxValue */);
        if (PLAYER_ANIME == 1) {
            {
                auto cs_target = temp_player;
                pls::cs::Int32 cs_value = PLS_API(kl_unity_util::BitUtil::On(require(temp_player)->flag_, 2));
                require(cs_target)->flag_ = cs_value;
            }
        } else {
            {
                auto cs_target = temp_player;
                pls::cs::Int32 cs_value =
                    PLS_API(kl_unity_util::BitUtil::Off(require(temp_player)->flag_, 2));
                require(cs_target)->flag_ = cs_value;
            }
        }
        require(temp_player)->team_id_ = PLAYER_TEAM;
        require(temp_player)->role_ = 3;
        pls::cs::Int32 num2 = 0;
        if (PLAYER_ANIME == 1) {
            num2 = require(temp_player)->SetDrawParam(head_id, num, pLAYER_SEB, -1);
        } else {
            num2 = require(temp_player)->SetDrawParam(head_id, num, pLAYER_SEB, PLAYER_FRAME);
        }
        pls::cs::Int32 num3 = 194;
        pls::cs::Int32 num4 = 58;
        pls::cs::Int32 num5 = 50;
        PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(200, 200, 200))));
        PLS_API(require(g)->FillRect(num3 - num5 / 2, num4 - num5 / 2, num5, num5));
        if (PLS_API(kl_java_util::Vector_2_Size(require(sortDraw))) > 0) {
            PLS_API(kl_java_util::Vector_2_RemoveAllElements(require(sortDraw)));
        }
        pls::cs::Int32 num6 = num4 + require(temp_player)->draw_param[6];
        PLS_API(([&]() -> void {
            auto cs_receiver = sortDraw;
            pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({0, num6}));
            kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
        }()));
        pls::cs::Int32 num7 = 0;
        pls::cs::Int32 num8 = 0;
        if (BALL == 1) {
            pls::cs::Int32 num9 = num4;
            num7 = game::Ball::SAVING_OFF()[PLAYER_TEAM][PLAYER_FRAME][0];
            num8 = game::Ball::SAVING_OFF()[PLAYER_TEAM][PLAYER_FRAME][1];
            PLS_API(([&]() -> void {
                auto cs_receiver = sortDraw;
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({1, num9}));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }()));
        }
        pls::cs::Int32 num10 = 0;
        pls::cs::Int32 num11 = 0;
        if (SHADOW == 1) {
            pls::cs::Int32 num12 = -1000;
            game::UserData::Update_45v1();
            game::UserData::Update_78v2();
            game::UserData::PrintOut();
            num10 = game::UserData::TEST_VALUE1();
            num11 = game::UserData::TEST_VALUE2();
            PLS_API(([&]() -> void {
                auto cs_receiver = sortDraw;
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({2, num12}));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }()));
        }
        pls::cs::Int32 num13 = 0;
        pls::cs::Int32 num14 = 0;
        if (PLAYER_EFINDEX != 0) {
            pls::cs::Int32 num15 = 1000000;
            game::UserData::Update_45v1();
            game::UserData::Update_78v2();
            game::UserData::PrintOut();
            num13 = game::UserData::TEST_VALUE1();
            num14 = game::UserData::TEST_VALUE2();
            PLS_API(([&]() -> void {
                auto cs_receiver = sortDraw;
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(IntArray::from({3, num15}));
                kl_java_util::Vector_2_AddElement(require(cs_receiver), cs_arg0);
            }()));
        }
        for (pls::cs::Int32 i = 0; i < PLS_API(kl_java_util::Vector_2_Size(require(sortDraw))) - 1; ++i) {
            for (pls::cs::Int32 num16 = PLS_API(kl_java_util::Vector_2_Size(require(sortDraw))) - 1;
                 num16 > i; --num16) {
                IntArray array =
                    pls::cs::unbox<IntArray>(PLS_API(kl_java_util::Vector_2_ElementAt(require(sortDraw), i)));
                IntArray array2 = pls::cs::unbox<IntArray>(
                    PLS_API(kl_java_util::Vector_2_ElementAt(require(sortDraw), num16)));
                if ([&]() -> bool {
                        auto cs_left = array2[1];
                        auto cs_right = array[1];
                        return cs_left < cs_right;
                    }()) {
                    PLS_API(kl_java_util::Vector_2_SetElementAt(require(sortDraw), pls::cs::box(array2), i));
                    PLS_API(
                        kl_java_util::Vector_2_SetElementAt(require(sortDraw), pls::cs::box(array), num16));
                }
            }
        }
        for (pls::cs::Int32 j = 0; j < PLS_API(kl_java_util::Vector_2_Size(require(sortDraw))); ++j) {
            IntArray array3 =
                pls::cs::unbox<IntArray>(PLS_API(kl_java_util::Vector_2_ElementAt(require(sortDraw), j)));
            if (array3[0] == 0) {
                require(temp_player)->Draw(g, num3, num4, num2, false);
            } else if (array3[0] == 1) {
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(0);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(2);
                    require(apdat_)->DrawSeb(g, num3 + num7, num4 + num8, cs_arg3, cs_arg4, 0);
                }
            } else if (array3[0] == 2) {
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(0);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(2);
                    require(apdat_)->DrawSeb(g, num3 + num10, num4 + num11, cs_arg3, cs_arg4, 4);
                }
            } else if (array3[0] == 3) {
                {
                    pls::cs::Ref<kairo::unity::ui::Seb> cs_arg3 =
                        require(require(apdat_)->resCom2_)->seb.get_Item(6);
                    pls::cs::Ref<pls::kairo::Image> cs_arg4 =
                        require(require(apdat_)->resCom2_)->img.get_Item(9);
                    require(apdat_)->DrawSeb(g, num3 + num13, num4 + num14, cs_arg3, cs_arg4, 0);
                }
            }
        }
    }
}

// M:form.DebugForm.Draw_goal(kairo.unity.ui.Graphics)
void DebugForm::Draw_goal(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.Draw_goal(kairo.unity.ui.Graphics)", game);
    {
        game::Map::ensure_initialized();

        require(apdat_)->ClearZSortObjects();
        pls::cs::Int32 num5;
        pls::cs::Int32 num;
        pls::cs::Int32 num2;
        pls::cs::Int32 num3;
        num3 = 0;
        num2 = num3;
        num = num2;
        num5 = num;
        pls::cs::Int32 num4 = 0;
        num5 = -13;
        num = 17;
        camera_pos[0] = 120;
        camera_pos[1] = 160;
        if (GOAL == 0) {
            for (pls::cs::Int32 i = 0; i < game::Map::GOAL1_PARTS_POS().length(); ++i) {
                num2 = ([&]() -> pls::cs::Int32 {
                           auto cs_left = camera_pos[0];
                           auto cs_right = game::Map::GOAL1_PARTS_POS()[i][0];
                           return cs_left + cs_right;
                       }()) +
                       num5;
                num3 = ([&]() -> pls::cs::Int32 {
                           auto cs_left = camera_pos[1];
                           auto cs_right = game::Map::GOAL1_PARTS_POS()[i][1];
                           return cs_left + cs_right;
                       }()) +
                       num;
                num4 = ([&]() -> pls::cs::Int32 {
                    auto cs_left = ([&]() -> pls::cs::Int32 {
                                       auto cs_left = camera_pos[1];
                                       auto cs_right = game::Map::GOAL1_PARTS_POS()[i][1];
                                       return cs_left + cs_right;
                                   }()) +
                                   num;
                    auto cs_right = game::Map::GOAL1_PARTS_GRA()[i][2];
                    return cs_left + cs_right;
                }());
                {
                    pls::cs::Int32 cs_arg3 = game::Map::GOAL1_PARTS_GRA()[i][0];
                    pls::cs::Int32 cs_arg4 = game::Map::GOAL1_PARTS_GRA()[i][1];
                    require(apdat_)->InsertGameObject(8, 0, num4, cs_arg3, cs_arg4, 0, num2, num3, false, 0);
                }
                if (i == GOAL_INDEX) {
                    pls::cs::Ref<pls::kairo::Image> image =
                        require(require(apdat_)->resCom2_)->img.get_Item(game::Map::GOAL1_PARTS_GRA()[i][0]);
                    PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 0))));
                    PLS_API(([&]() -> void {
                        pls::cs::Single cs_arg0 =
                            num2 - pls::cs::Int32(PLS_API(require(image)->GetWidth())) / 2;
                        pls::cs::Single cs_arg1 = num3 - PLS_API(require(image)->GetHeight());
                        pls::cs::Single cs_arg2 = PLS_API(require(image)->GetWidth());
                        pls::cs::Single cs_arg3 = PLS_API(require(image)->GetHeight());
                        require(g)->DrawRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                    }()));
                }
            }
        }
        num5 = 12;
        num = 1;
        if (GOAL == 1) {
            for (pls::cs::Int32 j = 0; j < game::Map::GOAL2_PARTS_POS().length(); ++j) {
                num2 = ([&]() -> pls::cs::Int32 {
                           auto cs_left = camera_pos[0];
                           auto cs_right = game::Map::GOAL2_PARTS_POS()[j][0];
                           return cs_left + cs_right;
                       }()) +
                       num5;
                num3 = ([&]() -> pls::cs::Int32 {
                           auto cs_left = camera_pos[1];
                           auto cs_right = game::Map::GOAL2_PARTS_POS()[j][1];
                           return cs_left + cs_right;
                       }()) +
                       num;
                num4 = ([&]() -> pls::cs::Int32 {
                    auto cs_left = ([&]() -> pls::cs::Int32 {
                                       auto cs_left = camera_pos[1];
                                       auto cs_right = game::Map::GOAL2_PARTS_POS()[j][1];
                                       return cs_left + cs_right;
                                   }()) +
                                   num;
                    auto cs_right = game::Map::GOAL2_PARTS_GRA()[j][2];
                    return cs_left + cs_right;
                }());
                {
                    pls::cs::Int32 cs_arg3 = game::Map::GOAL2_PARTS_GRA()[j][0];
                    pls::cs::Int32 cs_arg4 = game::Map::GOAL2_PARTS_GRA()[j][1];
                    require(apdat_)->InsertGameObject(8, 0, num4, cs_arg3, cs_arg4, 0, num2, num3, false, 0);
                }
                if (j == GOAL_INDEX) {
                    pls::cs::Ref<pls::kairo::Image> image2 =
                        require(require(apdat_)->resCom2_)->img.get_Item(game::Map::GOAL1_PARTS_GRA()[j][0]);
                    PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 0))));
                    PLS_API(([&]() -> void {
                        pls::cs::Single cs_arg0 =
                            num2 - pls::cs::Int32(PLS_API(require(image2)->GetWidth())) / 2;
                        pls::cs::Single cs_arg1 = num3 - PLS_API(require(image2)->GetHeight());
                        pls::cs::Single cs_arg2 = PLS_API(require(image2)->GetWidth());
                        pls::cs::Single cs_arg3 = PLS_API(require(image2)->GetHeight());
                        require(g)->DrawRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                    }()));
                }
            }
        }
        require(apdat_)->DrawZSortObjects(g, true);
    }
}

// M:form.DebugForm.Draw_goalMini(kairo.unity.ui.Graphics)
void DebugForm::Draw_goalMini(pls::cs::Ref<pls::kairo::Graphics> g) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.Draw_goalMini(kairo.unity.ui.Graphics)", game);
    {
        game::MapMain::ensure_initialized();

        require(apdat_)->ClearZSortObjects();
        pls::cs::Int32 num5;
        pls::cs::Int32 num;
        pls::cs::Int32 num2;
        pls::cs::Int32 num3;
        num3 = 0;
        num2 = num3;
        num = num2;
        num5 = num;
        pls::cs::Int32 num4 = 0;
        num5 = -13;
        num = 17;
        camera_pos[0] = 120;
        camera_pos[1] = 160;
        if (GOAL == 0) {
            for (pls::cs::Int32 i = 0; i < game::MapMain::GOAL1_PARTS_POS().length(); ++i) {
                num2 = ([&]() -> pls::cs::Int32 {
                           auto cs_left = camera_pos[0];
                           auto cs_right = game::MapMain::GOAL1_PARTS_POS()[i][0];
                           return cs_left + cs_right;
                       }()) +
                       num5;
                num3 = ([&]() -> pls::cs::Int32 {
                           auto cs_left = camera_pos[1];
                           auto cs_right = game::MapMain::GOAL1_PARTS_POS()[i][1];
                           return cs_left + cs_right;
                       }()) +
                       num;
                num4 = ([&]() -> pls::cs::Int32 {
                    auto cs_left = ([&]() -> pls::cs::Int32 {
                                       auto cs_left = camera_pos[1];
                                       auto cs_right = game::MapMain::GOAL1_PARTS_POS()[i][1];
                                       return cs_left + cs_right;
                                   }()) +
                                   num;
                    auto cs_right = game::MapMain::GOAL1_PARTS_GRA()[i][2];
                    return cs_left + cs_right;
                }());
                {
                    pls::cs::Int32 cs_arg3 = game::MapMain::GOAL1_PARTS_GRA()[i][0];
                    pls::cs::Int32 cs_arg4 = game::MapMain::GOAL1_PARTS_GRA()[i][1];
                    require(apdat_)->InsertGameObject(8, 0, num4, cs_arg3, cs_arg4, 0, num2, num3, false, 0);
                }
                if (i == GOAL_INDEX) {
                    pls::cs::Ref<pls::kairo::Image> image =
                        require(require(apdat_)->resCom2_)
                            ->img.get_Item(game::MapMain::GOAL1_PARTS_GRA()[i][0]);
                    PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 0))));
                    PLS_API(([&]() -> void {
                        pls::cs::Single cs_arg0 =
                            num2 - pls::cs::Int32(PLS_API(require(image)->GetWidth())) / 2;
                        pls::cs::Single cs_arg1 = num3 - PLS_API(require(image)->GetHeight());
                        pls::cs::Single cs_arg2 = PLS_API(require(image)->GetWidth());
                        pls::cs::Single cs_arg3 = PLS_API(require(image)->GetHeight());
                        require(g)->DrawRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                    }()));
                }
            }
        }
        num5 = 12;
        num = 1;
        if (GOAL == 1) {
            for (pls::cs::Int32 j = 0; j < game::MapMain::GOAL2_PARTS_POS().length(); ++j) {
                num2 = ([&]() -> pls::cs::Int32 {
                           auto cs_left = camera_pos[0];
                           auto cs_right = game::MapMain::GOAL2_PARTS_POS()[j][0];
                           return cs_left + cs_right;
                       }()) +
                       num5;
                num3 = ([&]() -> pls::cs::Int32 {
                           auto cs_left = camera_pos[1];
                           auto cs_right = game::MapMain::GOAL2_PARTS_POS()[j][1];
                           return cs_left + cs_right;
                       }()) +
                       num;
                num4 = ([&]() -> pls::cs::Int32 {
                    auto cs_left = ([&]() -> pls::cs::Int32 {
                                       auto cs_left = camera_pos[1];
                                       auto cs_right = game::MapMain::GOAL2_PARTS_POS()[j][1];
                                       return cs_left + cs_right;
                                   }()) +
                                   num;
                    auto cs_right = game::MapMain::GOAL2_PARTS_GRA()[j][2];
                    return cs_left + cs_right;
                }());
                {
                    pls::cs::Int32 cs_arg3 = game::MapMain::GOAL2_PARTS_GRA()[j][0];
                    pls::cs::Int32 cs_arg4 = game::MapMain::GOAL2_PARTS_GRA()[j][1];
                    require(apdat_)->InsertGameObject(8, 0, num4, cs_arg3, cs_arg4, 0, num2, num3, false, 0);
                }
                if (j == GOAL_INDEX) {
                    pls::cs::Ref<pls::kairo::Image> image2 =
                        require(require(apdat_)->resCom2_)
                            ->img.get_Item(game::MapMain::GOAL1_PARTS_GRA()[j][0]);
                    PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(255, 255, 0))));
                    PLS_API(([&]() -> void {
                        pls::cs::Single cs_arg0 =
                            num2 - pls::cs::Int32(PLS_API(require(image2)->GetWidth())) / 2;
                        pls::cs::Single cs_arg1 = num3 - PLS_API(require(image2)->GetHeight());
                        pls::cs::Single cs_arg2 = PLS_API(require(image2)->GetWidth());
                        pls::cs::Single cs_arg3 = PLS_API(require(image2)->GetHeight());
                        require(g)->DrawRect(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                    }()));
                }
            }
        }
        require(apdat_)->DrawZSortObjects(g, true);
    }
}

// M:form.DebugForm.UpdateTestParam
void DebugForm::UpdateTestParam() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.UpdateTestParam", game);
    {
        pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(TEST_P1_TEAM);
        pls::cs::Ref<data::TeamData> teamData2 = require(apdat_)->tData_.get_Item(TEST_P2_TEAM);
        TEST_P1_POTENTIAL = require(teamData)->warPotential_;
        TEST_P2_POTENTIAL = require(teamData2)->warPotential_;
        TEST_P1_FORMATION = require(teamData)->formation_;
        TEST_P2_FORMATION = require(teamData2)->formation_;
    }
}

// M:form.DebugForm.GetTouchValue(System.Int32,System.Int32)
std::int32_t DebugForm::GetTouchValue(std::int32_t type_raw, std::int32_t index_raw) {
    pls::cs::Int32 type = type_raw;
    pls::cs::Int32 index = index_raw;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.GetTouchValue(System.Int32,System.Int32)", game);
    {
        return 0;
    }
}

// M:form.DebugForm.SetTouchValue(System.Int32,System.Int32)
void DebugForm::SetTouchValue(std::int32_t type_raw, std::int32_t value_raw) {
    pls::cs::Int32 type = type_raw;
    pls::cs::Int32 value = value_raw;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:form.DebugForm.SetTouchValue(System.Int32,System.Int32)", game);
    {
    }
}
} // namespace form
}
