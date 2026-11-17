// GENERATED (readable mode) by translator/Translator.cs from the reconstructed C#. Do not edit.
#include "data.BaseData.hpp"
#include "data.FormationData.hpp"
#include "data.PlayerData.hpp"
#include "data.TeamData.hpp"
#include "game.Ball.hpp"
#include "game.Camera.hpp"
#include "game.GameManager.hpp"
#include "game.GameUtil.hpp"
#include "game.Map.hpp"
#include "game.Player.hpp"
#include "game.Team.hpp"
#include "game.UserData.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JMath.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.m3d4.util3d.Vector3D.hpp"
#include "generated/kairo.unity.util.BitUtil.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "main.AppData.hpp"
#include "generated/java.util.JTool_templates.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace pls::game {
namespace game {

void Team::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(apdat_, visitor);
    pls::cs::trace_value(udat_, visitor);
    pls::cs::trace_value(players_, visitor);
    pls::cs::trace_value(fPos_, visitor);
    pls::cs::trace_value(CORRECT_LINE, visitor);
    pls::cs::trace_value(NOW_LINE, visitor);
    pls::cs::trace_value(team_policyEva, visitor);
    pls::cs::trace_value(team_eva, visitor);
    pls::cs::trace_value(team_frect, visitor);
    pls::cs::trace_value(frect_pos, visitor);
    pls::cs::trace_value(frect_cpos, visitor);
    pls::cs::trace_value(amefto_goalPos_, visitor);
    pls::cs::trace_value(amefto_cameraPos_, visitor);
    pls::cs::trace_value(amefto_address_, visitor);
    pls::cs::trace_value(receiverPIdBox_, visitor);
    pls::cs::trace_value(CEVA_PASSER_MP2, visitor);
    pls::cs::trace_value(CEVA_PASSER_MP2_DIV, visitor);
    pls::cs::trace_value(CEVA_PASSER_MP3, visitor);
    pls::cs::trace_value(CEVA_PASSER_AP, visitor);
    pls::cs::trace_value(CEVA_PASSER_ENEAP, visitor);
    pls::cs::trace_value(coatEva_passer, visitor);
    pls::cs::trace_value(coatEva_freeRun, visitor);
    pls::cs::trace_value(coatEva_defence, visitor);
    pls::cs::trace_value(coatEva_looseBall, visitor);
    pls::cs::trace_value(coatEva_passer2, visitor);
    pls::cs::trace_value(coatEva_freeRun2, visitor);
    pls::cs::trace_value(coatEva_new_offence, visitor);
    pls::cs::trace_value(coatEva_new_offence_passer, visitor);
    pls::cs::trace_value(coatEva_new_deffence, visitor);
    pls::cs::trace_value(ballNearPlayer_, visitor);
    pls::cs::trace_value(players_receive_, visitor);
}

void Team::release_edges() {
    pls::cs::Object::release_edges();
    pls::cs::release_value(apdat_);
    pls::cs::release_value(udat_);
    pls::cs::release_value(players_);
    pls::cs::release_value(fPos_);
    pls::cs::release_value(CORRECT_LINE);
    pls::cs::release_value(NOW_LINE);
    pls::cs::release_value(team_policyEva);
    pls::cs::release_value(team_eva);
    pls::cs::release_value(team_frect);
    pls::cs::release_value(frect_pos);
    pls::cs::release_value(frect_cpos);
    pls::cs::release_value(amefto_goalPos_);
    pls::cs::release_value(amefto_cameraPos_);
    pls::cs::release_value(amefto_address_);
    pls::cs::release_value(receiverPIdBox_);
    pls::cs::release_value(CEVA_PASSER_MP2);
    pls::cs::release_value(CEVA_PASSER_MP2_DIV);
    pls::cs::release_value(CEVA_PASSER_MP3);
    pls::cs::release_value(CEVA_PASSER_AP);
    pls::cs::release_value(CEVA_PASSER_ENEAP);
    pls::cs::release_value(coatEva_passer);
    pls::cs::release_value(coatEva_freeRun);
    pls::cs::release_value(coatEva_defence);
    pls::cs::release_value(coatEva_looseBall);
    pls::cs::release_value(coatEva_passer2);
    pls::cs::release_value(coatEva_freeRun2);
    pls::cs::release_value(coatEva_new_offence);
    pls::cs::release_value(coatEva_new_offence_passer);
    pls::cs::release_value(coatEva_new_deffence);
    pls::cs::release_value(ballNearPlayer_);
    pls::cs::release_value(players_receive_);
}

static pls::cs::Array<std::int32_t> Team_AMEFTO_FRECT_GOALZ_storage{};

static std::int32_t Team_AMEFTO_ONECHARGETIME_PLAYER_storage{};

static pls::cs::Array<std::int32_t> Team_AMEFTO_PASSER_COATEVA_storage{};

static pls::cs::Array<std::int32_t> Team_AMEFTO_PZ_storage{};

static pls::cs::Array<std::int32_t> Team_ch_ceva_storage{};

static pls::cs::Array<pls::cs::String> Team_CH_COATEVA_STR_storage{};

static pls::cs::Array<pls::cs::String> Team_CH_DATA_STR_storage{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> Team_DEAFULT_FORMATION_EVA_storage{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> Team_DEAFULT_FORMATION_EVA_PENALTYAREA_storage{};

static pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>
    Team_FORMATION_KICKOFF_storage{};

static std::int32_t Team_FORMATION_RATE_DEFFECNE_storage{};

static pls::cs::Array<std::int32_t> Team_FORMATION_TYPE_RATE_storage{};

static pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>> Team_GOAL_GLAD_AROUND_POS_storage{};

static pls::cs::Array<std::int32_t> Team_mostEva_address_storage{};

static pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>> Team_PANEL_DIRECT_storage{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> Team_PANEL_DIRECT_1_storage{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> Team_PANEL_DIRECT_2_storage{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> Team_PANEL_DIRECT_3_storage{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> Team_PANEL_DIRECT_4_storage{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> Team_PANEL_DIRECT_5_storage{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> Team_PANEL_DIRECT_6_storage{};

static pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>> Team_PANEL_DIRECT_R_storage{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> Team_PANEL_DIRECT_R_1_storage{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> Team_PANEL_DIRECT_R_2_storage{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> Team_PANEL_DIRECT_R_3_storage{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> Team_PANEL_DIRECT_R_4_storage{};

static pls::cs::Array<pls::cs::Array<std::int32_t>> Team_PANEL_DIRECT_R_9BLOCK_storage{};

static float Team_PRP_W_DIS_storage{};

static float Team_RPP_W_AROUNDENEMY_storage{};

static float Team_RPP_W_COATEVASUM_storage{};

static float Team_RPP_W_DISTOGOAL_NORMAL_storage{};

static float Team_RPP_W_DISTOGOAL_PAREA_storage{};

static pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> Team_team_formationCenterPos_storage{};

void Team::ensure_initialized() {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(Team_AMEFTO_FRECT_GOALZ_storage, visitor);
        pls::cs::trace_value(Team_AMEFTO_ONECHARGETIME_PLAYER_storage, visitor);
        pls::cs::trace_value(Team_AMEFTO_PASSER_COATEVA_storage, visitor);
        pls::cs::trace_value(Team_AMEFTO_PZ_storage, visitor);
        pls::cs::trace_value(Team_ch_ceva_storage, visitor);
        pls::cs::trace_value(Team_CH_COATEVA_STR_storage, visitor);
        pls::cs::trace_value(Team_CH_DATA_STR_storage, visitor);
        pls::cs::trace_value(Team_DEAFULT_FORMATION_EVA_storage, visitor);
        pls::cs::trace_value(Team_DEAFULT_FORMATION_EVA_PENALTYAREA_storage, visitor);
        pls::cs::trace_value(Team_FORMATION_KICKOFF_storage, visitor);
        pls::cs::trace_value(Team_FORMATION_RATE_DEFFECNE_storage, visitor);
        pls::cs::trace_value(Team_FORMATION_TYPE_RATE_storage, visitor);
        pls::cs::trace_value(Team_GOAL_GLAD_AROUND_POS_storage, visitor);
        pls::cs::trace_value(Team_mostEva_address_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_1_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_2_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_3_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_4_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_5_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_6_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_R_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_R_1_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_R_2_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_R_3_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_R_4_storage, visitor);
        pls::cs::trace_value(Team_PANEL_DIRECT_R_9BLOCK_storage, visitor);
        pls::cs::trace_value(Team_PRP_W_DIS_storage, visitor);
        pls::cs::trace_value(Team_RPP_W_AROUNDENEMY_storage, visitor);
        pls::cs::trace_value(Team_RPP_W_COATEVASUM_storage, visitor);
        pls::cs::trace_value(Team_RPP_W_DISTOGOAL_NORMAL_storage, visitor);
        pls::cs::trace_value(Team_RPP_W_DISTOGOAL_PAREA_storage, visitor);
        pls::cs::trace_value(Team_team_formationCenterPos_storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("game.Team", []() {
        Team_FORMATION_KICKOFF_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.FORMATION_KICKOFF", [&]() {
                return pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>::from(
                    {generated::kairo::unity::m3d4::util3d::Vector3D::create(static_cast<float>(-30.0f), 0.0f,
                                                                             static_cast<float>(-20.0f)),
                     generated::kairo::unity::m3d4::util3d::Vector3D::create(static_cast<float>(-5.0f), 0.0f,
                                                                             static_cast<float>(-30.0f))});
            });
        Team_AMEFTO_ONECHARGETIME_PLAYER_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.AMEFTO_ONECHARGETIME_PLAYER", [&]() { return 40; });
        Team_AMEFTO_PZ_storage = pls::cs::evaluate_type_initializer_field("F:game.Team.AMEFTO_PZ", [&]() {
            return pls::assets::baked_array<std::int32_t>(
                "b638ee62493160d4d2426e250eb82c06c2513ead3e798e33f0a1f3b7d506fe77");
        });
        Team_AMEFTO_PASSER_COATEVA_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.AMEFTO_PASSER_COATEVA", [&]() {
                return pls::assets::baked_array<std::int32_t>(
                    "423b032211237979c4b8d216f115b2bafb47e24079da815d1f817990501910e7");
            });
        Team_AMEFTO_FRECT_GOALZ_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.AMEFTO_FRECT_GOALZ", [&]() {
                return pls::assets::baked_array<std::int32_t>(
                    "ad57282dcb2db69a48b86ca8eece0a3ffb6b1198964ac6ce4141f023bf1adab6");
            });
        Team_PANEL_DIRECT_1_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_1", [&]() {
                return pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                    {pls::cs::Array<std::int32_t>::make(2)});
            });
        Team_PANEL_DIRECT_2_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_2", [&]() {
                return pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                    {pls::assets::baked_array<std::int32_t>(
                         "5fd533b6016ccfef31344f05917183a2bc9a48e739ab2c72d5a875ca90cbc7ef"),
                     pls::assets::baked_array<std::int32_t>(
                         "026539e1bea6a9ba99fb4971ffe3330e21b8228da7ec6da6ca7943c6b2c4db81"),
                     pls::assets::baked_array<std::int32_t>(
                         "9a77eab84e2a0e5b7ecc0367a71e3a6c3a8c2e9e7c96cad76913bfe7bf449bfb"),
                     pls::assets::baked_array<std::int32_t>(
                         "5144c14ab6590fe46a07fbcca00514867bce21ec3a89bd0c3ae447eeaf040f0a")});
            });
        Team_PANEL_DIRECT_3_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_3", [&]() {
                return pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                    {pls::assets::baked_array<std::int32_t>(
                         "331fcfac5b1747ae999369a5539a1beac63920f721fabd568d10e68254263174"),
                     pls::assets::baked_array<std::int32_t>(
                         "41d0b0e07d3f655a501dc28ef99584bce077765c8f67a6c06e2175200441e468"),
                     pls::assets::baked_array<std::int32_t>(
                         "1eec84e5f1b454f4508e9aa53081a2fa9fd665300b6151c7f767e86e3f11d615"),
                     pls::assets::baked_array<std::int32_t>(
                         "daf5198bdcd9c6fb0ac8c7f36bb1dd368788c4ada06ea36ea891a8270b1f1153"),
                     pls::assets::baked_array<std::int32_t>(
                         "4f6109ffd6eadd8e0f2ddfc982db193f3eb497367459e572a20a2f06020de110"),
                     pls::assets::baked_array<std::int32_t>(
                         "728e98af39ab82dab5ebfb11c84d7d3f646596208e38c9e6ba775f808310d497"),
                     pls::assets::baked_array<std::int32_t>(
                         "8607465118872a5fd049bc342e491963edd15fca03705a3c3761af0a31b91788"),
                     pls::assets::baked_array<std::int32_t>(
                         "d1d0aa6faf4d80e4c08e7ff85988ec3839fc905a8d672e5a9a81d1db4dc98861")});
            });
        Team_PANEL_DIRECT_4_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_4", [&]() {
                return pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                    {pls::assets::baked_array<std::int32_t>(
                         "15b153f920703318ce11ddec1f1273e41ec80953265494236f5b0998e0247004"),
                     pls::assets::baked_array<std::int32_t>(
                         "f257fea1c7c8c24b264aeaf8e3e4826bbab4e4a2f579f97aa34bcb4414d8cbb8"),
                     pls::assets::baked_array<std::int32_t>(
                         "fe9c14c185915616f3d3c235edac4a4d6df799c0f246691bfdaf10ccfb67a494"),
                     pls::assets::baked_array<std::int32_t>(
                         "90c61110db9700f36e7c8ac678388e80171b13d80855bc98566cd1a378be04c8"),
                     pls::assets::baked_array<std::int32_t>(
                         "786abf99cf07c295d929e3a2cf7bb8ee60355d53aef1ccdbbdd1fb06fb8443fa"),
                     pls::assets::baked_array<std::int32_t>(
                         "9a6ccf67eda8e6de8bb0c55e0e414489e29c13431318c8c35af156a7b1b1183d"),
                     pls::assets::baked_array<std::int32_t>(
                         "970e87b469f4b807b120061c8df5f2e7b2106ae43dae610c8dc90078a33022bd"),
                     pls::assets::baked_array<std::int32_t>(
                         "ec3e97b4d422e2b6e8b786a645723bfa48d8584e4fe6b92e64a32a25cc5e84dd"),
                     pls::assets::baked_array<std::int32_t>(
                         "add01bfd837693dda437550def1ad4845a021f91e0f5a891a121371bb24ed2d7"),
                     pls::assets::baked_array<std::int32_t>(
                         "1046aa44f055d839200f6728c4ce93e6a60fb45d06ccba6e7c5d93ca1ff8cf92"),
                     pls::assets::baked_array<std::int32_t>(
                         "a67370b57c7cfaf6e3d9d4e2b2df94dc7ad9c874f744777fdeaacf4cef471a36"),
                     pls::assets::baked_array<std::int32_t>(
                         "60b5d6af0bffe1498a922b10cee71765f1b1628a747d71833d3c9c7a54898d98")});
            });
        Team_PANEL_DIRECT_5_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_5", [&]() {
                return pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                    {pls::assets::baked_array<std::int32_t>(
                         "a6adeb6a7d0772373e31e4aed220c3283fee0a53a7524a430ce79e0dbc8d0799"),
                     pls::assets::baked_array<std::int32_t>(
                         "c0850aee062f8d0f4d7256d83c3e89f5975c88e0974b4b7aa9f0acba69fd88bc"),
                     pls::assets::baked_array<std::int32_t>(
                         "e03447e5be660bc631f1ac3b1b086954532da7c04b3e59550e35504ad02fec45"),
                     pls::assets::baked_array<std::int32_t>(
                         "6ec60a5fac7e2ffbc54a0ea52635819bf1248581bcc47772daf7b56176ddc66a"),
                     pls::assets::baked_array<std::int32_t>(
                         "4725ca26887289e5626181407baa3d2aded4acf5578fe841501e54944380083e"),
                     pls::assets::baked_array<std::int32_t>(
                         "cd01b7ab7f0e3b820f27c2e9ef2416997d6ad05539901bdfa51f8742b188c600"),
                     pls::assets::baked_array<std::int32_t>(
                         "bee662c666a9601b2476682060b1a6bc8545e3eb191af069abc17331e5aeede2"),
                     pls::assets::baked_array<std::int32_t>(
                         "5a43059061dfb926db64cb9890efc97318e740be8ae7ee7ad068bd90ee5017a0"),
                     pls::assets::baked_array<std::int32_t>(
                         "a044a793b02e7fb4bf217f030b5227e30c3431301892d7a6e4e5986d573d3eac"),
                     pls::assets::baked_array<std::int32_t>(
                         "896e6964dbc9d0feb02d441da09d82f075b31ad78e10df26d1781f02fe4d4dc3"),
                     pls::assets::baked_array<std::int32_t>(
                         "1dedb9573f885425c48da34c81a1340d245e99ac5fd1f606b2a806ae02642f8b"),
                     pls::assets::baked_array<std::int32_t>(
                         "9709bc0e957ecbee68ac21e60e342518728ee50d578447078a1a5e4b99e4cb6e"),
                     pls::assets::baked_array<std::int32_t>(
                         "0d55502b1c7f7fcb78ad3f38cbe2b5063c009a17f688883271cc876dc4b243be"),
                     pls::assets::baked_array<std::int32_t>(
                         "1a8a99dc0839953624d160d491e816b0ba39311f26d8acd4385e6dfab84b333f"),
                     pls::assets::baked_array<std::int32_t>(
                         "e6d479572e1a81885e3105127ac86d608fb681b794e2947db00870485ed7493e"),
                     pls::assets::baked_array<std::int32_t>(
                         "ad629c746e9918071613eed3fdf0f3e5469db82c10c08a66e47426218c81e054")});
            });
        Team_PANEL_DIRECT_6_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_6", [&]() {
                return pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                    {pls::assets::baked_array<std::int32_t>(
                         "a936ef6044689bccc2584c5f801af740ec2d5082e0bb07768a9e78e0b6240e12"),
                     pls::assets::baked_array<std::int32_t>(
                         "ccb50b1346212dda26fa30be9fbb5061115905416c421e4fcf4cee344168cb3c"),
                     pls::assets::baked_array<std::int32_t>(
                         "ea4b6a211601a8c43fd40268b8dbcd6309236d01dc7a4d5165241c27d6a708b9"),
                     pls::assets::baked_array<std::int32_t>(
                         "a381db6b43b7f9502a438a460198e2a659af51e4512cfa592f4b29c3af3074fd"),
                     pls::assets::baked_array<std::int32_t>(
                         "e3fd2e9ff15a2ecbb1b9da7aee02c2df0440336020ee9b87c35d9aa638f48d1e"),
                     pls::assets::baked_array<std::int32_t>(
                         "22b37d8ea8287117ef3d2014de9f3bdeb14eacebb3f574314446487610a37923"),
                     pls::assets::baked_array<std::int32_t>(
                         "078ed30c1731b0427d3796a67c1571abd2880cbc65762dd84811482ecdb77e87"),
                     pls::assets::baked_array<std::int32_t>(
                         "c9f45cd7e9bf22f04067ca45afb5978e732f6e72017c376c041861c7ceea7f31"),
                     pls::assets::baked_array<std::int32_t>(
                         "9cdba814ad59fee147961d5304132f6bccd0b91eb5681a8952d57f33269e503d"),
                     pls::assets::baked_array<std::int32_t>(
                         "c64ebb27457d424e97fb67c41cc456e1721c6ca3aad30a5e57c88df8f32989e1"),
                     pls::assets::baked_array<std::int32_t>(
                         "878e70f07bbee642a537476847a3e8ee2230158cbd89d0eb88ae5502e17fd428"),
                     pls::assets::baked_array<std::int32_t>(
                         "36b9fab15eaa35758c70fdb1017128489171100378cecbcab59a815f3fa5e2b9"),
                     pls::assets::baked_array<std::int32_t>(
                         "88d9699307a07705c02cf1688f85906ece323a4e50455956a5ee8dd9ce07015a"),
                     pls::assets::baked_array<std::int32_t>(
                         "472967b45b6bdb8d7eeb8224aa5697c67ae98a9249ad37c08ad1f99425604d40"),
                     pls::assets::baked_array<std::int32_t>(
                         "b194b9334a011d86f8cceb1053f30d54bde998b4bd74b5b425c742efe82917b5"),
                     pls::assets::baked_array<std::int32_t>(
                         "3d94530432ebac71b2a50bf437c383088b7d2d827619b86545d5716bd2c158c1"),
                     pls::assets::baked_array<std::int32_t>(
                         "7b189fc70e4a86c9f21891444238704ae7f331218212944fedc5a6c969d56ae9"),
                     pls::assets::baked_array<std::int32_t>(
                         "abadd8341e052ea344ca8c4e9ba1a6c7794b27b6b73494c72c53272c02140a63"),
                     pls::assets::baked_array<std::int32_t>(
                         "0f0a447bee049b91b4fdfe09b7ae2c08235ee45ee408ceb3003a30d57776fc6f"),
                     pls::assets::baked_array<std::int32_t>(
                         "d0d65ceb0ec6f8d40db7dd92904031157fb3cb5b30cbfdd5362c0e2f5c7eef4a")});
            });
        Team_PANEL_DIRECT_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT", [&]() {
                return pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>::from(
                    {Team::PANEL_DIRECT_1(), Team::PANEL_DIRECT_2(), Team::PANEL_DIRECT_3(),
                     Team::PANEL_DIRECT_4(), Team::PANEL_DIRECT_5(), Team::PANEL_DIRECT_6()});
            });
        Team_PANEL_DIRECT_R_1_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_R_1", [&]() {
                return pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                    {pls::cs::Array<std::int32_t>::make(2)});
            });
        Team_PANEL_DIRECT_R_2_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_R_2", [&]() {
                return pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                    {pls::assets::baked_array<std::int32_t>(
                         "9ba457a6ef14f42d2ffe7b310049086d8ca7386a37c6cf6e4a1df7699dee6187"),
                     pls::assets::baked_array<std::int32_t>(
                         "a2d8254d0a676a6432f2be6c7c8766f0e1c2a99f59ee32d7dcb5471c6e54c17b"),
                     pls::assets::baked_array<std::int32_t>(
                         "e18109b635a0ab5869a188f30b294610f6c8f3f3a70fa7c2dd7e3934ad3277d8"),
                     pls::assets::baked_array<std::int32_t>(
                         "4ea8dc9a2a4cbb785682d0842249bc2a0b775a7d9de57783b17b260a6e7d0add"),
                     pls::assets::baked_array<std::int32_t>(
                         "b7469cec9c3bb42e2fd393e23806332dd7ebeb624fde9bd99571ae6fb626326a"),
                     pls::assets::baked_array<std::int32_t>(
                         "b6a8196a575dc66b510af5785e34149c03416905633aa1b5e1dd8deede0e35a3"),
                     pls::assets::baked_array<std::int32_t>(
                         "53b48a0d8b45cbb7bb55b8c1d701cdf5accafffca1b3f200184587fd224b1eb1"),
                     pls::assets::baked_array<std::int32_t>(
                         "c90e017767cbce6df5e5cf9c81507089203f5001b058a1f05badf70abcc24c97")});
            });
        Team_PANEL_DIRECT_R_3_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_R_3", [&]() {
                return pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                    {pls::assets::baked_array<std::int32_t>(
                         "ae3c6517105750e012eb226a40dc8b8e67fbc7a65b798be0cbcb06ce27df2583"),
                     pls::assets::baked_array<std::int32_t>(
                         "056bcf2319229572595f109277cbc622fec8d4402ed7dfd868e7d37af9f6ad29"),
                     pls::assets::baked_array<std::int32_t>(
                         "ac6d61ed199de26eeac0ea60d187dacb2395832c7e33c1c77dbba88fd64580c9"),
                     pls::assets::baked_array<std::int32_t>(
                         "b022085301c00dba34f45bcd22497b16773a3d7f4ae2d6b60bbf86f5a940fcbd"),
                     pls::assets::baked_array<std::int32_t>(
                         "5953f1b29e3e1939c790b5c32752d62b519655aac78b5828ef7482c7cf6860ab"),
                     pls::assets::baked_array<std::int32_t>(
                         "6bd84c70b545b69c12e6ef156fa9d2163f42ee78414799c285ef2184847b1dd7"),
                     pls::assets::baked_array<std::int32_t>(
                         "c1929404994155c8add349ec21ade14956478d3a8b9b2dd45393444f9e8e44bf"),
                     pls::assets::baked_array<std::int32_t>(
                         "c16373c863e2d6c02f7e53ce53040599778615cc82be3531f052f5a47fb56e87"),
                     pls::assets::baked_array<std::int32_t>(
                         "d70ffde1b6c8f250af8667f33cac384fa13dd92af107f5085f714cd9b6640168"),
                     pls::assets::baked_array<std::int32_t>(
                         "2561bc909f7faa8231dc3b40f16ccbe468be317df8cf47437602838392e395c0"),
                     pls::assets::baked_array<std::int32_t>(
                         "7845f35d5a0a598551a3f995b81873b2800f930108aaed4f3d7750aeac79e234"),
                     pls::assets::baked_array<std::int32_t>(
                         "d6cebd5ed2056e6fc0d69dfa19e55349e7401e840f9c353c2bad8fe30af82356"),
                     pls::assets::baked_array<std::int32_t>(
                         "0b30215e3156603d7b1d841d450122f786e62bb683bd91d777178d8bde8b9a31"),
                     pls::assets::baked_array<std::int32_t>(
                         "90a2d4e41f2721ba1008b5fa5432feefba2e617238066ec56306b696c575f2db"),
                     pls::assets::baked_array<std::int32_t>(
                         "4f48b70749520e4d5fb1c594f90a2effa7d562d27defab78a37f65b2d6fafe17"),
                     pls::assets::baked_array<std::int32_t>(
                         "4cd125e4d09d9d3af4e8678b3c93a129e0a69d0621fcde6876ff3232dbd05c59")});
            });
        Team_PANEL_DIRECT_R_4_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_R_4", [&]() {
                return pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                    {pls::assets::baked_array<std::int32_t>(
                         "c99897d52ea8ad4cd5eb9beabc514e7f94023a02726d740526061285cf676a1a"),
                     pls::assets::baked_array<std::int32_t>(
                         "72e98d6cc2503dd3d83822b75ee9569e906ba7e2db8c971db4a229ad8ef61ee9"),
                     pls::assets::baked_array<std::int32_t>(
                         "d893f268d94167867605b9700115d23026a81da17ec1fcb66b50168fb2be8936"),
                     pls::assets::baked_array<std::int32_t>(
                         "2ec25a335202e8291d903a1d0e2edc743bb60149ec9017678b60f56071b8c49b"),
                     pls::assets::baked_array<std::int32_t>(
                         "2c443a8b4b4397f797edde402be61a93b6c8a2e127e16beb693fd607c0da8c97"),
                     pls::assets::baked_array<std::int32_t>(
                         "589ed654df6648be9f65b7ac922571d783ac70829159e2d836fae39ecec50a25"),
                     pls::assets::baked_array<std::int32_t>(
                         "0a1631daf85c5445af26c4364f72067c728c84bc7e6c40b59191424e7992e0af"),
                     pls::assets::baked_array<std::int32_t>(
                         "37ac0e57cdf452bffcad5e706c73f4b5695ae24cf50293788abbe67c91554ae6"),
                     pls::assets::baked_array<std::int32_t>(
                         "79e990952fc7391923c0d7d3683f4d17e7aa4942c5a47a8aa057bcead54ce5b6"),
                     pls::assets::baked_array<std::int32_t>(
                         "76a818157ec1e9bcc14972068c476508deb5c6570e74368f08abc16582a95d67"),
                     pls::assets::baked_array<std::int32_t>(
                         "77426c14f301cf41de3830dbd315ce2112889241823af7fba59bafa53f01b799"),
                     pls::assets::baked_array<std::int32_t>(
                         "3c7ab2530802f61f11b186cf631b1963a0b0801dc872f3b0752932b1b25f655d"),
                     pls::assets::baked_array<std::int32_t>(
                         "0a2eab20f976f7022a52760ae78795db3c45a14ea1c09b5e11bd4bae14588c28"),
                     pls::assets::baked_array<std::int32_t>(
                         "3f6cbc3026bad3adbdbd0f5b927a974491a2ea1def9762693b776d2213bc3f6a"),
                     pls::assets::baked_array<std::int32_t>(
                         "3ba0e9077913d31f55dde90dd57b73a9564d14c104af10daa1653b46bd212df1"),
                     pls::assets::baked_array<std::int32_t>(
                         "66c3a7b5ed16536f12dc95bd3ac2b392c13b376d41c966095c211a3d6709ba05"),
                     pls::assets::baked_array<std::int32_t>(
                         "6ceb7ba09603e9aab6fd47a116be69467a95f72e25c2e7450809aaee59d058b4"),
                     pls::assets::baked_array<std::int32_t>(
                         "17ba50180f489c7b22231b1c4317b25a1276709e97c7e17eb431e9171e4d44c6"),
                     pls::assets::baked_array<std::int32_t>(
                         "c030e692f7868400e94659dfa3f33d47083f5575570e330ce24bdd8af1092d0e"),
                     pls::assets::baked_array<std::int32_t>(
                         "5cb172b33ae2f3c4fcdc29daba4e31ea56b6bc30ace7be1c6a77ba6f2cf3c557"),
                     pls::assets::baked_array<std::int32_t>(
                         "79f28ee875068ba3b770dd60a566f27c1b26a7cd5b4ea035d7d41945ff2a45f4"),
                     pls::assets::baked_array<std::int32_t>(
                         "772ab668c1465bb0a4574c1c6033fbcdb8066d110b07507251e33b475f125ed1"),
                     pls::assets::baked_array<std::int32_t>(
                         "cbafce87b941e2fd763f3014d033571fcd06d524c34c89a4d3de890773e88fe2"),
                     pls::assets::baked_array<std::int32_t>(
                         "511481bf60325703268b51a2b4f2a65f1397f8c2bf598e44887a6b598b32c824")});
            });
        Team_PANEL_DIRECT_R_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_R", [&]() {
                return pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>::from(
                    {Team::PANEL_DIRECT_R_1(), Team::PANEL_DIRECT_R_2(), Team::PANEL_DIRECT_R_3(),
                     Team::PANEL_DIRECT_R_4()});
            });
        Team_PANEL_DIRECT_R_9BLOCK_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PANEL_DIRECT_R_9BLOCK", [&]() {
                return pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                    {pls::assets::baked_array<std::int32_t>(
                         "a8b35c23becb3aeb22210f5ed487874aff468e1ebdca323a84176356ac64c789"),
                     pls::assets::baked_array<std::int32_t>(
                         "4e7547c0f902607f1a8ac696daeaf224a11c3031d995d13ceb7069b722dc3dca"),
                     pls::assets::baked_array<std::int32_t>(
                         "879009862bdb7c0e07004116abf35d0d42da2e4a445c310a5909c248f004f4c2"),
                     pls::assets::baked_array<std::int32_t>(
                         "95ca8c82b2919ff5e8a10ec8861566c0861e77fbe2239485de433a49be4884b8"),
                     pls::cs::Array<std::int32_t>::make(2),
                     pls::assets::baked_array<std::int32_t>(
                         "eca7424e979f87c9b16bdf1ce30967f4e63abb2b259e4a97acc2fc31ede48dcc"),
                     pls::assets::baked_array<std::int32_t>(
                         "16b7b7d47e670d9ce3dad03dcf45e5e46c727f79af092f10219632a607a7c06d"),
                     pls::assets::baked_array<std::int32_t>(
                         "1e085b1c941d946824abb252e1cbe41131b6287a3f724d1917f2c3fa49e00a3c"),
                     pls::assets::baked_array<std::int32_t>(
                         "e13e968313097089d7370c56db870bf1e2f5f5e067aaa5dffa1cfb300dee50f3")});
            });
        Team_FORMATION_TYPE_RATE_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.FORMATION_TYPE_RATE", [&]() {
                return pls::assets::baked_array<std::int32_t>(
                    "92900c2d2a21fe10df838efc8cb4c0c6aac736f2bb0f7194d5064dcf83703d86");
            });
        Team_FORMATION_RATE_DEFFECNE_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.FORMATION_RATE_DEFFECNE", [&]() { return -70; });
        Team_CH_COATEVA_STR_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.CH_COATEVA_STR", [&]() { return pls::cs::Array<pls::cs::String>::make(0); });
        Team_ch_ceva_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.ch_ceva", [&]() { return pls::cs::Array<std::int32_t>::make(12); });
        Team_CH_DATA_STR_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.CH_DATA_STR", [&]() { return pls::cs::Array<pls::cs::String>::make(0); });
        Team_mostEva_address_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.mostEva_address", [&]() { return pls::cs::Array<std::int32_t>::make(2); });
        Team_RPP_W_COATEVASUM_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.RPP_W_COATEVASUM", [&]() { return 0.5f; });
        Team_RPP_W_DISTOGOAL_NORMAL_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.RPP_W_DISTOGOAL_NORMAL", [&]() { return 0.6f; });
        Team_RPP_W_DISTOGOAL_PAREA_storage = pls::cs::evaluate_type_initializer_field(
            "F:game.Team.RPP_W_DISTOGOAL_PAREA", [&]() { return 3.0f; });
        Team_RPP_W_AROUNDENEMY_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.RPP_W_AROUNDENEMY", [&]() { return 0.6f; });
        Team_PRP_W_DIS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.PRP_W_DIS", [&]() { return 1.4f; });
        Team_team_formationCenterPos_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.team_formationCenterPos", [&]() {
                return generated::kairo::unity::m3d4::util3d::Vector3D::create();
            });
        Team_GOAL_GLAD_AROUND_POS_storage =
            pls::cs::evaluate_type_initializer_field("F:game.Team.GOAL_GLAD_AROUND_POS", [&]() {
                return pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>::from(
                    {pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                         {pls::assets::baked_array<std::int32_t>(
                              "230134a72e0fbc8aea90db683bde68c3ddd7c8cecc2d54879b8dadae49a56ffc"),
                          pls::assets::baked_array<std::int32_t>(
                              "0d4202f73c5ea755eb93c1e0f49a56ec1d3366fe165d6d00562464089d36ce24"),
                          pls::assets::baked_array<std::int32_t>(
                              "d042ed766e0b4e5f91fb3eecfd5f2a9dcda9963a10ad14f56e9b73f5815b2813"),
                          pls::assets::baked_array<std::int32_t>(
                              "4ffe8cbc56a14403c002a162a6b901f42051ad1b1ff0ac51bb2254dbf290890d"),
                          pls::assets::baked_array<std::int32_t>(
                              "3da5364dfc52f6de4f73833722d5aef2909368a5d65f2f29914304374e04c43b")}),
                     pls::cs::Array<pls::cs::Array<std::int32_t>>::from(
                         {pls::assets::baked_array<std::int32_t>(
                              "36896af661f35da7f445b85790612b67be45d437a7f370057cd01ed3a71f4637"),
                          pls::assets::baked_array<std::int32_t>(
                              "7fe547a38494041074a412acae77f69af5555da8582580c81c68471ae7b39079"),
                          pls::assets::baked_array<std::int32_t>(
                              "65b377a0c705a23ce5aa5e06b9d2fb0ea40ac4361ea92fb094927807cff70650"),
                          pls::assets::baked_array<std::int32_t>(
                              "a2d06f95bb672ec5fbce2215fe94383c591f0ea28ce06344127ffdc432c1fcfa"),
                          pls::assets::baked_array<std::int32_t>(
                              "84789919764a21388d8f5e4e69fd4eb9bc238e693530804960f45b614554b7a0")})});
            });
    });
}

pls::cs::Array<std::int32_t>& Team::AMEFTO_FRECT_GOALZ() {
    Team::ensure_initialized();
    return Team_AMEFTO_FRECT_GOALZ_storage;
}

std::int32_t& Team::AMEFTO_ONECHARGETIME_PLAYER() {
    Team::ensure_initialized();
    return Team_AMEFTO_ONECHARGETIME_PLAYER_storage;
}

pls::cs::Array<std::int32_t>& Team::AMEFTO_PASSER_COATEVA() {
    Team::ensure_initialized();
    return Team_AMEFTO_PASSER_COATEVA_storage;
}

pls::cs::Array<std::int32_t>& Team::AMEFTO_PZ() {
    Team::ensure_initialized();
    return Team_AMEFTO_PZ_storage;
}

pls::cs::Array<std::int32_t>& Team::ch_ceva() {
    Team::ensure_initialized();
    return Team_ch_ceva_storage;
}

pls::cs::Array<pls::cs::String>& Team::CH_COATEVA_STR() {
    Team::ensure_initialized();
    return Team_CH_COATEVA_STR_storage;
}

pls::cs::Array<pls::cs::String>& Team::CH_DATA_STR() {
    Team::ensure_initialized();
    return Team_CH_DATA_STR_storage;
}

pls::cs::Array<pls::cs::Array<std::int32_t>>& Team::DEAFULT_FORMATION_EVA() {
    Team::ensure_initialized();
    return Team_DEAFULT_FORMATION_EVA_storage;
}

pls::cs::Array<pls::cs::Array<std::int32_t>>& Team::DEAFULT_FORMATION_EVA_PENALTYAREA() {
    Team::ensure_initialized();
    return Team_DEAFULT_FORMATION_EVA_PENALTYAREA_storage;
}

pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>& Team::FORMATION_KICKOFF() {
    Team::ensure_initialized();
    return Team_FORMATION_KICKOFF_storage;
}

std::int32_t& Team::FORMATION_RATE_DEFFECNE() {
    Team::ensure_initialized();
    return Team_FORMATION_RATE_DEFFECNE_storage;
}

pls::cs::Array<std::int32_t>& Team::FORMATION_TYPE_RATE() {
    Team::ensure_initialized();
    return Team_FORMATION_TYPE_RATE_storage;
}

pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>& Team::GOAL_GLAD_AROUND_POS() {
    Team::ensure_initialized();
    return Team_GOAL_GLAD_AROUND_POS_storage;
}

pls::cs::Array<std::int32_t>& Team::mostEva_address() {
    Team::ensure_initialized();
    return Team_mostEva_address_storage;
}

pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>& Team::PANEL_DIRECT() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_storage;
}

pls::cs::Array<pls::cs::Array<std::int32_t>>& Team::PANEL_DIRECT_1() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_1_storage;
}

pls::cs::Array<pls::cs::Array<std::int32_t>>& Team::PANEL_DIRECT_2() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_2_storage;
}

pls::cs::Array<pls::cs::Array<std::int32_t>>& Team::PANEL_DIRECT_3() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_3_storage;
}

pls::cs::Array<pls::cs::Array<std::int32_t>>& Team::PANEL_DIRECT_4() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_4_storage;
}

pls::cs::Array<pls::cs::Array<std::int32_t>>& Team::PANEL_DIRECT_5() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_5_storage;
}

pls::cs::Array<pls::cs::Array<std::int32_t>>& Team::PANEL_DIRECT_6() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_6_storage;
}

pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>& Team::PANEL_DIRECT_R() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_R_storage;
}

pls::cs::Array<pls::cs::Array<std::int32_t>>& Team::PANEL_DIRECT_R_1() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_R_1_storage;
}

pls::cs::Array<pls::cs::Array<std::int32_t>>& Team::PANEL_DIRECT_R_2() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_R_2_storage;
}

pls::cs::Array<pls::cs::Array<std::int32_t>>& Team::PANEL_DIRECT_R_3() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_R_3_storage;
}

pls::cs::Array<pls::cs::Array<std::int32_t>>& Team::PANEL_DIRECT_R_4() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_R_4_storage;
}

pls::cs::Array<pls::cs::Array<std::int32_t>>& Team::PANEL_DIRECT_R_9BLOCK() {
    Team::ensure_initialized();
    return Team_PANEL_DIRECT_R_9BLOCK_storage;
}

float& Team::PRP_W_DIS() {
    Team::ensure_initialized();
    return Team_PRP_W_DIS_storage;
}

float& Team::RPP_W_AROUNDENEMY() {
    Team::ensure_initialized();
    return Team_RPP_W_AROUNDENEMY_storage;
}

float& Team::RPP_W_COATEVASUM() {
    Team::ensure_initialized();
    return Team_RPP_W_COATEVASUM_storage;
}

float& Team::RPP_W_DISTOGOAL_NORMAL() {
    Team::ensure_initialized();
    return Team_RPP_W_DISTOGOAL_NORMAL_storage;
}

float& Team::RPP_W_DISTOGOAL_PAREA() {
    Team::ensure_initialized();
    return Team_RPP_W_DISTOGOAL_PAREA_storage;
}

pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>& Team::team_formationCenterPos() {
    Team::ensure_initialized();
    return Team_team_formationCenterPos_storage;
}

void Team::create_init(pls::cs::Ref<Team> self) {
    self->CEVA_PASSER_MP2 =
        pls::assets::baked_array<float>("cb486e136a46c7f4a054496a91ea561422587b6f352d766a21ee4598437ca3c5");
    self->CEVA_PASSER_MP2_DIV =
        pls::assets::baked_array<float>("d145fd7253c59faad7cf92636fc230f5cd62c3ac8c3f0cbe2ebdd390dad6bc38");
    self->CEVA_PASSER_MP3 =
        pls::assets::baked_array<float>("b86ff9f1b096316cc90c60ce6b6ef3fe3935526087a21435353c083a672fa949");
    self->CEVA_PASSER_AP = pls::assets::baked_array<std::int32_t>(
        "fdc3ef37e1317cd37f796633c8ca08f9532d0cce18669a144789524f696a299f");
    self->CEVA_PASSER_ENEAP = pls::assets::baked_array<std::int32_t>(
        "2694fbddb72fe4ad6f85152d6ed30de989e8fa32ff040e4e1be46b21221cdad4");
    self->ballNearPlayer_ = generated::java::util::Vector::create();
    self->players_receive_ = generated::java::util::Vector::create();
    self->w_disBoal = 0.5f;
    self->w_formation = 0.5f;

    self->apdat_ = main::AppData::GetInstance();
    self->udat_ = UserData::GetInstance();
}

// M:game.Team.#ctor
pls::cs::Ref<Team> Team::create() {
    Team::ensure_initialized();
    auto self = pls::cs::make_ref<Team>();
    Team::create_init(self);
    return self;
}

// M:game.Team.Init(System.Boolean,System.Int32,System.Int32)
void Team::Init(bool isUserTeam, pls::cs::Int32 team_id, pls::cs::Int32 tDataId) {
    Team::ensure_initialized();

    team_id_ = team_id;
    tDataId_ = tDataId;
    pls::cs::Ref<data::TeamData> teamData = require(apdat_)->tData_.get_Item(tDataId);
    if (isUserTeam) {
        formationType_ = require(udat_)->selectFormationType_;
    } else {
        formationType_ = require(teamData)->formationType_;
    }
    fPos_ = pls::cs::Array<float>::make(4);
    Team::Init_coatEva();
    fPos_[0] = 0.0f;
    fPos_[1] = static_cast<float>(
        pls::cs::conv_i32(((static_cast<double>(-450.0f) +
                            static_cast<double>((static_cast<double>(900.0f) *
                                                 static_cast<double>(static_cast<float>(team_id))))))));
    fPos_[2] = 900.0f;
    fPos_[3] = 900.0f;
    pls::cs::Array<std::int32_t> array = pls::cs::Array<std::int32_t>::make(11);
    if (isUserTeam) {
        for (pls::cs::Int32 i = 0; i < (array).length(); ++i) {
            pls::cs::Ref<data::PlayerData> playerData = pls::cs::unbox<pls::cs::Ref<data::PlayerData>>(
                generated::java::util::Vector_2_ElementAt(require(require(udat_)->memberPDataist_), i));
            array[i] = require(playerData)->id_;
        }
    } else {
        for (pls::cs::Int32 j = 0; j < (array).length(); ++j) {
            pls::cs::Ref<data::PlayerData> playerData2 =
                require(udat_)->cpuPlayerDatas_.get_Item(team_id).get_Item(j);
            array[j] = require(playerData2)->id_;
        }
    }
    players_ = pls::cs::Array<pls::cs::Ref<Player>>::make(11);
    for (pls::cs::Int32 k = 0; k < (players_).length(); ++k) {
        {
            auto cs_target = players_;
            auto cs_index = k;
            auto cs_value = Player::create(0);
            cs_target.set_Item(cs_index, cs_value);
        }
        {
            auto cs_receiver = static_cast<pls::cs::Ref<Player>>(players_.get_Item(k));
            std::int32_t cs_arg0 = array[k];
            std::int32_t cs_arg1 = k;
            std::int32_t cs_arg2 = team_id_;
            std::int32_t cs_arg3 = tDataId;
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->Init(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
        }
    }
    for (pls::cs::Int32 l = 0; l < (players_).length(); ++l) {
        {
            auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
            pls::cs::Ref<Player> cs_arg0 = players_.get_Item(l);
            pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> cs_arg1 =
                require(players_.get_Item(l))->pos_;
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->SetPosFPos(cs_arg0, cs_arg1);
        }
        Team::SetFormationParam(players_.get_Item(l));
        if (team_id == 1) {
            require(players_.get_Item(l))->direct_ = 2;
        }
    }
    Team::SetFormationRectParam();
    CORRECT_LINE = pls::cs::Array<std::int32_t>::make(4);
    NOW_LINE = pls::cs::Array<std::int32_t>::make(4);
    team_policyEva = pls::cs::Array<std::int32_t>::make(4);
    team_eva = generated::java::util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
        pls::assets::baked_array<std::int32_t>(
            "6bc58bb0843caadfd49db5043a5ae4b731b139a15272eb22142bdf2c2317c0fe"));
    team_frect = generated::java::util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<float>>>(
        pls::assets::baked_array<std::int32_t>(
            "55adb322349394279005b78d685207ec21ea4a3dfa30cfb38179fccd01ccb330"));
    frect_pos = pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>::make(4);
    for (pls::cs::Int32 m = 0; m < (frect_pos).length(); ++m) {
        {
            auto cs_target = frect_pos;
            auto cs_index = m;
            auto cs_value = generated::kairo::unity::m3d4::util3d::Vector3D::create();
            cs_target.set_Item(cs_index, cs_value);
        }
        if ((m == 1) || (m == 2)) {
            require(frect_pos.get_Item(m))->x_ = 450.0f;
        } else {
            require(frect_pos.get_Item(m))->x_ = static_cast<float>(-450.0f);
        }
    }
    frect_cpos = generated::java::util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
        pls::assets::baked_array<std::int32_t>(
            "15cd0a23d71224e5bf6a4bfb4995df289d1eef229e9eede78f12a21a366626cf"));
    amefto_goalPos_ = pls::cs::Array<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>::make(2);
    for (pls::cs::Int32 n = 0; n < (amefto_goalPos_).length(); ++n) {
        {
            auto cs_target = amefto_goalPos_;
            auto cs_index = n;
            auto cs_value = generated::kairo::unity::m3d4::util3d::Vector3D::create();
            cs_target.set_Item(cs_index, cs_value);
        }
    }
    require(amefto_goalPos_.get_Item(0))->x_ = static_cast<float>(-450.0f);
    require(amefto_goalPos_.get_Item(1))->x_ = 450.0f;
    amefto_cameraPos_ = generated::java::util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
        pls::assets::baked_array<std::int32_t>(
            "00e6225fe7c3a740e806a673158540725de6105568402adc366c616e750edd03"));
    amefto_address_ = generated::java::util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
        pls::assets::baked_array<std::int32_t>(
            "a90f84dde44929f7f1c68bcd15ec74ee0f19536b9e1fea5dae089918066318a0"));
    receiverPIdBox_ = pls::cs::Array<std::int32_t>::make(5);
    if (isUserTeam) {
        amefto_pz = Team::AMEFTO_PZ()[0];
        amefto_oneChargeTime = Team::AMEFTO_ONECHARGETIME_PLAYER();
    } else {
        amefto_pz = require(teamData)->amefto_pz_;
        amefto_oneChargeTime =
            GameUtil::RateConvert(require(teamData)->warP_paramPhysical_[2], 0, 1000, 50, 10, true);
    }
    for (pls::cs::Int32 num = 0; num < (Team::ch_ceva()).length(); ++num) {
        Team::ch_ceva()[num] = 1;
    }
}

// M:game.Team.Update
void Team::Update() {
    Team::ensure_initialized();

    if (require(require(udat_)->gm_)->state_ == 0) {
        if (generated::java::util::Vector_2_Size(require(players_receive_)) > 0) {
            generated::java::util::Vector_2_RemoveAllElements(require(players_receive_));
        }
        Team::Amefto();
        Team::Update_formationRect2();
        Team::Update_coatEva();
        for (pls::cs::Int32 i = 0; i < (players_).length(); ++i) {
            ([&]() {
                auto cs_target = players_.get_Item(i);
                auto cs_value = ([&]() -> std::int32_t {
                    auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
                    pls::cs::Ref<Player> cs_arg0 = players_.get_Item(i);
                    std::int32_t cs_arg1 = require(players_.get_Item(i))->address_[0];
                    std::int32_t cs_arg2 = require(players_.get_Item(i))->address_[1];
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    return cs_receiver->Get_playerPosEva(cs_arg0, cs_arg1, cs_arg2);
                }());
                require(cs_target)->eva_pos_ = cs_value;
                return cs_value;
            }());
            ([&]() {
                auto cs_target = players_.get_Item(i);
                auto cs_value = ([&]() -> std::int32_t {
                    auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
                    pls::cs::Ref<Player> cs_arg0 = players_.get_Item(i);
                    std::int32_t cs_arg1 = require(players_.get_Item(i))->address_[0];
                    std::int32_t cs_arg2 = require(players_.get_Item(i))->address_[1];
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    return cs_receiver->Get_playerReceivePosEva(cs_arg0, cs_arg1, cs_arg2);
                }());
                require(cs_target)->eva_receivePos_ = cs_value;
                return cs_value;
            }());
            ([&]() {
                auto cs_target = players_.get_Item(i);
                auto cs_value = pls::cs::conv_i32(([&]() -> float {
                    pls::cs::Ref<Player> cs_arg0 = players_.get_Item(i);
                    float cs_arg1 = static_cast<float>(require(players_.get_Item(i))->eva_receivePos_);
                    std::int32_t cs_arg2 = 8;
                    return data::PlayerData::AuraUpdate(cs_arg0, cs_arg1, cs_arg2);
                }()));
                require(cs_target)->eva_receivePos_ = cs_value;
                return cs_value;
            }());
        }
        if (require(require(udat_)->gm_)->gameState_ == 2) {
            if (!(generated::kairo::unity::util::BitUtil::Check(require(require(udat_)->ball_)->flag_, 16))) {
                Team::SetSortGroundBallNear();
                pls::cs::Ref<Player> player = pls::cs::Ref<Player>{};
                if (((((!is_null(require(require(udat_)->ball_)->lastOwner_)) &&
                       ((require(require(require(udat_)->ball_)->lastOwner_)->team_id_ == team_id_)))) &&
                     ((require(require(udat_)->ball_)->targetPId != -1)))) {
                    player = (players_.get_Item(require(require(udat_)->ball_)->targetPId));
                } else {
                    player = ((pls::cs::unbox<pls::cs::Ref<Player>>(
                        generated::java::util::Vector_2_FirstElement(require(ballNearPlayer_)))));
                }
                for (pls::cs::Int32 num = pls::cs::sub_i32((receiverPIdBox_).length(), 1); num >= 1; --num) {
                    receiverPIdBox_[num] = receiverPIdBox_[(num - 1)];
                }
                receiverPIdBox_[0] = require(player)->p_id_;
                pls::cs::Int32 p_id_ = require(player)->p_id_;
                for (pls::cs::Int32 j = 1; (j < (receiverPIdBox_).length()); ++j) {
                    if ((p_id_ != receiverPIdBox_[j])) {
                        break;
                    }
                    if (j == pls::cs::sub_i32((receiverPIdBox_).length(), 1)) {
                        generated::java::util::Vector_2_AddElement(
                            require(players_receive_),
                            static_cast<pls::cs::Ref<pls::cs::Object>>(pls::cs::box(player)));
                    }
                }
            } else {
                Team::SetSortJampBallNear();
                pls::cs::Ref<Player> player2 = pls::cs::Ref<Player>{};
                if ((!is_null(require(require(udat_)->ball_)->lastOwner_) &&
                     (require(require(require(udat_)->ball_)->lastOwner_)->team_id_ == team_id_)) &&
                    (require(require(udat_)->ball_)->targetPId != -1)) {
                    player2 = players_.get_Item(require(require(udat_)->ball_)->targetPId);
                    generated::java::util::Vector_2_AddElement(
                        require(players_receive_),
                        static_cast<pls::cs::Ref<pls::cs::Object>>(pls::cs::box(player2)));
                } else {
                    player2 = pls::cs::unbox<pls::cs::Ref<Player>>(
                        generated::java::util::Vector_2_FirstElement(require(ballNearPlayer_)));
                    pls::cs::Int32 num2 = pls::cs::conv_i32(require(player2)->temp_len);
                    generated::java::util::Vector_2_AddElement(
                        require(players_receive_),
                        static_cast<pls::cs::Ref<pls::cs::Object>>(pls::cs::box(player2)));
                    for (pls::cs::Int32 k = 0;
                         k < generated::java::util::Vector_2_Size(require(ballNearPlayer_)); ++k) {
                        pls::cs::Ref<Player> player3 = pls::cs::unbox<pls::cs::Ref<Player>>(
                            generated::java::util::Vector_2_ElementAt(require(ballNearPlayer_), k));
                        if (static_cast<double>(require(player3)->temp_len) >
                            static_cast<double>(static_cast<float>(((num2 - 2))))) {
                            generated::java::util::Vector_2_AddElement(
                                require(players_receive_),
                                static_cast<pls::cs::Ref<pls::cs::Object>>(pls::cs::box(player3)));
                            if (generated::java::util::Vector_2_Size(require(players_receive_)) >= 3) {
                                break;
                            }
                        }
                    }
                }
            }
        } else if (require(require(udat_)->gm_)->gameState_ == team_id_) {

        } else if (require(require(udat_)->gm_)->gameState_ == pls::cs::sub_i32(1, team_id_)) {
        }
        for (pls::cs::Int32 l = 0; l < (players_).length(); ++l) {
            require(players_.get_Item(l))->Update();
        }
    } else if ((require(require(udat_)->gm_)->state_ == 2) || (require(require(udat_)->gm_)->state_ == 1)) {
        for (pls::cs::Int32 m = 0; m < (players_).length(); ++m) {
            require(players_.get_Item(m))->Update();
        }
    } else if (((require(require(udat_)->gm_)->state_ == 3) || (require(require(udat_)->gm_)->state_ == 4)) ||
               (require(require(udat_)->gm_)->state_ == 5)) {
        if (generated::java::util::Vector_2_Size(require(players_receive_)) > 0) {
            generated::java::util::Vector_2_RemoveAllElements(require(players_receive_));
        }
        Team::Update_coatEva();
        for (pls::cs::Int32 n = 0; n < (players_).length(); ++n) {
            ([&]() {
                auto cs_target = players_.get_Item(n);
                auto cs_value = ([&]() -> std::int32_t {
                    auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
                    pls::cs::Ref<Player> cs_arg0 = players_.get_Item(n);
                    std::int32_t cs_arg1 = require(players_.get_Item(n))->address_[0];
                    std::int32_t cs_arg2 = require(players_.get_Item(n))->address_[1];
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    return cs_receiver->Get_playerPosEva(cs_arg0, cs_arg1, cs_arg2);
                }());
                require(cs_target)->eva_pos_ = cs_value;
                return cs_value;
            }());
            ([&]() {
                auto cs_target = players_.get_Item(n);
                auto cs_value = ([&]() -> std::int32_t {
                    auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
                    pls::cs::Ref<Player> cs_arg0 = players_.get_Item(n);
                    std::int32_t cs_arg1 = require(players_.get_Item(n))->address_[0];
                    std::int32_t cs_arg2 = require(players_.get_Item(n))->address_[1];
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    return cs_receiver->Get_playerReceivePosEva(cs_arg0, cs_arg1, cs_arg2);
                }());
                require(cs_target)->eva_receivePos_ = cs_value;
                return cs_value;
            }());
        }
        Team::Amefto();
        Team::Update_formationRect2();
        for (pls::cs::Int32 num3 = 0; num3 < (players_).length(); ++num3) {
            require(players_.get_Item(num3))->Update();
        }
    } else if (require(require(udat_)->gm_)->state_ == 7) {

    } else if (require(require(udat_)->gm_)->state_ == 6) {

    } else if (require(require(udat_)->gm_)->state_ == 8) {
        for (pls::cs::Int32 num4 = 0; num4 < (players_).length(); ++num4) {
            require(players_.get_Item(num4))->Update();
        }
    }
}

// M:game.Team.Collision
void Team::Collision() {
    Team::ensure_initialized();

    if (require(require(udat_)->gm_)->state_ == 0) {
        for (pls::cs::Int32 i = 0; i < (players_).length(); ++i) {
            require(players_.get_Item(i))->Collision();
        }
    }
}

// M:game.Team.Draw(kairo.unity.ui.Graphics,System.Boolean)
void Team::Draw(pls::cs::Ref<pls::kairo::Graphics> g, bool offscreen) {
    Team::ensure_initialized();

    for (pls::cs::Int32 i = 0; i < (players_).length(); ++i) {
        require(players_.get_Item(i))->Draw(g, i);
    }
}

// M:game.Team.SetPosFPos(game.Player,kairo.unity.m3d4.util3d.Vector3D)
void Team::SetPosFPos(pls::cs::Ref<Player> player,
                      pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> var_out) {
    Team::ensure_initialized();

    pls::cs::Array<pls::cs::Array<std::int32_t>> formation_ =
        require(require(apdat_)->formationData_.get_Item(
                    require(require(udat_)->gm_)->team_formationPage_[require(player)->team_id_]))
            ->formation_;
    pls::cs::Int32 p_id_ = require(player)->p_id_;
    if (require(player)->team_id_ == 0) {
        ([&]() {
            auto cs_target = var_out;
            auto cs_value = static_cast<float>(([&]() -> float {
                float cs_arg0 = static_cast<float>(formation_.get_Item(p_id_)[0]);
                float cs_arg1 = 0.0f;
                float cs_arg2 = 8.0f;
                float cs_arg3 = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(([&]() -> double {
                        auto cs_left = static_cast<double>(fPos_[0]);
                        auto cs_right =
                            static_cast<double>((static_cast<double>(fPos_[2]) / static_cast<double>(2.0f)));
                        return (cs_left - cs_right);
                    }()));
                    auto cs_right = static_cast<double>(
                        (static_cast<double>((static_cast<double>(fPos_[2]) / static_cast<double>(9.0f))) /
                         static_cast<double>(2.0f)));
                    return (cs_left + cs_right);
                }()));
                float cs_arg4 = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(([&]() -> double {
                        auto cs_left = static_cast<double>(fPos_[0]);
                        auto cs_right =
                            static_cast<double>((static_cast<double>(fPos_[2]) / static_cast<double>(2.0f)));
                        return (cs_left + cs_right);
                    }()));
                    auto cs_right = static_cast<double>(
                        (static_cast<double>((static_cast<double>(fPos_[2]) / static_cast<double>(9.0f))) /
                         static_cast<double>(2.0f)));
                    return (cs_left - cs_right);
                }()));
                bool cs_arg5 = true;
                return GameUtil::RateConvert_3(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
            }()));
            require(cs_target)->x_ = cs_value;
            return cs_value;
        }());
        require(var_out)->y_ = 0.0f;
        ([&]() {
            auto cs_target = var_out;
            auto cs_value = static_cast<float>(([&]() -> float {
                float cs_arg0 = static_cast<float>(formation_.get_Item(p_id_)[1]);
                float cs_arg1 = 8.0f;
                float cs_arg2 = 0.0f;
                float cs_arg3 = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(([&]() -> double {
                        auto cs_left = static_cast<double>(fPos_[1]);
                        auto cs_right =
                            static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)));
                        return (cs_left - cs_right);
                    }()));
                    auto cs_right = static_cast<double>(
                        (static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(9.0f))) /
                         static_cast<double>(2.0f)));
                    return (cs_left + cs_right);
                }()));
                float cs_arg4 = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(([&]() -> double {
                        auto cs_left = static_cast<double>(fPos_[1]);
                        auto cs_right =
                            static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)));
                        return (cs_left + cs_right);
                    }()));
                    auto cs_right = static_cast<double>(
                        (static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(9.0f))) /
                         static_cast<double>(2.0f)));
                    return (cs_left - cs_right);
                }()));
                bool cs_arg5 = true;
                return GameUtil::RateConvert_3(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
            }()));
            require(cs_target)->z_ = cs_value;
            return cs_value;
        }());
    } else {
        ([&]() {
            auto cs_target = var_out;
            auto cs_value = static_cast<float>(([&]() -> float {
                float cs_arg0 = static_cast<float>(formation_.get_Item(p_id_)[0]);
                float cs_arg1 = 0.0f;
                float cs_arg2 = 8.0f;
                float cs_arg3 = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(([&]() -> double {
                        auto cs_left = static_cast<double>(fPos_[0]);
                        auto cs_right =
                            static_cast<double>((static_cast<double>(fPos_[2]) / static_cast<double>(2.0f)));
                        return (cs_left + cs_right);
                    }()));
                    auto cs_right = static_cast<double>(
                        (static_cast<double>((static_cast<double>(fPos_[2]) / static_cast<double>(9.0f))) /
                         static_cast<double>(2.0f)));
                    return (cs_left - cs_right);
                }()));
                float cs_arg4 = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(([&]() -> double {
                        auto cs_left = static_cast<double>(fPos_[0]);
                        auto cs_right =
                            static_cast<double>((static_cast<double>(fPos_[2]) / static_cast<double>(2.0f)));
                        return (cs_left - cs_right);
                    }()));
                    auto cs_right = static_cast<double>(
                        (static_cast<double>((static_cast<double>(fPos_[2]) / static_cast<double>(9.0f))) /
                         static_cast<double>(2.0f)));
                    return (cs_left + cs_right);
                }()));
                bool cs_arg5 = true;
                return GameUtil::RateConvert_3(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
            }()));
            require(cs_target)->x_ = cs_value;
            return cs_value;
        }());
        require(var_out)->y_ = 0.0f;
        ([&]() {
            auto cs_target = var_out;
            auto cs_value = static_cast<float>(([&]() -> float {
                float cs_arg0 = static_cast<float>(formation_.get_Item(p_id_)[1]);
                float cs_arg1 = 8.0f;
                float cs_arg2 = 0.0f;
                float cs_arg3 = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(([&]() -> double {
                        auto cs_left = static_cast<double>(fPos_[1]);
                        auto cs_right =
                            static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)));
                        return (cs_left + cs_right);
                    }()));
                    auto cs_right = static_cast<double>(
                        (static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(9.0f))) /
                         static_cast<double>(2.0f)));
                    return (cs_left - cs_right);
                }()));
                float cs_arg4 = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(([&]() -> double {
                        auto cs_left = static_cast<double>(fPos_[1]);
                        auto cs_right =
                            static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)));
                        return (cs_left - cs_right);
                    }()));
                    auto cs_right = static_cast<double>(
                        (static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(9.0f))) /
                         static_cast<double>(2.0f)));
                    return (cs_left + cs_right);
                }()));
                bool cs_arg5 = true;
                return GameUtil::RateConvert_3(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
            }()));
            require(cs_target)->z_ = cs_value;
            return cs_value;
        }());
    }
    if (require(player)->p_id_ == 0) {
        require(player)->role_ = 0;
    } else if (formation_.get_Item(p_id_)[1] <= 2) {
        require(player)->role_ = 3;
    } else if (formation_.get_Item(p_id_)[1] <= 5) {
        require(player)->role_ = 2;
    } else if (formation_.get_Item(p_id_)[1] <= 8) {
        require(player)->role_ = 1;
    }
    if (require(player)->pData_id_ > 0) {
        {
            auto cs_target = require(apdat_)->pData_.get_Item(require(player)->pData_id_);
            auto cs_value = require(player)->role_;
            require(cs_target)->role_ = cs_value;
        }
    }
}

// M:game.Team.SetFormationParam(game.Player)
void Team::SetFormationParam(pls::cs::Ref<Player> player) {
    Team::ensure_initialized();

    if (require(player)->team_id_ == 0) {
        ([&]() {
            auto cs_target = require(player)->formation_;
            auto cs_index = 0;
            auto cs_value = pls::cs::conv_i32(([&]() -> float {
                float cs_arg0 = require(require(player)->pos_)->x_;
                float cs_arg1 = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(fPos_[0]);
                    auto cs_right =
                        static_cast<double>((static_cast<double>(fPos_[2]) / static_cast<double>(2.0f)));
                    return (cs_left - cs_right);
                }()));
                float cs_arg2 = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(fPos_[0]);
                    auto cs_right =
                        static_cast<double>((static_cast<double>(fPos_[2]) / static_cast<double>(2.0f)));
                    return (cs_left + cs_right);
                }()));
                float cs_arg3 = 0.0f;
                float cs_arg4 = 100.0f;
                bool cs_arg5 = true;
                return GameUtil::RateConvert_3(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
            }()));
            cs_target.set_Item(cs_index, cs_value);
            return cs_value;
        }());
        ([&]() {
            auto cs_target = require(player)->formation_;
            auto cs_index = 1;
            auto cs_value = pls::cs::conv_i32(([&]() -> float {
                float cs_arg0 = require(require(player)->pos_)->z_;
                float cs_arg1 = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(fPos_[1]);
                    auto cs_right =
                        static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)));
                    return (cs_left - cs_right);
                }()));
                float cs_arg2 = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(fPos_[1]);
                    auto cs_right =
                        static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)));
                    return (cs_left + cs_right);
                }()));
                float cs_arg3 = 0.0f;
                float cs_arg4 = 100.0f;
                bool cs_arg5 = true;
                return GameUtil::RateConvert_3(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
            }()));
            cs_target.set_Item(cs_index, cs_value);
            return cs_value;
        }());
    } else {
        ([&]() {
            auto cs_target = require(player)->formation_;
            auto cs_index = 0;
            auto cs_value = pls::cs::conv_i32(([&]() -> float {
                float cs_arg0 = require(require(player)->pos_)->x_;
                float cs_arg1 = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(fPos_[0]);
                    auto cs_right =
                        static_cast<double>((static_cast<double>(fPos_[2]) / static_cast<double>(2.0f)));
                    return (cs_left + cs_right);
                }()));
                float cs_arg2 = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(fPos_[0]);
                    auto cs_right =
                        static_cast<double>((static_cast<double>(fPos_[2]) / static_cast<double>(2.0f)));
                    return (cs_left - cs_right);
                }()));
                float cs_arg3 = 0.0f;
                float cs_arg4 = 100.0f;
                bool cs_arg5 = true;
                return GameUtil::RateConvert_3(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
            }()));
            cs_target.set_Item(cs_index, cs_value);
            return cs_value;
        }());
        ([&]() {
            auto cs_target = require(player)->formation_;
            auto cs_index = 1;
            auto cs_value = pls::cs::conv_i32(([&]() -> float {
                float cs_arg0 = require(require(player)->pos_)->z_;
                float cs_arg1 = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(fPos_[1]);
                    auto cs_right =
                        static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)));
                    return (cs_left + cs_right);
                }()));
                float cs_arg2 = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(fPos_[1]);
                    auto cs_right =
                        static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)));
                    return (cs_left - cs_right);
                }()));
                float cs_arg3 = 0.0f;
                float cs_arg4 = 100.0f;
                bool cs_arg5 = true;
                return GameUtil::RateConvert_3(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
            }()));
            cs_target.set_Item(cs_index, cs_value);
            return cs_value;
        }());
    }
}

// M:game.Team.SetFormationRectParam
void Team::SetFormationRectParam() {
    Team::ensure_initialized();

    pls::cs::Int32 num = 0;
    pls::cs::Int32 num2 = 0;
    pls::cs::Int32 num3 = 0;
    pls::cs::Int32 num4 = 0;
    pls::cs::Int32 num5 = 3;
    pls::cs::Int32 num6 = 10;
    for (pls::cs::Int32 i = 0; i < (players_).length(); ++i) {
        pls::cs::Ref<Player> player = players_.get_Item(i);
        num = pls::cs::sub_i32(100, require(player)->formation_[1]);
        for (pls::cs::Int32 j = 0; j < (players_).length(); ++j) {
            if (j == i) {
                continue;
            }
            pls::cs::Ref<Player> player2 = players_.get_Item(j);
            pls::cs::Int32 num7 = ([&]() -> std::int32_t {
                auto cs_left = require(player2)->formation_[1];
                auto cs_right = require(player)->formation_[1];
                return pls::cs::sub_i32(cs_left, cs_right);
            }());
            if ((num > num7) && (num7 > num5)) {
                num = num7;
            }
        }
        if (num != pls::cs::sub_i32(100, require(player)->formation_[1])) {
            num /= 2;
        }
        num2 = pls::cs::add_i32(0, require(player)->formation_[1]);
        for (pls::cs::Int32 k = 0; k < (players_).length(); ++k) {
            if (k == i) {
                continue;
            }
            pls::cs::Ref<Player> player3 = players_.get_Item(k);
            pls::cs::Int32 num8 = ([&]() -> std::int32_t {
                auto cs_left = require(player)->formation_[1];
                auto cs_right = require(player3)->formation_[1];
                return pls::cs::sub_i32(cs_left, cs_right);
            }());
            if ((num2 > num8) && (num8 > num5)) {
                num2 = num8;
            }
        }
        if (num2 != pls::cs::add_i32(0, require(player)->formation_[1])) {
            num2 /= 2;
        }
        num3 = pls::cs::add_i32(0, require(player)->formation_[0]);
        for (pls::cs::Int32 l = 0; l < (players_).length(); ++l) {
            if (l == i) {
                continue;
            }
            pls::cs::Ref<Player> player4 = players_.get_Item(l);
            pls::cs::Int32 num9 = ([&]() -> std::int32_t {
                auto cs_left = require(player)->formation_[0];
                auto cs_right = require(player4)->formation_[0];
                return pls::cs::sub_i32(cs_left, cs_right);
            }());
            if (((num3 > num9) && (num9 > num5)) &&
                (generated::java::lang::JMath::Abs_2(([&]() -> std::int32_t {
                     auto cs_left = require(player)->formation_[1];
                     auto cs_right = require(player4)->formation_[1];
                     return pls::cs::sub_i32(cs_left, cs_right);
                 }())) < num6)) {
                num3 = num9;
            }
        }
        if (num3 != pls::cs::add_i32(0, require(player)->formation_[0])) {
            num3 /= 2;
        }
        num4 = pls::cs::sub_i32(100, require(player)->formation_[0]);
        for (pls::cs::Int32 m = 0; m < (players_).length(); ++m) {
            if (m == i) {
                continue;
            }
            pls::cs::Ref<Player> player5 = players_.get_Item(m);
            pls::cs::Int32 num10 = ([&]() -> std::int32_t {
                auto cs_left = require(player5)->formation_[0];
                auto cs_right = require(player)->formation_[0];
                return pls::cs::sub_i32(cs_left, cs_right);
            }());
            if (((num4 > num10) && (num10 > num5)) &&
                (generated::java::lang::JMath::Abs_2(([&]() -> std::int32_t {
                     auto cs_left = require(player)->formation_[1];
                     auto cs_right = require(player5)->formation_[1];
                     return pls::cs::sub_i32(cs_left, cs_right);
                 }())) < num6)) {
                num4 = num10;
            }
        }
        if (num4 != pls::cs::sub_i32(100, require(player)->formation_[0])) {
            num4 /= 2;
        }
        if (team_id_ == 0) {
            require(player)->formation_param_.get_Item(0)[0] = (require(player)->formation_[0] - num3);
            require(player)->formation_param_.get_Item(0)[1] = (require(player)->formation_[1] + num);
            require(player)->formation_param_.get_Item(1)[0] = (require(player)->formation_[0] + num4);
            require(player)->formation_param_.get_Item(1)[1] = (require(player)->formation_[1] + num);
            require(player)->formation_param_.get_Item(2)[0] = (require(player)->formation_[0] + num4);
            require(player)->formation_param_.get_Item(2)[1] = (require(player)->formation_[1] - num2);
            require(player)->formation_param_.get_Item(3)[0] = (require(player)->formation_[0] - num3);
            require(player)->formation_param_.get_Item(3)[1] = (require(player)->formation_[1] - num2);
            require(player)->formation_param_.get_Item(4)[0] = require(player)->formation_[0];
            require(player)->formation_param_.get_Item(4)[1] = require(player)->formation_[1];
        } else {
            require(player)->formation_param_.get_Item(0)[0] = (require(player)->formation_[0] + num4);
            require(player)->formation_param_.get_Item(0)[1] = (require(player)->formation_[1] - num2);
            require(player)->formation_param_.get_Item(1)[0] = (require(player)->formation_[0] - num3);
            require(player)->formation_param_.get_Item(1)[1] = (require(player)->formation_[1] - num2);
            require(player)->formation_param_.get_Item(2)[0] = (require(player)->formation_[0] - num3);
            require(player)->formation_param_.get_Item(2)[1] = (require(player)->formation_[1] + num);
            require(player)->formation_param_.get_Item(3)[0] = (require(player)->formation_[0] + num4);
            require(player)->formation_param_.get_Item(3)[1] = (require(player)->formation_[1] + num);
            require(player)->formation_param_.get_Item(4)[0] = require(player)->formation_[0];
            require(player)->formation_param_.get_Item(4)[1] = require(player)->formation_[1];
        }
    }
}

// M:game.Team.SetSortGroundBallNear
void Team::SetSortGroundBallNear() {
    Team::ensure_initialized();

    if (generated::java::util::Vector_2_Size(require(ballNearPlayer_)) > 0) {
        generated::java::util::Vector_2_RemoveAllElements(require(ballNearPlayer_));
    }
    pls::cs::Ref<Ball> ball_ = require(udat_)->ball_;
    require(require(ball_)->temp_pos)->x_ = static_cast<float>(
        (static_cast<double>(
             ((static_cast<double>(
                   (static_cast<double>(require(require(ball_)->pos_)->x_) * static_cast<double>(0.5f))) +
               static_cast<double>(
                   (static_cast<double>(
                        ((static_cast<double>(require(require(ball_)->pos_)->x_) +
                          static_cast<double>((static_cast<double>(require(require(ball_)->v_)->x_) *
                                               static_cast<double>(5.0f)))))) *
                    static_cast<double>(0.5f)))))) /
         static_cast<double>(1.0f)));
    require(require(ball_)->temp_pos)->z_ = static_cast<float>(
        (static_cast<double>(
             ((static_cast<double>(
                   (static_cast<double>(require(require(ball_)->pos_)->z_) * static_cast<double>(0.5f))) +
               static_cast<double>(
                   (static_cast<double>(
                        ((static_cast<double>(require(require(ball_)->pos_)->z_) +
                          static_cast<double>((static_cast<double>(require(require(ball_)->v_)->z_) *
                                               static_cast<double>(5.0f)))))) *
                    static_cast<double>(0.5f)))))) /
         static_cast<double>(1.0f)));
    for (pls::cs::Int32 i = 0; i < (players_).length(); ++i) {
        if (require(players_.get_Item(i))->role_ == 0) {
            continue;
        }
        pls::cs::Ref<Player> player = players_.get_Item(i);
        if (require(player)->seb_ == 12) {
            continue;
        }
        {
            auto cs_target = player;
            auto cs_value =
                static_cast<float>(static_cast<float>(generated::java::lang::JMath::Sqrt(static_cast<double>(
                    (static_cast<double>(
                         (static_cast<double>(((static_cast<double>(require(require(ball_)->temp_pos)->x_) -
                                                static_cast<double>(require(require(player)->pos_)->x_)))) *
                          static_cast<double>(((static_cast<double>(require(require(ball_)->temp_pos)->x_) -
                                                static_cast<double>(require(require(player)->pos_)->x_)))))) +
                     static_cast<double>(
                         (static_cast<double>(((static_cast<double>(require(require(ball_)->temp_pos)->z_) -
                                                static_cast<double>(require(require(player)->pos_)->z_)))) *
                          static_cast<double>(
                              ((static_cast<double>(require(require(ball_)->temp_pos)->z_) -
                                static_cast<double>(require(require(player)->pos_)->z_)))))))))));
            require(cs_target)->temp_len = cs_value;
        }
        generated::java::util::Vector_2_AddElement(
            require(ballNearPlayer_), static_cast<pls::cs::Ref<pls::cs::Object>>(pls::cs::box(player)));
    }
    for (pls::cs::Int32 j = 0;
         j < pls::cs::sub_i32(generated::java::util::Vector_2_Size(require(ballNearPlayer_)), 1); ++j) {
        for (pls::cs::Int32 num =
                 pls::cs::sub_i32(generated::java::util::Vector_2_Size(require(ballNearPlayer_)), 1);
             num > j; --num) {
            pls::cs::Ref<Player> player2 = pls::cs::unbox<pls::cs::Ref<Player>>(
                generated::java::util::Vector_2_ElementAt(require(ballNearPlayer_), j));
            pls::cs::Ref<Player> player3 = pls::cs::unbox<pls::cs::Ref<Player>>(
                generated::java::util::Vector_2_ElementAt(require(ballNearPlayer_), num));
            if (static_cast<double>(require(player3)->temp_len) <
                static_cast<double>(require(player2)->temp_len)) {
                generated::java::util::Vector_2_SetElementAt(
                    require(ballNearPlayer_),
                    static_cast<pls::cs::Ref<pls::cs::Object>>(pls::cs::box(player3)), j);
                generated::java::util::Vector_2_SetElementAt(
                    require(ballNearPlayer_),
                    static_cast<pls::cs::Ref<pls::cs::Object>>(pls::cs::box(player2)), num);
            }
        }
    }
}

// M:game.Team.SetSortJampBallNear
void Team::SetSortJampBallNear() {
    Team::ensure_initialized();

    if (generated::java::util::Vector_2_Size(require(ballNearPlayer_)) > 0) {
        generated::java::util::Vector_2_RemoveAllElements(require(ballNearPlayer_));
    }
    pls::cs::Ref<Ball> ball_ = require(udat_)->ball_;
    require(require(ball_)->temp_pos)->Set(require(ball_)->fallPos_);
    w_disBoal = static_cast<float>(GameUtil::RateConvert_3(
        static_cast<float>(pls::cs::div_i32(pls::cs::mul_i32(require(ball_)->savePosFrame_, 100),
                                            require(ball_)->fallTime_)),
        0.0f, 100.0f, 0.7f, 1.0f, true));
    w_formation = static_cast<float>((static_cast<double>(1.0f) - static_cast<double>(w_disBoal)));
    pls::cs::Single num = pls::cs::Single{};
    pls::cs::Single num2 = pls::cs::Single{};
    for (pls::cs::Int32 i = 0; i < (players_).length(); ++i) {
        if (require(players_.get_Item(i))->role_ == 0) {
            continue;
        }
        pls::cs::Ref<Player> player = players_.get_Item(i);
        if (require(player)->seb_ == 12) {
            continue;
        }
        num = static_cast<float>(static_cast<float>(generated::java::lang::JMath::Sqrt(static_cast<double>(
            (static_cast<double>(
                 (static_cast<double>(((static_cast<double>(require(require(ball_)->temp_pos)->x_) -
                                        static_cast<double>(require(require(player)->pos_)->x_)))) *
                  static_cast<double>(((static_cast<double>(require(require(ball_)->temp_pos)->x_) -
                                        static_cast<double>(require(require(player)->pos_)->x_)))))) +
             static_cast<double>(
                 (static_cast<double>(((static_cast<double>(require(require(ball_)->temp_pos)->z_) -
                                        static_cast<double>(require(require(player)->pos_)->z_)))) *
                  static_cast<double>(((static_cast<double>(require(require(ball_)->temp_pos)->z_) -
                                        static_cast<double>(require(require(player)->pos_)->z_)))))))))));
        num2 = static_cast<float>(static_cast<float>(generated::java::lang::JMath::Sqrt(static_cast<double>(
            (static_cast<double>(
                 (static_cast<double>(((static_cast<double>(require(require(player)->formationGo_)->x_) -
                                        static_cast<double>(require(require(player)->pos_)->x_)))) *
                  static_cast<double>(((static_cast<double>(require(require(player)->formationGo_)->x_) -
                                        static_cast<double>(require(require(player)->pos_)->x_)))))) +
             static_cast<double>(
                 (static_cast<double>(((static_cast<double>(require(require(player)->formationGo_)->z_) -
                                        static_cast<double>(require(require(player)->pos_)->z_)))) *
                  static_cast<double>(((static_cast<double>(require(require(player)->formationGo_)->z_) -
                                        static_cast<double>(require(require(player)->pos_)->z_)))))))))));
        require(player)->temp_len =
            static_cast<float>(((((w_disBoal * num) + (w_formation * num2))) /
                                ((static_cast<double>(w_disBoal) + static_cast<double>(w_formation)))));
        {
            auto cs_target = player;
            auto cs_value = static_cast<float>(
                GameUtil::RateConvert_3(require(player)->temp_len, 225.0f, 0.0f, 0.0f, 100.0f, true));
            require(cs_target)->temp_len = cs_value;
        }
        generated::java::util::Vector_2_AddElement(
            require(ballNearPlayer_), static_cast<pls::cs::Ref<pls::cs::Object>>(pls::cs::box(player)));
    }
    for (pls::cs::Int32 j = 0;
         j < pls::cs::sub_i32(generated::java::util::Vector_2_Size(require(ballNearPlayer_)), 1); ++j) {
        for (pls::cs::Int32 num3 =
                 pls::cs::sub_i32(generated::java::util::Vector_2_Size(require(ballNearPlayer_)), 1);
             num3 > j; --num3) {
            pls::cs::Ref<Player> player2 = pls::cs::unbox<pls::cs::Ref<Player>>(
                generated::java::util::Vector_2_ElementAt(require(ballNearPlayer_), j));
            pls::cs::Ref<Player> player3 = pls::cs::unbox<pls::cs::Ref<Player>>(
                generated::java::util::Vector_2_ElementAt(require(ballNearPlayer_), num3));
            if (static_cast<double>(require(player3)->temp_len) >
                static_cast<double>(require(player2)->temp_len)) {
                generated::java::util::Vector_2_SetElementAt(
                    require(ballNearPlayer_),
                    static_cast<pls::cs::Ref<pls::cs::Object>>(pls::cs::box(player3)), j);
                generated::java::util::Vector_2_SetElementAt(
                    require(ballNearPlayer_),
                    static_cast<pls::cs::Ref<pls::cs::Object>>(pls::cs::box(player2)), num3);
            }
        }
    }
}

// M:game.Team.Init_coatEva
void Team::Init_coatEva() {
    Team::ensure_initialized();

    coatEva_passer = generated::java::util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
        pls::cs::Array<std::int32_t>::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
    coatEva_freeRun = generated::java::util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
        pls::cs::Array<std::int32_t>::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
    coatEva_defence = generated::java::util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
        pls::cs::Array<std::int32_t>::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
    coatEva_looseBall = generated::java::util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
        pls::cs::Array<std::int32_t>::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
    coatEva_passer2 = generated::java::util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
        pls::cs::Array<std::int32_t>::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
    coatEva_freeRun2 = generated::java::util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
        pls::cs::Array<std::int32_t>::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
    coatEva_new_offence =
        generated::java::util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
            pls::cs::Array<std::int32_t>::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
    coatEva_new_deffence =
        generated::java::util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
            pls::cs::Array<std::int32_t>::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
    coatEva_new_offence_passer =
        generated::java::util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<std::int32_t>>>(
            pls::cs::Array<std::int32_t>::from({Map::MAPCHIP_COAT_HNUM(), Map::MAPCHIP_COAT_WNUM()}));
}

// M:game.Team.Update_coatEva
void Team::Update_coatEva() {
    Team::ensure_initialized();

    if (Team::ChWhichChargeTern()) {
        Team::Update_coatEvaNewOffence();
    } else {
        Team::Update_coatEvaNewDeffence();
    }
}

// M:game.Team.Update_coatEvaNewOffence
void Team::Update_coatEvaNewOffence() {
    Team::ensure_initialized();

    for (pls::cs::Int32 i = 0; i < Map::MAPCHIP_COAT_HNUM(); ++i) {
        for (pls::cs::Int32 j = 0; j < Map::MAPCHIP_COAT_WNUM(); ++j) {
            coatEva_new_offence.get_Item(i)[j] = 0;
            coatEva_new_offence_passer.get_Item(i)[j] = 0;
        }
    }
    if (Team::ch_ceva()[0] == 1) {
        if (team_id_ == 0) {
            for (pls::cs::Int32 k = 0; k < Map::MAPCHIP_COAT_HNUM(); ++k) {
                pls::cs::Single num = static_cast<float>(pls::cs::add_i32(
                    ([&]() -> std::int32_t {
                        std::int32_t cs_arg0 = k;
                        std::int32_t cs_arg1 = pls::cs::sub_i32(amefto_address_.get_Item(0)[1], 4);
                        std::int32_t cs_arg2 = pls::cs::add_i32(amefto_address_.get_Item(0)[1], 1);
                        std::int32_t cs_arg3 = 0;
                        std::int32_t cs_arg4 = Team::AMEFTO_PASSER_COATEVA()[chargeNum_];
                        bool cs_arg5 = true;
                        return GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                    }()),
                    30));
                num = static_cast<float>(main::AppData::ClampMax(pls::cs::conv_i32(num), 100));
                for (pls::cs::Int32 l = 0; l < Map::MAPCHIP_COAT_WNUM(); ++l) {
                    coatEva_new_offence.get_Item(k)[l] = pls::cs::conv_i32(num);
                    coatEva_new_offence_passer.get_Item(k)[l] = pls::cs::conv_i32(num);
                }
            }
            if (!(Team::ChPAreaLineOver())) {

            } else {
                for (pls::cs::Int32 m = 0; m < Map::MAPCHIP_COAT_HNUM(); ++m) {
                    for (pls::cs::Int32 n = 0; n < Map::MAPCHIP_COAT_WNUM(); ++n) {
                        coatEva_new_offence.get_Item(m)[n] =
                            Team::DEAFULT_FORMATION_EVA_PENALTYAREA().get_Item(m)[n];
                    }
                }
            }
        } else {
            for (pls::cs::Int32 num2 = 0; num2 < Map::MAPCHIP_COAT_HNUM(); ++num2) {
                pls::cs::Single num3 = static_cast<float>(pls::cs::add_i32(
                    ([&]() -> std::int32_t {
                        std::int32_t cs_arg0 = num2;
                        std::int32_t cs_arg1 = pls::cs::add_i32(amefto_address_.get_Item(0)[1], 4);
                        std::int32_t cs_arg2 = pls::cs::sub_i32(amefto_address_.get_Item(0)[1], 1);
                        std::int32_t cs_arg3 = 0;
                        std::int32_t cs_arg4 = Team::AMEFTO_PASSER_COATEVA()[chargeNum_];
                        bool cs_arg5 = true;
                        return GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                    }()),
                    30));
                num3 = static_cast<float>(main::AppData::ClampMax(pls::cs::conv_i32(num3), 100));
                for (pls::cs::Int32 num4 = 0; num4 < Map::MAPCHIP_COAT_WNUM(); ++num4) {
                    coatEva_new_offence.get_Item(num2)[num4] = pls::cs::conv_i32(num3);
                    coatEva_new_offence_passer.get_Item(num2)[num4] = pls::cs::conv_i32(num3);
                }
            }
            if (!(Team::ChPAreaLineOver())) {

            } else {
                for (pls::cs::Int32 num5 = 0; num5 < Map::MAPCHIP_COAT_HNUM(); ++num5) {
                    for (pls::cs::Int32 num6 = 0; num6 < Map::MAPCHIP_COAT_WNUM(); ++num6) {
                        ([&]() {
                            auto cs_target = coatEva_new_offence.get_Item(num5);
                            auto cs_index = num6;
                            auto cs_value = ([&]() {
                                auto cs_array = ([&]() {
                                    auto cs_array = Team::DEAFULT_FORMATION_EVA_PENALTYAREA();
                                    auto cs_index = (pls::cs::sub_i32(Map::MAPCHIP_COAT_HNUM(), 1) - num5);
                                    return cs_array.get_Item(cs_index);
                                }());
                                auto cs_index = (pls::cs::sub_i32(Map::MAPCHIP_COAT_WNUM(), 1) - num6);
                                return cs_array.get_Item(cs_index);
                            }());
                            cs_target.set_Item(cs_index, cs_value);
                            return cs_value;
                        }());
                    }
                }
            }
        }
    }
    if (Team::ch_ceva()[2] == 1) {
        pls::cs::Ref<Team> team = require(udat_)->teams_.get_Item(pls::cs::sub_i32(1, team_id_));
        pls::cs::Array<float> cEVA_PASSER_MP = CEVA_PASSER_MP2;
        for (pls::cs::Int32 num7 = 0; num7 < (require(team)->players_).length(); ++num7) {
            pls::cs::Ref<Player> player = require(team)->players_.get_Item(num7);
            {
                auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
                pls::cs::Array<pls::cs::Array<std::int32_t>> cs_arg0 = coatEva_new_offence;
                std::int32_t cs_arg1 = require(player)->address_[0];
                std::int32_t cs_arg2 = require(player)->address_[1];
                pls::cs::Array<float> cs_arg3 = cEVA_PASSER_MP;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->Cal_evaCoatMulti9block(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
            }
            {
                auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
                pls::cs::Array<pls::cs::Array<std::int32_t>> cs_arg0 = coatEva_new_offence_passer;
                std::int32_t cs_arg1 = require(player)->address_[0];
                std::int32_t cs_arg2 = require(player)->address_[1];
                pls::cs::Array<float> cs_arg3 = cEVA_PASSER_MP;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->Cal_evaCoatMulti9block(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
            }
        }
    }
}

// M:game.Team.Update_coatEvaNewDeffence
void Team::Update_coatEvaNewDeffence() {
    Team::ensure_initialized();

    for (pls::cs::Int32 i = 0; i < Map::MAPCHIP_COAT_HNUM(); ++i) {
        for (pls::cs::Int32 j = 0; j < Map::MAPCHIP_COAT_WNUM(); ++j) {
            coatEva_new_deffence.get_Item(i)[j] = 0;
        }
    }
    if (Team::ch_ceva()[6] == 1) {
        pls::cs::Ref<Team> team = require(udat_)->teams_.get_Item(pls::cs::sub_i32(1, team_id_));
        if (team_id_ == 0) {
            if (!(require(team)->ChPAreaLineOver())) {
                for (pls::cs::Int32 k = 0; k < Map::MAPCHIP_COAT_HNUM(); ++k) {
                    for (pls::cs::Int32 l = 0; l < Map::MAPCHIP_COAT_WNUM(); ++l) {
                        ([&]() {
                            auto cs_target = coatEva_new_deffence.get_Item(k);
                            auto cs_index = l;
                            auto cs_value = ([&]() {
                                auto cs_array = ([&]() {
                                    auto cs_array = Team::DEAFULT_FORMATION_EVA();
                                    auto cs_index = (pls::cs::sub_i32(Map::MAPCHIP_COAT_HNUM(), 1) - k);
                                    return cs_array.get_Item(cs_index);
                                }());
                                auto cs_index = (pls::cs::sub_i32(Map::MAPCHIP_COAT_WNUM(), 1) - l);
                                return cs_array.get_Item(cs_index);
                            }());
                            cs_target.set_Item(cs_index, cs_value);
                            return cs_value;
                        }());
                    }
                }
            } else {
                for (pls::cs::Int32 m = 0; m < Map::MAPCHIP_COAT_HNUM(); ++m) {
                    for (pls::cs::Int32 n = 0; n < Map::MAPCHIP_COAT_WNUM(); ++n) {
                        ([&]() {
                            auto cs_target = coatEva_new_deffence.get_Item(m);
                            auto cs_index = n;
                            auto cs_value = ([&]() {
                                auto cs_array = ([&]() {
                                    auto cs_array = Team::DEAFULT_FORMATION_EVA_PENALTYAREA();
                                    auto cs_index = (pls::cs::sub_i32(Map::MAPCHIP_COAT_HNUM(), 1) - m);
                                    return cs_array.get_Item(cs_index);
                                }());
                                auto cs_index = (pls::cs::sub_i32(Map::MAPCHIP_COAT_WNUM(), 1) - n);
                                return cs_array.get_Item(cs_index);
                            }());
                            cs_target.set_Item(cs_index, cs_value);
                            return cs_value;
                        }());
                    }
                }
            }
        } else if (!(require(team)->ChPAreaLineOver())) {
            for (pls::cs::Int32 num = 0; num < Map::MAPCHIP_COAT_HNUM(); ++num) {
                for (pls::cs::Int32 num2 = 0; num2 < Map::MAPCHIP_COAT_WNUM(); ++num2) {
                    coatEva_new_deffence.get_Item(num)[num2] =
                        Team::DEAFULT_FORMATION_EVA().get_Item(num)[num2];
                }
            }
        } else {
            for (pls::cs::Int32 num3 = 0; num3 < Map::MAPCHIP_COAT_HNUM(); ++num3) {
                for (pls::cs::Int32 num4 = 0; num4 < Map::MAPCHIP_COAT_WNUM(); ++num4) {
                    coatEva_new_deffence.get_Item(num3)[num4] =
                        Team::DEAFULT_FORMATION_EVA_PENALTYAREA().get_Item(num3)[num4];
                }
            }
        }
    }
    if (Team::ch_ceva()[7] == 1) {
        pls::cs::Int32 cx = pls::cs::Int32{}, cy = pls::cs::Int32{};
        pls::cs::Ref<Player> passer = pls::cs::Ref<Player>{};
        passer = require(require(udat_)->teams_.get_Item(pls::cs::sub_i32(1, team_id_)))->GetPasser();
        if (!is_null(passer)) {
            cx = require(passer)->address_[0];
            cy = require(passer)->address_[1];
        } else {
            cx = require(require(udat_)->ball_)->address_[0];
            cy = require(require(udat_)->ball_)->address_[1];
        }
        if (require(require(udat_)->gm_)->state_ == 5) {

        } else {
            Team::Cal_evaCoatMulti9block(coatEva_new_deffence, cx, cy, CEVA_PASSER_MP2_DIV);
        }
    }
    if (Team::ch_ceva()[8] == 1) {
        for (pls::cs::Int32 num5 = 0; num5 < (players_).length(); ++num5) {
            pls::cs::Ref<Player> player = players_.get_Item(num5);
            {
                auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
                pls::cs::Array<pls::cs::Array<std::int32_t>> cs_arg0 = coatEva_new_deffence;
                std::int32_t cs_arg1 = require(player)->address_[0];
                std::int32_t cs_arg2 = require(player)->address_[1];
                pls::cs::Array<float> cs_arg3 = CEVA_PASSER_MP2;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->Cal_evaCoatMulti9block(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
            }
        }
    }
}

// M:game.Team.Update_coatEvaPasser
void Team::Update_coatEvaPasser() {
    Team::ensure_initialized();

    for (pls::cs::Int32 i = 0; i < Map::MAPCHIP_COAT_HNUM(); ++i) {
        for (pls::cs::Int32 j = 0; j < Map::MAPCHIP_COAT_WNUM(); ++j) {
            coatEva_passer.get_Item(i)[j] = 0;
            coatEva_passer2.get_Item(i)[j] = 0;
        }
    }
    if (Team::ch_ceva()[0] == 1) {
        if (team_id_ == 0) {
            for (pls::cs::Int32 k = 0; k < Map::MAPCHIP_COAT_HNUM(); ++k) {
                pls::cs::Single num = static_cast<float>(pls::cs::add_i32(
                    ([&]() -> std::int32_t {
                        std::int32_t cs_arg0 = k;
                        std::int32_t cs_arg1 = pls::cs::sub_i32(amefto_address_.get_Item(0)[1], 4);
                        std::int32_t cs_arg2 = pls::cs::add_i32(amefto_address_.get_Item(0)[1], 1);
                        std::int32_t cs_arg3 = 0;
                        std::int32_t cs_arg4 = Team::AMEFTO_PASSER_COATEVA()[chargeNum_];
                        bool cs_arg5 = false;
                        return GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                    }()),
                    30));
                num = static_cast<float>(main::AppData::ClampMax(pls::cs::conv_i32(num), 100));
                for (pls::cs::Int32 l = 0; l < Map::MAPCHIP_COAT_WNUM(); ++l) {
                    coatEva_passer2.get_Item(k)[l] = pls::cs::conv_i32(num);
                }
            }
        } else {
            for (pls::cs::Int32 m = 0; m < Map::MAPCHIP_COAT_HNUM(); ++m) {
                pls::cs::Single num2 = static_cast<float>(pls::cs::add_i32(
                    ([&]() -> std::int32_t {
                        std::int32_t cs_arg0 = m;
                        std::int32_t cs_arg1 = pls::cs::add_i32(amefto_address_.get_Item(0)[1], 4);
                        std::int32_t cs_arg2 = pls::cs::sub_i32(amefto_address_.get_Item(0)[1], 1);
                        std::int32_t cs_arg3 = 0;
                        std::int32_t cs_arg4 = Team::AMEFTO_PASSER_COATEVA()[chargeNum_];
                        bool cs_arg5 = false;
                        return GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                    }()),
                    30));
                num2 = static_cast<float>(main::AppData::ClampMax(pls::cs::conv_i32(num2), 100));
                for (pls::cs::Int32 n = 0; n < Map::MAPCHIP_COAT_WNUM(); ++n) {
                    coatEva_passer2.get_Item(m)[n] = pls::cs::conv_i32(num2);
                }
            }
        }
    }
    if (Team::ch_ceva()[1] == 1) {
    }
    if (Team::ch_ceva()[2] == 1) {
        pls::cs::Ref<Team> team = require(udat_)->teams_.get_Item(pls::cs::sub_i32(1, team_id_));
        for (pls::cs::Int32 num3 = 0; num3 < (require(team)->players_).length(); ++num3) {
            pls::cs::Ref<Player> player = require(team)->players_.get_Item(num3);
            {
                auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
                pls::cs::Array<pls::cs::Array<std::int32_t>> cs_arg0 = coatEva_passer2;
                std::int32_t cs_arg1 = require(player)->address_[0];
                std::int32_t cs_arg2 = require(player)->address_[1];
                pls::cs::Array<float> cs_arg3 = CEVA_PASSER_MP2;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->Cal_evaCoatMulti9block(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
            }
        }
    }
}

// M:game.Team.Update_coatEvaFreeRun
void Team::Update_coatEvaFreeRun() {
    Team::ensure_initialized();

    for (pls::cs::Int32 i = 0; i < Map::MAPCHIP_COAT_HNUM(); ++i) {
        for (pls::cs::Int32 j = 0; j < Map::MAPCHIP_COAT_WNUM(); ++j) {
            coatEva_freeRun.get_Item(i)[j] = 0;
            coatEva_freeRun2.get_Item(i)[j] = 0;
        }
    }
    if (Team::ch_ceva()[3] == 1) {
        if (team_id_ == 0) {
            for (pls::cs::Int32 k = 0; k < Map::MAPCHIP_COAT_HNUM(); ++k) {
                pls::cs::Int32 val = pls::cs::add_i32(
                    ([&]() -> std::int32_t {
                        std::int32_t cs_arg0 = k;
                        std::int32_t cs_arg1 = pls::cs::sub_i32(amefto_address_.get_Item(0)[1], 4);
                        std::int32_t cs_arg2 = pls::cs::sub_i32(amefto_address_.get_Item(0)[1], 1);
                        std::int32_t cs_arg3 = 0;
                        std::int32_t cs_arg4 = Team::AMEFTO_PASSER_COATEVA()[chargeNum_];
                        bool cs_arg5 = false;
                        return GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                    }()),
                    30);
                val = main::AppData::ClampMax(val, 100);
                for (pls::cs::Int32 l = 0; l < Map::MAPCHIP_COAT_WNUM(); ++l) {
                    coatEva_freeRun2.get_Item(k)[l] = val;
                }
            }
        } else {
            for (pls::cs::Int32 m = 0; m < Map::MAPCHIP_COAT_HNUM(); ++m) {
                pls::cs::Int32 val2 = pls::cs::add_i32(
                    ([&]() -> std::int32_t {
                        std::int32_t cs_arg0 = m;
                        std::int32_t cs_arg1 = pls::cs::add_i32(amefto_address_.get_Item(0)[1], 4);
                        std::int32_t cs_arg2 = pls::cs::add_i32(amefto_address_.get_Item(0)[1], 1);
                        std::int32_t cs_arg3 = 0;
                        std::int32_t cs_arg4 = Team::AMEFTO_PASSER_COATEVA()[chargeNum_];
                        bool cs_arg5 = false;
                        return GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                    }()),
                    30);
                val2 = main::AppData::ClampMax(val2, 100);
                for (pls::cs::Int32 n = 0; n < Map::MAPCHIP_COAT_WNUM(); ++n) {
                    coatEva_freeRun2.get_Item(m)[n] = val2;
                }
            }
        }
    }
    pls::cs::Ref<Player> passer = Team::GetPasser();
    if (is_null(passer)) {
        return;
    }
    ([&]() {
        auto cs_target = passer;
        auto cs_value = ([&]() -> std::int32_t {
            auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
            pls::cs::Ref<Player> cs_arg0 = passer;
            std::int32_t cs_arg1 = require(passer)->address_[0];
            std::int32_t cs_arg2 = require(passer)->address_[1];
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            return cs_receiver->Get_playerPosEva(cs_arg0, cs_arg1, cs_arg2);
        }());
        require(cs_target)->eva_pos_ = cs_value;
        return cs_value;
    }());
    if (Team::ch_ceva()[4] == 1) {
        pls::cs::Ref<Team> team = require(udat_)->teams_.get_Item(pls::cs::sub_i32(1, team_id_));
        for (pls::cs::Int32 num = 0; num < (require(team)->players_).length(); ++num) {
            pls::cs::Ref<Player> player = require(team)->players_.get_Item(num);
            {
                auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
                pls::cs::Array<pls::cs::Array<std::int32_t>> cs_arg0 = coatEva_freeRun2;
                std::int32_t cs_arg1 = require(player)->address_[0];
                std::int32_t cs_arg2 = require(player)->address_[1];
                pls::cs::Array<float> cs_arg3 = CEVA_PASSER_MP2;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->Cal_evaCoatMulti9block(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
            }
        }
    }
    if (Team::ch_ceva()[5] == 1) {
        pls::cs::Array<std::int32_t> array = pls::cs::Array<std::int32_t>::from(
            {0, 0, GameUtil::RateConvert(require(passer)->eva_pos_, 0, 50, 0, 50, true), 0});
    }
}

// M:game.Team.Update_coatEvaDefence
void Team::Update_coatEvaDefence() {
    Team::ensure_initialized();

    for (pls::cs::Int32 i = 0; i < Map::MAPCHIP_COAT_HNUM(); ++i) {
        for (pls::cs::Int32 j = 0; j < Map::MAPCHIP_COAT_WNUM(); ++j) {
            coatEva_defence.get_Item(i)[j] = 0;
        }
    }
    if (Team::ch_ceva()[6] == 1) {
        if (team_id_ == 0) {
            for (pls::cs::Int32 k = 0; k < Map::MAPCHIP_COAT_HNUM(); ++k) {
                for (pls::cs::Int32 l = 0; l < Map::MAPCHIP_COAT_WNUM(); ++l) {
                    ([&]() {
                        auto cs_target = coatEva_defence.get_Item(k);
                        auto cs_index = l;
                        auto cs_value = ([&]() {
                            auto cs_array = ([&]() {
                                auto cs_array = Team::DEAFULT_FORMATION_EVA();
                                auto cs_index = (pls::cs::sub_i32(Map::MAPCHIP_COAT_HNUM(), 1) - k);
                                return cs_array.get_Item(cs_index);
                            }());
                            auto cs_index = (pls::cs::sub_i32(Map::MAPCHIP_COAT_WNUM(), 1) - l);
                            return cs_array.get_Item(cs_index);
                        }());
                        cs_target.set_Item(cs_index, cs_value);
                        return cs_value;
                    }());
                }
            }
        } else {
            for (pls::cs::Int32 m = 0; m < Map::MAPCHIP_COAT_HNUM(); ++m) {
                for (pls::cs::Int32 n = 0; n < Map::MAPCHIP_COAT_WNUM(); ++n) {
                    coatEva_defence.get_Item(m)[n] = Team::DEAFULT_FORMATION_EVA().get_Item(m)[n];
                }
            }
        }
    }
    if (Team::ch_ceva()[7] == 1) {
        pls::cs::Ref<Player> passer =
            require(require(udat_)->teams_.get_Item(pls::cs::sub_i32(1, team_id_)))->GetPasser();
        if (is_null(passer)) {
            return;
        }
        ([&]() {
            auto cs_target = passer;
            auto cs_value = ([&]() -> std::int32_t {
                auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
                pls::cs::Ref<Player> cs_arg0 = passer;
                std::int32_t cs_arg1 = require(passer)->address_[0];
                std::int32_t cs_arg2 = require(passer)->address_[1];
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                return cs_receiver->Get_playerPosEva(cs_arg0, cs_arg1, cs_arg2);
            }());
            require(cs_target)->eva_pos_ = cs_value;
            return cs_value;
        }());
        pls::cs::Array<std::int32_t> add_param = pls::cs::Array<std::int32_t>::from(
            {GameUtil::RateConvert(require(passer)->eva_pos_, 0, 50, 0, 50, true),
             GameUtil::RateConvert(require(passer)->eva_pos_, 0, 50, 0, 50, true),
             GameUtil::RateConvert(require(passer)->eva_pos_, 0, 50, 0, 50, true), 0, 0, 0});
        {
            auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
            std::int32_t cs_arg0 = 0;
            pls::cs::Array<pls::cs::Array<std::int32_t>> cs_arg1 = coatEva_defence;
            std::int32_t cs_arg2 = require(passer)->address_[0];
            std::int32_t cs_arg3 = require(passer)->address_[1];
            pls::cs::Array<std::int32_t> cs_arg4 = add_param;
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->Cal_evaCoatAdd(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4);
        }
    }
    if (Team::ch_ceva()[8] == 1) {
        for (pls::cs::Int32 num = 0; num < (players_).length(); ++num) {
            pls::cs::Ref<Player> player = players_.get_Item(num);
            {
                auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
                pls::cs::Array<pls::cs::Array<std::int32_t>> cs_arg0 = coatEva_defence;
                std::int32_t cs_arg1 = require(player)->address_[0];
                std::int32_t cs_arg2 = require(player)->address_[1];
                pls::cs::Array<float> cs_arg3 = CEVA_PASSER_MP2;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->Cal_evaCoatMulti9block(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
            }
        }
    }
}

// M:game.Team.Update_coatEvaLooseBall
void Team::Update_coatEvaLooseBall() {
    Team::ensure_initialized();

    pls::cs::Ref<Ball> ball_ = require(udat_)->ball_;
    pls::cs::Int32 num = 0;
    if (static_cast<double>(require(require(ball_)->pos_)->z_) > static_cast<double>(0.0f)) {
        num = 1;
    }
    for (pls::cs::Int32 i = 0; i < Map::MAPCHIP_COAT_HNUM(); ++i) {
        for (pls::cs::Int32 j = 0; j < Map::MAPCHIP_COAT_WNUM(); ++j) {
            coatEva_looseBall.get_Item(i)[j] = 0;
        }
    }
    if (Team::ch_ceva()[9] == 1) {
        if ((((team_id_ == 0) && (num == 1))) || (((team_id_ == 1) && (num == 1)))) {
            for (pls::cs::Int32 k = 0; k < Map::MAPCHIP_COAT_HNUM(); ++k) {
                for (pls::cs::Int32 l = 0; l < Map::MAPCHIP_COAT_WNUM(); ++l) {
                    coatEva_looseBall.get_Item(k)[l] = Team::DEAFULT_FORMATION_EVA().get_Item(k)[l];
                }
            }
        } else {
            for (pls::cs::Int32 m = 0; m < Map::MAPCHIP_COAT_HNUM(); ++m) {
                for (pls::cs::Int32 n = 0; n < Map::MAPCHIP_COAT_WNUM(); ++n) {
                    ([&]() {
                        auto cs_target = coatEva_looseBall.get_Item(m);
                        auto cs_index = n;
                        auto cs_value = ([&]() {
                            auto cs_array = ([&]() {
                                auto cs_array = Team::DEAFULT_FORMATION_EVA();
                                auto cs_index = (pls::cs::sub_i32(Map::MAPCHIP_COAT_HNUM(), 1) - m);
                                return cs_array.get_Item(cs_index);
                            }());
                            auto cs_index = (pls::cs::sub_i32(Map::MAPCHIP_COAT_WNUM(), 1) - n);
                            return cs_array.get_Item(cs_index);
                        }());
                        cs_target.set_Item(cs_index, cs_value);
                        return cs_value;
                    }());
                }
            }
        }
    }
    if (Team::ch_ceva()[10] == 1) {
        pls::cs::Array<std::int32_t> add_param = pls::assets::baked_array<std::int32_t>(
            "5814af5d02befcd7bce042d6e7fa365008313f18d5a5d4d06eba6ec44cee0e19");
        {
            auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
            std::int32_t cs_arg0 = 0;
            pls::cs::Array<pls::cs::Array<std::int32_t>> cs_arg1 = coatEva_looseBall;
            std::int32_t cs_arg2 = require(ball_)->address_[0];
            std::int32_t cs_arg3 = require(ball_)->address_[1];
            pls::cs::Array<std::int32_t> cs_arg4 = add_param;
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->Cal_evaCoatAdd(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4);
        }
    }
    if (Team::ch_ceva()[11] == 1) {
        for (pls::cs::Int32 num2 = 0; num2 < (players_).length(); ++num2) {
            pls::cs::Ref<Player> player = players_.get_Item(num2);
            {
                auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
                pls::cs::Array<pls::cs::Array<std::int32_t>> cs_arg0 = coatEva_looseBall;
                std::int32_t cs_arg1 = require(player)->address_[0];
                std::int32_t cs_arg2 = require(player)->address_[1];
                pls::cs::Array<float> cs_arg3 = CEVA_PASSER_MP2;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->Cal_evaCoatMulti9block(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
            }
        }
    }
}

// M:game.Team.GetPasser
pls::cs::Ref<Player> Team::GetPasser() {
    Team::ensure_initialized();

    for (pls::cs::Int32 i = 0; i < (players_).length(); ++i) {
        if (generated::kairo::unity::util::BitUtil::Check(require(players_.get_Item(i))->flag_, 4)) {
            return players_.get_Item(i);
        }
    }
    return pls::cs::Ref<Player>{};
}

// M:game.Team.GetLastKicker
pls::cs::Ref<Player> Team::GetLastKicker() {
    Team::ensure_initialized();

    if ((lastKickeer_ >= 0) && (lastKickeer_ < (players_).length())) {
        return players_.get_Item(lastKickeer_);
    }
    return pls::cs::Ref<Player>{};
}

// M:game.Team.GetSum(System.Int32[][],System.Int32,System.Int32,System.Boolean)
std::int32_t Team::GetSum(pls::cs::Array<pls::cs::Array<std::int32_t>> data, pls::cs::Int32 cx,
                          pls::cs::Int32 cy, bool div) {
    Team::ensure_initialized();

    pls::cs::Int32 num = 0;
    pls::cs::Int32 num3 = pls::cs::Int32{};
    pls::cs::Int32 num4 = pls::cs::Int32{};
    for (pls::cs::Int32 i = 0; i < (CEVA_PASSER_MP2).length(); ++i) {
        pls::cs::Single num2 = 1.0f;
        if (!(div)) {
            num2 = CEVA_PASSER_MP2[i];
        }
        num3 = (cx + Team::PANEL_DIRECT_R_9BLOCK().get_Item(i)[0]);
        num4 = (cy + Team::PANEL_DIRECT_R_9BLOCK().get_Item(i)[1]);
        if ((((num3 >= 0) && (num3 < Map::MAPCHIP_COAT_WNUM())) && (num4 >= 0)) &&
            (num4 < Map::MAPCHIP_COAT_HNUM())) {
            num += pls::cs::conv_i32(((static_cast<float>(data.get_Item(num4)[num3]) / num2)));
        }
    }
    return num;
}

// M:game.Team.GetMostEvaAddress(System.Int32[][],System.Int32,System.Int32,System.Int32)
pls::cs::Array<std::int32_t> Team::GetMostEvaAddress(pls::cs::Array<pls::cs::Array<std::int32_t>> data,
                                                     pls::cs::Int32 cx, pls::cs::Int32 cy,
                                                     pls::cs::Int32 num) {
    Team::ensure_initialized();

    pls::cs::Int32 num2 = 0;
    pls::cs::Int32 num3 = 0;
    pls::cs::Int32 num4 = 0;
    for (pls::cs::Int32 i = 0; i < num; ++i) {
        for (pls::cs::Int32 j = 0; j < (Team::PANEL_DIRECT_R().get_Item(i)).length(); ++j) {
            if (((((cx + Team::PANEL_DIRECT_R().get_Item(i).get_Item(j)[0]) >= 0) && ([&]() -> bool {
                      auto cs_left = (cx + Team::PANEL_DIRECT_R().get_Item(i).get_Item(j)[0]);
                      auto cs_right = Map::MAPCHIP_COAT_WNUM();
                      return (cs_left < cs_right);
                  }())) &&
                 ((cy + Team::PANEL_DIRECT_R().get_Item(i).get_Item(j)[1]) >= 0)) &&
                ([&]() -> bool {
                    auto cs_left = (cy + Team::PANEL_DIRECT_R().get_Item(i).get_Item(j)[1]);
                    auto cs_right = Map::MAPCHIP_COAT_HNUM();
                    return (cs_left < cs_right);
                }())) {
                pls::cs::Int32 num5 =
                    data.get_Item((cy + Team::PANEL_DIRECT_R().get_Item(i).get_Item(
                                            j)[1]))[(cx + Team::PANEL_DIRECT_R().get_Item(i).get_Item(j)[0])];
                if (num2 < num5) {
                    num2 = num5;
                    num3 = (cx + Team::PANEL_DIRECT_R().get_Item(i).get_Item(j)[0]);
                    num4 = (cy + Team::PANEL_DIRECT_R().get_Item(i).get_Item(j)[1]);
                }
            }
        }
    }
    Team::mostEva_address()[0] = num3;
    Team::mostEva_address()[1] = num4;
    return Team::mostEva_address();
}

// M:game.Team.SetMostEvaAddressFromMoveArea(game.Player,System.Int32[],System.Boolean)
void Team::SetMostEvaAddressFromMoveArea(pls::cs::Ref<Player> player, pls::cs::Array<std::int32_t> var_out,
                                         bool isThroughPass) {
    Team::ensure_initialized();

    pls::cs::Array<pls::cs::Array<std::int32_t>> coatEva = require(player)->GetCoatEva();
    pls::cs::Int32 num = 0;
    pls::cs::Int32 num2 = 0;
    pls::cs::Int32 num3 = 0;
    try {
        pls::cs::Int32 num4 = require(player)->formation_address_.get_Item(0)[0];
        pls::cs::Int32 num5 = require(player)->formation_address_.get_Item(1)[0];
        if (isThroughPass) {
            num4 = ([&]() -> std::int32_t {
                std::int32_t cs_arg0 = require(player)->formation_address_.get_Item(0)[0];
                std::int32_t cs_arg1 = 1;
                std::int32_t cs_arg2 = pls::cs::sub_i32(Map::MAPCHIP_COAT_WNUM(), 2);
                return main::AppData::Clamp(cs_arg0, cs_arg1, cs_arg2);
            }());
            num5 = ([&]() -> std::int32_t {
                std::int32_t cs_arg0 = require(player)->formation_address_.get_Item(1)[0];
                std::int32_t cs_arg1 = 1;
                std::int32_t cs_arg2 = pls::cs::sub_i32(Map::MAPCHIP_COAT_WNUM(), 2);
                return main::AppData::Clamp(cs_arg0, cs_arg1, cs_arg2);
            }());
        }
        for (pls::cs::Int32 num6 = require(player)->formation_address_.get_Item(0)[1];
             num6 >= require(player)->formation_address_.get_Item(3)[1]; --num6) {
            for (pls::cs::Int32 i = num4; i <= num5; ++i) {
                if ((((num6 < 0) || (num6 >= (coatEva).length())) || (i < 0)) ||
                    (i >= (coatEva.get_Item(0)).length())) {
                    if (generated::kairo::common::cfg::Config::DEBUG_CMD()) {
                        generated::kairo::unity::util::Log::Info(
                            literal(
                                u"\u25A0Team.java setMostEvaAddressFromMoveArea() \u30A8\u30E9\u30FC") /* "■Team.java setMostEvaAddressFromMoveArea() エラー" */
                            ,
                            pls::cs::Ref<pls::cs::ExceptionObject>{});
                    }
                    continue;
                }
                pls::cs::Int32 num7 = coatEva.get_Item(num6)[i];
                if (num < num7) {
                    num = num7;
                    num2 = i;
                    num3 = num6;
                }
            }
        }
        var_out[0] = num2;
        var_out[1] = num3;
    } catch (const pls::cs::Exception& cs_caught_96) {
        auto t = pls::cs::capture_exception(cs_caught_96);
        {
            generated::kairo::unity::util::Log::Info(t);
        }
    }
}

// M:game.Team.SetMostEvaAddressFromMoveArea_thrughPass(game.Player,System.Int32[],System.Boolean)
void Team::SetMostEvaAddressFromMoveArea_thrughPass(pls::cs::Ref<Player> player,
                                                    pls::cs::Array<std::int32_t> var_out,
                                                    bool isThroughPass) {
    Team::ensure_initialized();

    pls::cs::Int32 num = 0;
    pls::cs::Int32 num2 = 0;
    pls::cs::Int32 num3 = 0;
    pls::cs::Int32 num4 = require(player)->formation_address_.get_Item(0)[0];
    pls::cs::Int32 num5 = require(player)->formation_address_.get_Item(1)[0];
    if (isThroughPass) {
        num4 = ([&]() -> std::int32_t {
            std::int32_t cs_arg0 = require(player)->formation_address_.get_Item(0)[0];
            std::int32_t cs_arg1 = 1;
            std::int32_t cs_arg2 = pls::cs::sub_i32(Map::MAPCHIP_COAT_WNUM(), 2);
            return main::AppData::Clamp(cs_arg0, cs_arg1, cs_arg2);
        }());
        num5 = ([&]() -> std::int32_t {
            std::int32_t cs_arg0 = require(player)->formation_address_.get_Item(1)[0];
            std::int32_t cs_arg1 = 1;
            std::int32_t cs_arg2 = pls::cs::sub_i32(Map::MAPCHIP_COAT_WNUM(), 2);
            return main::AppData::Clamp(cs_arg0, cs_arg1, cs_arg2);
        }());
    }
    for (pls::cs::Int32 num6 = require(player)->formation_address_.get_Item(0)[1];
         num6 >= require(player)->formation_address_.get_Item(3)[1]; --num6) {
        for (pls::cs::Int32 i = num4; i <= num5; ++i) {
            pls::cs::Int32 num7 = Team::Get_playerReceivePosEva(player, i, num6);
            if (num < num7) {
                num = num7;
                num2 = i;
                num3 = num6;
            }
        }
    }
    var_out[0] = num2;
    var_out[1] = num3;
}

// M:game.Team.Get_playerPosEva(game.Player,System.Int32,System.Int32)
std::int32_t Team::Get_playerPosEva(pls::cs::Ref<Player> player, pls::cs::Int32 xi, pls::cs::Int32 yi) {
    Team::ensure_initialized();

    return Team::Get_playerPosEva(player, xi, yi, true);
}

// M:game.Team.Get_playerPosEva(game.Player,System.Int32,System.Int32,System.Boolean)
std::int32_t Team::Get_playerPosEva(pls::cs::Ref<Player> player, pls::cs::Int32 xi, pls::cs::Int32 yi,
                                    bool div) {
    Team::ensure_initialized();

    pls::cs::Array<pls::cs::Array<std::int32_t>> coatEva = require(player)->GetCoatEva();
    pls::cs::Int32 sum = Team::GetSum(coatEva, xi, yi, div);
    pls::cs::Int32 num = GameUtil::RateConvert(sum, 0, 700, 0, 100, true);
    pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> posFromAddress =
        Camera::GetPosFromAddress(xi, yi);
    pls::cs::Int32 num2 = 0;
    if (team_id_ == 0) {
        num2 = (pls::cs::conv_i32(GameUtil::RateConvert_3(
            require(posFromAddress)->z_, static_cast<float>(-900.0f), 900.0f, 0.0f, 100.0f, true)));
    } else {
        num2 = (pls::cs::conv_i32(GameUtil::RateConvert_3(require(posFromAddress)->z_, 900.0f,
                                                          static_cast<float>(-900.0f), 0.0f, 100.0f, true)));
    }
    {
        pls::cs::Int32 recoveredReturn_42482 = pls::cs::conv_i32(
            ((static_cast<double>(((static_cast<double>((static_cast<double>(0.7f) *
                                                         static_cast<double>(static_cast<float>(num)))) +
                                    static_cast<double>((static_cast<double>(0.3f) *
                                                         static_cast<double>(static_cast<float>(num2))))))) /
              static_cast<double>(1.0f))));
        return recoveredReturn_42482;
    }
}

// M:game.Team.Get_playerReceivePosEva(game.Player,System.Int32,System.Int32)
std::int32_t Team::Get_playerReceivePosEva(pls::cs::Ref<Player> player, pls::cs::Int32 xi,
                                           pls::cs::Int32 yi) {
    Team::ensure_initialized();

    pls::cs::Array<pls::cs::Array<std::int32_t>> array = pls::cs::Array<pls::cs::Array<std::int32_t>>{};
    array = coatEva_new_offence;
    pls::cs::Int32 sum = Team::GetSum(array, xi, yi, true);
    pls::cs::Int32 num = GameUtil::RateConvert(sum, 0, 270, 0, 100, true);
    Camera::ConvertAddressToGlobal(xi, yi, require(player)->temp_vec);
    pls::cs::Single x = static_cast<float>(([&]() -> double {
        auto cs_left = static_cast<double>(require(amefto_goalPos_.get_Item(0))->z_);
        auto cs_right = static_cast<double>(require(require(player)->temp_vec)->z_);
        return (cs_left - cs_right);
    }()));
    pls::cs::Int32 num2 = 0;
    pls::cs::Single num3 = Team::RPP_W_DISTOGOAL_NORMAL();
    if (team_id_ == 0) {
        if (!(Team::ChPAreaLineOver())) {
            num2 = pls::cs::conv_i32(GameUtil::RateConvert_3(x, 270.0f, 0.0f, 0.0f, 100.0f, true));
        } else {
            pls::cs::Single x2 =
                static_cast<float>(static_cast<float>(generated::java::lang::JMath::Sqrt(static_cast<double>(
                    (static_cast<double>((static_cast<double>(require(require(player)->pos_)->x_) *
                                          static_cast<double>(require(require(player)->pos_)->x_))) +
                     static_cast<double>(
                         (static_cast<double>(((static_cast<double>(900.0f) -
                                                static_cast<double>(require(require(player)->pos_)->z_)))) *
                          static_cast<double>(
                              ((static_cast<double>(900.0f) -
                                static_cast<double>(require(require(player)->pos_)->z_)))))))))));
            num2 = pls::cs::conv_i32(GameUtil::RateConvert_3(x2, 900.0f, 0.0f, 0.0f, 100.0f, true));
            num3 = Team::RPP_W_DISTOGOAL_PAREA();
        }
    } else if (!(Team::ChPAreaLineOver())) {
        num2 = pls::cs::conv_i32(
            GameUtil::RateConvert_3(x, static_cast<float>(-270.0f), 0.0f, 0.0f, 100.0f, true));
    } else {
        pls::cs::Single x3 =
            static_cast<float>(static_cast<float>(generated::java::lang::JMath::Sqrt(static_cast<double>(
                (static_cast<double>((static_cast<double>(require(require(player)->pos_)->x_) *
                                      static_cast<double>(require(require(player)->pos_)->x_))) +
                 static_cast<double>(
                     (static_cast<double>(((static_cast<double>(-900.0f) -
                                            static_cast<double>(require(require(player)->pos_)->z_)))) *
                      static_cast<double>(((static_cast<double>(-900.0f) -
                                            static_cast<double>(require(require(player)->pos_)->z_)))))))))));
        num2 = pls::cs::conv_i32(GameUtil::RateConvert_3(x3, 900.0f, 0.0f, 0.0f, 100.0f, true));
        num3 = Team::RPP_W_DISTOGOAL_PAREA();
    }
    pls::cs::Int32 num4 = 0;
    for (pls::cs::Int32 i = 0;
         i < (require(require(udat_)->teams_.get_Item(pls::cs::sub_i32(1, team_id_)))->players_).length();
         ++i) {
        pls::cs::Ref<Player> player2 =
            require(require(udat_)->teams_.get_Item(pls::cs::sub_i32(1, team_id_)))->players_.get_Item(i);
        if ((generated::java::lang::JMath::Abs_2(([&]() -> std::int32_t {
                 auto cs_left = require(player)->address_[0];
                 auto cs_right = require(player2)->address_[0];
                 return pls::cs::sub_i32(cs_left, cs_right);
             }())) <= 1) &&
            (generated::java::lang::JMath::Abs_2(([&]() -> std::int32_t {
                 auto cs_left = require(player)->address_[1];
                 auto cs_right = require(player2)->address_[1];
                 return pls::cs::sub_i32(cs_left, cs_right);
             }())) <= 1)) {
            ++num4;
        }
    }
    pls::cs::Int32 num5 = GameUtil::RateConvert(num4, 4, 0, 0, 100, true);
    pls::cs::Ref<Player> passer = Team::GetPasser();
    if (is_null(passer)) {
        return pls::cs::conv_i32(((((((static_cast<double>(Team::RPP_W_COATEVASUM()) *
                                       static_cast<double>(static_cast<float>(num))) +
                                      (num3 * static_cast<float>(num2))) +
                                     (static_cast<double>(Team::RPP_W_AROUNDENEMY()) *
                                      static_cast<double>(static_cast<float>(num5))))) /
                                   (((Team::RPP_W_COATEVASUM() + num3) + Team::RPP_W_AROUNDENEMY())))));
    }
    pls::cs::Single x4 =
        static_cast<float>(static_cast<float>(generated::java::lang::JMath::Sqrt(static_cast<double>(
            (static_cast<double>(
                 (static_cast<double>(((static_cast<double>(require(require(passer)->pos_)->x_) -
                                        static_cast<double>(require(require(player)->temp_vec)->x_)))) *
                  static_cast<double>(((static_cast<double>(require(require(passer)->pos_)->x_) -
                                        static_cast<double>(require(require(player)->temp_vec)->x_)))))) +
             static_cast<double>(
                 (static_cast<double>(((static_cast<double>(require(require(passer)->pos_)->z_) -
                                        static_cast<double>(require(require(player)->temp_vec)->z_)))) *
                  static_cast<double>(((static_cast<double>(require(require(passer)->pos_)->z_) -
                                        static_cast<double>(require(require(player)->temp_vec)->z_)))))))))));
    pls::cs::Int32 num6 = pls::cs::conv_i32(GameUtil::RateConvert_3(x4, 900.0f, 0.0f, 0.0f, 100.0f, true));
    {
        pls::cs::Int32 recoveredReturn = pls::cs::conv_i32(
            (((((((static_cast<double>(Team::RPP_W_COATEVASUM()) *
                   static_cast<double>(static_cast<float>(num))) +
                  (num3 * static_cast<float>(num2))) +
                 (static_cast<double>(Team::RPP_W_AROUNDENEMY()) *
                  static_cast<double>(static_cast<float>(num5)))) +
                (static_cast<double>(Team::PRP_W_DIS()) * static_cast<double>(static_cast<float>(num6))))) /
              ((((Team::RPP_W_COATEVASUM() + num3) + Team::RPP_W_AROUNDENEMY()) + Team::PRP_W_DIS())))));
        return recoveredReturn;
    }
}

// M:game.Team.Cal_evaCoatMulti(System.Int32,System.Int32[][],System.Int32,System.Int32,System.Single[])
void Team::Cal_evaCoatMulti(pls::cs::Int32 mode, pls::cs::Array<pls::cs::Array<std::int32_t>> data,
                            pls::cs::Int32 cx, pls::cs::Int32 cy, pls::cs::Array<float> muliti_param) {
    Team::ensure_initialized();

    pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>> array =
        pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{};
    if ((mode == 0)) {
        array = Team::PANEL_DIRECT();
    } else if ((mode == 1)) {
        array = Team::PANEL_DIRECT_R();
    }
    for (pls::cs::Int32 i = 0; i < (array).length(); ++i) {
        if (static_cast<double>(muliti_param[i]) == static_cast<double>(0.0f)) {
            continue;
        }
        for (pls::cs::Int32 j = 0; j < (array.get_Item(i)).length(); ++j) {
            if (((((cx + array.get_Item(i).get_Item(j)[0]) >= 0) && ([&]() -> bool {
                      auto cs_left = (cx + array.get_Item(i).get_Item(j)[0]);
                      auto cs_right = Map::MAPCHIP_COAT_WNUM();
                      return (cs_left < cs_right);
                  }())) &&
                 ((cy + array.get_Item(i).get_Item(j)[1]) >= 0)) &&
                ([&]() -> bool {
                    auto cs_left = (cy + array.get_Item(i).get_Item(j)[1]);
                    auto cs_right = Map::MAPCHIP_COAT_HNUM();
                    return (cs_left < cs_right);
                }())) {
                pls::cs::Int32 num = (cx + array.get_Item(i).get_Item(j)[0]);
                pls::cs::Int32 num2 = (cy + array.get_Item(i).get_Item(j)[1]);
                data.get_Item(num2)[num] = pls::cs::conv_i32((([&]() -> double {
                    auto cs_left = static_cast<double>(static_cast<float>(data.get_Item(num2)[num]));
                    auto cs_right = static_cast<double>(muliti_param[i]);
                    return (cs_left * cs_right);
                }())));
            }
        }
    }
}

// M:game.Team.Cal_evaCoatMulti9block(System.Int32[][],System.Int32,System.Int32,System.Single[])
void Team::Cal_evaCoatMulti9block(pls::cs::Array<pls::cs::Array<std::int32_t>> data, pls::cs::Int32 cx,
                                  pls::cs::Int32 cy, pls::cs::Array<float> muliti_param) {
    Team::ensure_initialized();

    pls::cs::Int32 num = pls::cs::Int32{};
    pls::cs::Int32 num2 = pls::cs::Int32{};
    for (pls::cs::Int32 i = 0; i < (Team::PANEL_DIRECT_R_9BLOCK()).length(); ++i) {
        num = (cx + Team::PANEL_DIRECT_R_9BLOCK().get_Item(i)[0]);
        num2 = (cy + Team::PANEL_DIRECT_R_9BLOCK().get_Item(i)[1]);
        if ((((num >= 0) && (num < Map::MAPCHIP_COAT_WNUM())) && (num2 >= 0)) &&
            (num2 < Map::MAPCHIP_COAT_HNUM())) {
            data.get_Item(num2)[num] = pls::cs::conv_i32((([&]() -> double {
                auto cs_left = static_cast<double>(static_cast<float>(data.get_Item(num2)[num]));
                auto cs_right = static_cast<double>(muliti_param[i]);
                return (cs_left * cs_right);
            }())));
        }
    }
}

// M:game.Team.Cal_evaCoatAdd(System.Int32,System.Int32[][],System.Int32,System.Int32,System.Int32[])
void Team::Cal_evaCoatAdd(pls::cs::Int32 mode, pls::cs::Array<pls::cs::Array<std::int32_t>> data,
                          pls::cs::Int32 cx, pls::cs::Int32 cy, pls::cs::Array<std::int32_t> add_param) {
    Team::ensure_initialized();

    pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>> array =
        pls::cs::Array<pls::cs::Array<pls::cs::Array<std::int32_t>>>{};
    if ((mode == 0)) {
        array = Team::PANEL_DIRECT();
    } else if ((mode == 1)) {
        array = Team::PANEL_DIRECT_R();
    }
    for (pls::cs::Int32 i = 0; i < (array).length(); ++i) {
        if (add_param[i] == 0) {
            continue;
        }
        for (pls::cs::Int32 j = 0; j < (array.get_Item(i)).length(); ++j) {
            if (((((cx + array.get_Item(i).get_Item(j)[0]) >= 0) && ([&]() -> bool {
                      auto cs_left = (cx + array.get_Item(i).get_Item(j)[0]);
                      auto cs_right = Map::MAPCHIP_COAT_WNUM();
                      return (cs_left < cs_right);
                  }())) &&
                 ((cy + array.get_Item(i).get_Item(j)[1]) >= 0)) &&
                ([&]() -> bool {
                    auto cs_left = (cy + array.get_Item(i).get_Item(j)[1]);
                    auto cs_right = Map::MAPCHIP_COAT_HNUM();
                    return (cs_left < cs_right);
                }())) {
                pls::cs::Int32 num = (cx + array.get_Item(i).get_Item(j)[0]);
                pls::cs::Int32 num2 = (cy + array.get_Item(i).get_Item(j)[1]);
                data.get_Item(num2)[num] = ([&]() -> std::int32_t {
                    auto cs_left = data.get_Item(num2)[num];
                    auto cs_right = add_param[i];
                    return pls::cs::add_i32(cs_left, cs_right);
                }());
            }
        }
    }
}

// M:game.Team.Cal_evaCoatAdd9block(System.Int32[][],System.Int32,System.Int32,System.Int32[])
void Team::Cal_evaCoatAdd9block(pls::cs::Array<pls::cs::Array<std::int32_t>> data, pls::cs::Int32 cx,
                                pls::cs::Int32 cy, pls::cs::Array<std::int32_t> add_param) {
    Team::ensure_initialized();

    pls::cs::Int32 num = pls::cs::Int32{};
    pls::cs::Int32 num2 = pls::cs::Int32{};
    for (pls::cs::Int32 i = 0; i < (Team::PANEL_DIRECT_R_9BLOCK()).length(); ++i) {
        num = (cx + Team::PANEL_DIRECT_R_9BLOCK().get_Item(i)[0]);
        num2 = (cy + Team::PANEL_DIRECT_R_9BLOCK().get_Item(i)[1]);
        if ((((num >= 0) && (num < Map::MAPCHIP_COAT_WNUM())) && (num2 >= 0)) &&
            (num2 < Map::MAPCHIP_COAT_HNUM())) {
            data.get_Item(num2)[num] = ([&]() -> std::int32_t {
                auto cs_left = data.get_Item(num2)[num];
                auto cs_right = add_param[i];
                return pls::cs::add_i32(cs_left, cs_right);
            }());
        }
    }
}

// M:game.Team.Amefto
void Team::Amefto() {
    Team::ensure_initialized();

    if (is_null(require(require(udat_)->ball_)->lastOwner_)) {
        return;
    }
    if (is_null(require(require(udat_)->ball_)->owner_)) {
        if (require(require(require(udat_)->ball_)->lastOwner_)->team_id_ != team_id_) {
            return;
        }
    } else if (require(require(require(udat_)->ball_)->owner_)->team_id_ != team_id_) {
        return;
    }
    pls::cs::Ref<Player> passer = Team::GetPasser();
    if (!is_null(passer)) {
        if (team_id_ == 0) {
            if (static_cast<double>(require(require(passer)->pos_)->z_) >= static_cast<double>(goalZ_)) {
                Team::Amefto_start();
                return;
            }
        } else if (static_cast<double>(require(require(passer)->pos_)->z_) <= static_cast<double>(goalZ_)) {
            Team::Amefto_start();
            return;
        }
    }
    chargeCnt_ = pls::cs::add_i32(chargeCnt_, 1);
    if (chargeCnt_ >= amefto_oneChargeTime) {
        if ((require(require(udat_)->gm_)->state_ == 0) &&
            (((((team_id_ == 0) && ([&]() -> bool {
                    auto cs_left = static_cast<double>(require(require(require(udat_)->ball_)->pos_)->z_);
                    auto cs_right = static_cast<double>(require(Map::COAT_GOAL2_GLOBALPOS().get_Item(1))->z_);
                    return (cs_left >= cs_right);
                }()))) ||
              (((team_id_ == 1) && ([&]() -> bool {
                    auto cs_left = static_cast<double>(require(require(require(udat_)->ball_)->pos_)->z_);
                    auto cs_right = static_cast<double>(require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->z_);
                    return (cs_left <= cs_right);
                }())))))) {
            require(apdat_)->PlaySe(7);
        }
        chargeCnt_ = 0;
        chargeNum_ = main::AppData::ClampMax(pls::cs::add_i32(chargeNum_, 1), 3);
        eva_risk_ = 0;
        if (chargeNum_ == 1) {
            eva_risk_ = 25;
        } else if (chargeNum_ == 2) {
            eva_risk_ = 50;
        } else if (chargeNum_ == 3) {
            eva_risk_ = 100;
        }
        if (chargeNum_ >= 4) {
        }
    }
}

// M:game.Team.Amefto_start
void Team::Amefto_start() {
    Team::ensure_initialized();

    startZ_ = require(require(require(udat_)->ball_)->pos_)->z_;
    if (team_id_ == 0) {
        goalZ_ = static_cast<float>(
            (static_cast<double>(startZ_) + static_cast<double>(static_cast<float>(amefto_pz))));
    } else {
        goalZ_ = static_cast<float>(
            (static_cast<double>(startZ_) - static_cast<double>(static_cast<float>(amefto_pz))));
    }
    {
        auto cs_target = amefto_goalPos_.get_Item(0);
        auto cs_value = goalZ_;
        require(cs_target)->z_ = cs_value;
    }
    {
        auto cs_target = amefto_goalPos_.get_Item(1);
        auto cs_value = goalZ_;
        require(cs_target)->z_ = cs_value;
    }
    {
        pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> cs_arg0 = amefto_goalPos_.get_Item(0);
        pls::cs::Array<std::int32_t> cs_arg1 = amefto_address_.get_Item(0);
        Camera::ConvertGlobalToAddress(cs_arg0, cs_arg1);
    }
    {
        pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> cs_arg0 = amefto_goalPos_.get_Item(1);
        pls::cs::Array<std::int32_t> cs_arg1 = amefto_address_.get_Item(1);
        Camera::ConvertGlobalToAddress(cs_arg0, cs_arg1);
    }
    chargeNum_ = 0;
    chargeCnt_ = 0;
    eva_risk_ = 0;
    if (Team::ChPAreaLineOver()) {
        pls::cs::Ref<Player> passer = Team::GetPasser();
        if (!is_null(passer)) {
            require(apdat_)->PlaySe(7);
        }
    }
}

// M:game.Team.Update_formationRect2
void Team::Update_formationRect2() {
    Team::ensure_initialized();

    ternCharge = true;
    if (is_null(require(require(udat_)->ball_)->lastOwner_)) {
        ternCharge = false;
    } else if (is_null(require(require(udat_)->ball_)->owner_)) {
        if (require(require(require(udat_)->ball_)->lastOwner_)->team_id_ != team_id_) {
            ternCharge = false;
        }
    } else if (require(require(require(udat_)->ball_)->owner_)->team_id_ != team_id_) {
        ternCharge = false;
    }
    if ((require(require(udat_)->gm_)->state_ == 4) || (require(require(udat_)->gm_)->state_ == 5)) {
        if (require(require(udat_)->gm_)->gameState_ == team_id_) {
            ternCharge = true;
        } else {
            ternCharge = false;
        }
    }
    if (ternCharge) {
        pls::cs::Ref<Player> passer = Team::GetPasser();
        pls::cs::Single num = 0.0f;
        pls::cs::Single num2 = 0.0f;
        pls::cs::Single num3 = 990.0f;
        require(Team::team_formationCenterPos())->x_ = require(require(require(udat_)->ball_)->pos_)->x_;
        if (team_id_ == 0) {
            ([&]() {
                auto cs_target = Team::team_formationCenterPos();
                auto cs_value = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(
                        ((static_cast<float>((pls::cs::sub_i32(50, Team::AMEFTO_FRECT_GOALZ()[chargeNum_]))) *
                          num3) /
                         100.0f));
                    auto cs_right = static_cast<double>(require(amefto_goalPos_.get_Item(0))->z_);
                    return (cs_left + cs_right);
                }()));
                require(cs_target)->z_ = cs_value;
                return cs_value;
            }());
            if ((require(require(udat_)->gm_)->state_ == 4) ||
                ((!is_null(passer) && (require(passer)->p_id_ == 0)))) {
                require(Team::team_formationCenterPos())->z_ = static_cast<float>(-180.0f);
            }
            if (generated::kairo::unity::util::BitUtil::Check(require(require(udat_)->ball_)->flag_, 16)) {
                require(Team::team_formationCenterPos())->x_ =
                    require(require(require(udat_)->ball_)->fallPos_)->x_;
                require(Team::team_formationCenterPos())->z_ =
                    require(require(require(udat_)->ball_)->fallPos_)->z_;
            }
            num = (require(Team::team_formationCenterPos())->z_ + (num3 / 2.0f));
            num2 = (require(Team::team_formationCenterPos())->z_ - (num3 / 2.0f));
        } else {
            ([&]() {
                auto cs_target = Team::team_formationCenterPos();
                auto cs_value = static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>((
                        (static_cast<float>((pls::cs::add_i32(-50, Team::AMEFTO_FRECT_GOALZ()[chargeNum_]))) *
                         num3) /
                        100.0f));
                    auto cs_right = static_cast<double>(require(amefto_goalPos_.get_Item(0))->z_);
                    return (cs_left + cs_right);
                }()));
                require(cs_target)->z_ = cs_value;
                return cs_value;
            }());
            if ((require(require(udat_)->gm_)->state_ == 4) ||
                ((!is_null(passer) && (require(passer)->p_id_ == 0)))) {
                require(Team::team_formationCenterPos())->z_ = 180.0f;
            }
            if (generated::kairo::unity::util::BitUtil::Check(require(require(udat_)->ball_)->flag_, 16)) {
                require(Team::team_formationCenterPos())->x_ =
                    require(require(require(udat_)->ball_)->fallPos_)->x_;
                require(Team::team_formationCenterPos())->z_ =
                    require(require(require(udat_)->ball_)->fallPos_)->z_;
            }
            num = (require(Team::team_formationCenterPos())->z_ - (num3 / 2.0f));
            num2 = (require(Team::team_formationCenterPos())->z_ + (num3 / 2.0f));
        }
        num += static_cast<float>((([&]() -> std::int32_t {
            auto cs_left = Team::FORMATION_TYPE_RATE()[formationType_];
            auto cs_right = ([&]() -> std::int32_t {
                auto cs_left = pls::cs::mul_i32(2, Team::FORMATION_TYPE_RATE()[formationType_]);
                auto cs_right = team_id_;
                return pls::cs::mul_i32(cs_left, cs_right);
            }());
            return pls::cs::sub_i32(cs_left, cs_right);
        }())));
        num2 += static_cast<float>((([&]() -> std::int32_t {
            auto cs_left = Team::FORMATION_TYPE_RATE()[formationType_];
            auto cs_right = ([&]() -> std::int32_t {
                auto cs_left = pls::cs::mul_i32(2, Team::FORMATION_TYPE_RATE()[formationType_]);
                auto cs_right = team_id_;
                return pls::cs::mul_i32(cs_left, cs_right);
            }());
            return pls::cs::sub_i32(cs_left, cs_right);
        }())));
        if (static_cast<double>(num) < static_cast<double>(-900.0f)) {
            num = static_cast<float>(-900.0f);
        }
        if (static_cast<double>(num2) < static_cast<double>(-900.0f)) {
            num2 = static_cast<float>(-900.0f);
        }
        if (static_cast<double>(num) > static_cast<double>(900.0f)) {
            num = 900.0f;
        }
        if (static_cast<double>(num2) > static_cast<double>(900.0f)) {
            num2 = 900.0f;
        }
        {
            auto cs_target = fPos_;
            auto cs_index = 3;
            auto cs_value =
                static_cast<float>(generated::java::lang::JMath::Abs(static_cast<float>((num - num2))));
            cs_target.set_Item(cs_index, cs_value);
        }
        fPos_[1] = static_cast<float>((((num + num2)) / 2.0f));
    } else {
        pls::cs::Ref<Player> passer2 =
            require(require(udat_)->teams_.get_Item(pls::cs::sub_i32(1, team_id_)))->GetPasser();
        pls::cs::Int32 num4 = 0;
        pls::cs::Int32 num5 = 0;
        pls::cs::Single num6 = 0.5f;
        pls::cs::Single num7 = 0.5f;
        if (!is_null(passer2)) {
            num4 = require(passer2)->eva_pos_;
        } else {
            num6 = 0.0f;
        }
        pls::cs::Int32 num8 = 0;
        for (pls::cs::Int32 i = 1; i < (players_).length(); ++i) {
            if (!is_null(passer2) && (require(passer2)->p_id_ == i)) {
                continue;
            }
            if (!is_null(passer2)) {
                if ((((team_id_ == 0) && ([&]() -> bool {
                          auto cs_left = static_cast<double>(require(require(passer2)->pos_)->z_);
                          auto cs_right =
                              static_cast<double>(require(require(players_.get_Item(i))->pos_)->z_);
                          return (cs_left < cs_right);
                      }()))) ||
                    (((team_id_ == 1) && ([&]() -> bool {
                          auto cs_left = static_cast<double>(require(require(passer2)->pos_)->z_);
                          auto cs_right =
                              static_cast<double>(require(require(players_.get_Item(i))->pos_)->z_);
                          return (cs_left > cs_right);
                      }())))) {
                    ++num8;
                }
            } else if ((((team_id_ == 0) && ([&]() -> bool {
                             auto cs_left =
                                 static_cast<double>(require(require(require(udat_)->ball_)->pos_)->z_);
                             auto cs_right =
                                 static_cast<double>(require(require(players_.get_Item(i))->pos_)->z_);
                             return (cs_left < cs_right);
                         }()))) ||
                       (((team_id_ == 1) && ([&]() -> bool {
                             auto cs_left =
                                 static_cast<double>(require(require(require(udat_)->ball_)->pos_)->z_);
                             auto cs_right =
                                 static_cast<double>(require(require(players_.get_Item(i))->pos_)->z_);
                             return (cs_left > cs_right);
                         }())))) {
                ++num8;
            }
        }
        num5 = GameUtil::RateConvert(num8, 0, 5, 0, 100, true);
        require(Team::team_formationCenterPos())->x_ = require(require(require(udat_)->ball_)->pos_)->x_;
        require(Team::team_formationCenterPos())->z_ = require(require(require(udat_)->ball_)->pos_)->z_;
        if (generated::kairo::unity::util::BitUtil::Check(require(require(udat_)->ball_)->flag_, 16)) {
            require(Team::team_formationCenterPos())->z_ =
                require(require(require(udat_)->ball_)->fallPos_)->z_;
        }
        ([&]() {
            auto cs_target = Team::team_formationCenterPos();
            auto cs_old = require(cs_target)->z_;
            auto cs_rhs = ([&]() -> std::int32_t {
                auto cs_left = ([&]() -> std::int32_t {
                    auto cs_left = Team::FORMATION_RATE_DEFFECNE();
                    auto cs_right = Team::FORMATION_TYPE_RATE()[formationType_];
                    return pls::cs::add_i32(cs_left, cs_right);
                }());
                auto cs_right = ([&]() -> std::int32_t {
                    auto cs_left = pls::cs::mul_i32(2, (([&]() -> std::int32_t {
                                                        auto cs_left = Team::FORMATION_RATE_DEFFECNE();
                                                        auto cs_right =
                                                            Team::FORMATION_TYPE_RATE()[formationType_];
                                                        return pls::cs::add_i32(cs_left, cs_right);
                                                    }())));
                    auto cs_right = team_id_;
                    return pls::cs::mul_i32(cs_left, cs_right);
                }());
                return pls::cs::sub_i32(cs_left, cs_right);
            }());
            auto cs_value = static_cast<float>((static_cast<double>(cs_old) + static_cast<double>(cs_rhs)));
            require(cs_target)->z_ = cs_value;
            return cs_value;
        }());
        if ((require(require(udat_)->gm_)->state_ == 4) ||
            ((!is_null(passer2) && (require(passer2)->p_id_ == 0)))) {
            if (team_id_ == 0) {
                require(Team::team_formationCenterPos())->z_ = static_cast<float>(-180.0f);
            } else {
                require(Team::team_formationCenterPos())->z_ = 180.0f;
            }
        }
        pls::cs::Single num9 = 0.0f;
        pls::cs::Single num10 = 0.0f;
        if (team_id_ == 0) {
            if ([&]() -> bool {
                    auto cs_left = static_cast<double>(require(Team::team_formationCenterPos())->z_);
                    auto cs_right = static_cast<double>(require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->z_);
                    return (cs_left < cs_right);
                }()) {
                num10 =
                    static_cast<float>((static_cast<double>(require(Team::team_formationCenterPos())->z_) -
                                        static_cast<double>(450.0f)));
                if (static_cast<double>(num10) < static_cast<double>(-900.0f)) {
                    num10 = static_cast<float>(-900.0f);
                }
                num9 = static_cast<float>((static_cast<double>(require(Team::team_formationCenterPos())->z_) +
                                           static_cast<double>(450.0f)));
                num10 = (((require(Team::team_formationCenterPos())->z_ + num10)) / 2.0f);
                num9 = (((require(Team::team_formationCenterPos())->z_ + num9)) / 2.0f);
            } else {
                num10 =
                    static_cast<float>((static_cast<double>(require(Team::team_formationCenterPos())->z_) -
                                        static_cast<double>(450.0f)));
                if (static_cast<double>(num10) < static_cast<double>(-900.0f)) {
                    num10 = static_cast<float>(-900.0f);
                }
                num9 = static_cast<float>((static_cast<double>(require(Team::team_formationCenterPos())->z_) +
                                           static_cast<double>(450.0f)));
            }
        } else if ([&]() -> bool {
                       auto cs_left = static_cast<double>(require(Team::team_formationCenterPos())->z_);
                       auto cs_right =
                           static_cast<double>(require(Map::COAT_GOAL2_GLOBALPOS().get_Item(1))->z_);
                       return (cs_left > cs_right);
                   }()) {
            num10 = static_cast<float>((static_cast<double>(require(Team::team_formationCenterPos())->z_) +
                                        static_cast<double>(450.0f)));
            if (static_cast<double>(num10) > static_cast<double>(900.0f)) {
                num10 = 900.0f;
            }
            num9 = static_cast<float>((static_cast<double>(require(Team::team_formationCenterPos())->z_) -
                                       static_cast<double>(450.0f)));
            num10 = (((require(Team::team_formationCenterPos())->z_ + num10)) / 2.0f);
            num9 = (((require(Team::team_formationCenterPos())->z_ + num9)) / 2.0f);
        } else {
            num10 = static_cast<float>((static_cast<double>(require(Team::team_formationCenterPos())->z_) +
                                        static_cast<double>(450.0f)));
            if (static_cast<double>(num10) > static_cast<double>(900.0f)) {
                num10 = 900.0f;
            }
            num9 = static_cast<float>((static_cast<double>(require(Team::team_formationCenterPos())->z_) -
                                       static_cast<double>(450.0f)));
        }
        pls::cs::Ref<Team> team = require(udat_)->teams_.get_Item(pls::cs::sub_i32(1, team_id_));
        if (team_id_ == 0) {
            pls::cs::Single num11 = static_cast<float>(([&]() -> double {
                auto cs_left = static_cast<double>(require(team)->fPos_[1]);
                auto cs_right = static_cast<double>(
                    (static_cast<double>(require(team)->fPos_[3]) / static_cast<double>(2.0f)));
                return (cs_left - cs_right);
            }()));
            if (static_cast<double>(num10) > static_cast<double>(num11)) {
                num10 = num11;
            }
        } else {
            pls::cs::Single num12 = static_cast<float>(([&]() -> double {
                auto cs_left = static_cast<double>(require(team)->fPos_[1]);
                auto cs_right = static_cast<double>(
                    (static_cast<double>(require(team)->fPos_[3]) / static_cast<double>(2.0f)));
                return (cs_left + cs_right);
            }()));
            if (static_cast<double>(num10) < static_cast<double>(num12)) {
                num10 = num12;
            }
        }
        {
            auto cs_target = fPos_;
            auto cs_index = 3;
            auto cs_value =
                static_cast<float>(generated::java::lang::JMath::Abs(static_cast<float>((num9 - num10))));
            cs_target.set_Item(cs_index, cs_value);
        }
        fPos_[1] = static_cast<float>((((num9 + num10)) / 2.0f));
    }
    pls::cs::Int32 num13 = 30;
    if (team_id_ == 0) {
        if (static_cast<double>(([&]() -> double {
                auto cs_left = static_cast<double>(fPos_[1]);
                auto cs_right =
                    static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)));
                return (cs_left - cs_right);
            }())) < static_cast<double>(-900.0f)) {
            fPos_[1] = static_cast<float>(
                (static_cast<double>(-900.0f) +
                 static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)))));
        }
        if (static_cast<double>(
                (static_cast<double>(([&]() -> double {
                     auto cs_left = static_cast<double>(fPos_[1]);
                     auto cs_right =
                         static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)));
                     return (cs_left + cs_right);
                 }())) +
                 static_cast<double>(static_cast<float>(num13)))) > static_cast<double>(900.0f)) {
            fPos_[1] = static_cast<float>(
                (static_cast<double>(
                     (static_cast<double>(900.0f) -
                      static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f))))) -
                 static_cast<double>(static_cast<float>(num13))));
        }
    } else {
        if (static_cast<double>(
                (static_cast<double>(([&]() -> double {
                     auto cs_left = static_cast<double>(fPos_[1]);
                     auto cs_right =
                         static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)));
                     return (cs_left - cs_right);
                 }())) -
                 static_cast<double>(static_cast<float>(num13)))) < static_cast<double>(-900.0f)) {
            fPos_[1] = static_cast<float>(
                (static_cast<double>(
                     (static_cast<double>(-900.0f) +
                      static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f))))) +
                 static_cast<double>(static_cast<float>(num13))));
        }
        if (static_cast<double>(([&]() -> double {
                auto cs_left = static_cast<double>(fPos_[1]);
                auto cs_right =
                    static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)));
                return (cs_left + cs_right);
            }())) > static_cast<double>(900.0f)) {
            fPos_[1] = static_cast<float>(
                (static_cast<double>(900.0f) -
                 static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)))));
        }
    }
    pls::cs::Single num14 = 0.0f;
    num14 =
        static_cast<float>(GameUtil::RateConvert_3(require(Team::team_formationCenterPos())->z_,
                                                   static_cast<float>(-900.0f), 900.0f, 0.0f, 100.0f, true));
    pls::cs::Single num15 = 0.0f;
    pls::cs::Single num16 = static_cast<float>(
        (static_cast<double>(
             (static_cast<double>(generated::java::lang::JMath::Abs(static_cast<float>(([&]() -> double {
                  auto cs_left = static_cast<double>(require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->x_);
                  auto cs_right = static_cast<double>(require(Map::COAT_GOAL1_GLOBALPOS().get_Item(0))->x_);
                  return (cs_left - cs_right);
              }())))) *
              static_cast<double>(90.0f))) /
         static_cast<double>(100.0f)));
    if (Team::ChWhichChargeTern()) {
        num16 = static_cast<float>((
            static_cast<double>((
                static_cast<double>(generated::java::lang::JMath::Abs(static_cast<float>(([&]() -> double {
                    auto cs_left = static_cast<double>(require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->x_);
                    auto cs_right = static_cast<double>(require(Map::COAT_GOAL1_GLOBALPOS().get_Item(0))->x_);
                    return (cs_left - cs_right);
                }())))) *
                static_cast<double>(120.0f))) /
            static_cast<double>(100.0f)));
    }
    if ((static_cast<double>(num14) < static_cast<double>(50.0f))) {
        num15 = static_cast<float>(GameUtil::RateConvert_3(num14, 5.0f, 30.0f, num16, 900.0f, true));
    } else {
        num15 = static_cast<float>(GameUtil::RateConvert_3(num14, 70.0f, 95.0f, 900.0f, num16, true));
    }
    fPos_[0] = 0.0f;
    fPos_[2] = num15;
    for (pls::cs::Int32 j = 0; j < (players_).length(); ++j) {
        {
            auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
            pls::cs::Ref<Player> cs_arg0 = players_.get_Item(j);
            pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> cs_arg1 =
                require(players_.get_Item(j))->formationGo_;
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->SetPosFPos(cs_arg0, cs_arg1);
        }
    }
    ([&]() {
        auto cs_target = frect_pos.get_Item(0);
        auto cs_value = static_cast<float>(([&]() -> double {
            auto cs_left = static_cast<double>(fPos_[1]);
            auto cs_right = static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)));
            return (cs_left + cs_right);
        }()));
        require(cs_target)->z_ = cs_value;
        return cs_value;
    }());
    ([&]() {
        auto cs_target = frect_pos.get_Item(1);
        auto cs_value = static_cast<float>(([&]() -> double {
            auto cs_left = static_cast<double>(fPos_[1]);
            auto cs_right = static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)));
            return (cs_left + cs_right);
        }()));
        require(cs_target)->z_ = cs_value;
        return cs_value;
    }());
    ([&]() {
        auto cs_target = frect_pos.get_Item(2);
        auto cs_value = static_cast<float>(([&]() -> double {
            auto cs_left = static_cast<double>(fPos_[1]);
            auto cs_right = static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)));
            return (cs_left - cs_right);
        }()));
        require(cs_target)->z_ = cs_value;
        return cs_value;
    }());
    ([&]() {
        auto cs_target = frect_pos.get_Item(3);
        auto cs_value = static_cast<float>(([&]() -> double {
            auto cs_left = static_cast<double>(fPos_[1]);
            auto cs_right = static_cast<double>((static_cast<double>(fPos_[3]) / static_cast<double>(2.0f)));
            return (cs_left - cs_right);
        }()));
        require(cs_target)->z_ = cs_value;
        return cs_value;
    }());
}

// M:game.Team.SetPositionKickOff
void Team::SetPositionKickOff() {
    Team::ensure_initialized();

    fPos_[0] = 0.0f;
    fPos_[1] = static_cast<float>(
        pls::cs::conv_i32(((static_cast<double>(-450.0f) +
                            static_cast<double>((static_cast<double>(900.0f) *
                                                 static_cast<double>(static_cast<float>(team_id_))))))));
    fPos_[2] = 900.0f;
    fPos_[3] = 720.0f;
    for (pls::cs::Int32 i = 0; i < (players_).length(); ++i) {
        require(players_.get_Item(i))->Clear();
        {
            auto cs_receiver = static_cast<pls::cs::Ref<Team>>(this);
            pls::cs::Ref<Player> cs_arg0 = players_.get_Item(i);
            pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> cs_arg1 =
                require(players_.get_Item(i))->pos_;
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->SetPosFPos(cs_arg0, cs_arg1);
        }
        if (team_id_ == 0) {
            require(players_.get_Item(i))->direct_ = 0;
        } else {
            require(players_.get_Item(i))->direct_ = 2;
        }
    }
    require(require(udat_)->ball_)->SetStop();
    require(require(require(udat_)->ball_)->pos_)->Set(0.0f, 0.0f, 0.0f);
    {
        auto cs_target = require(udat_)->ball_;
        auto cs_value = generated::kairo::unity::util::BitUtil::Off(require(require(udat_)->ball_)->flag_, 1);
        require(cs_target)->flag_ = cs_value;
    }
    Camera::ConvertGlobalToScreen(require(require(udat_)->ball_)->pos_,
                                  require(require(udat_)->ball_)->screen_pos_);
    {
        auto cs_target = Camera::pos();
        auto cs_value = static_cast<float>(require(require(udat_)->ball_)->screen_pos_[0]);
        require(cs_target)->x_ = cs_value;
    }
    {
        auto cs_target = Camera::pos();
        auto cs_value = static_cast<float>(require(require(udat_)->ball_)->screen_pos_[1]);
        require(cs_target)->y_ = cs_value;
    }
    if (require(require(udat_)->gm_)->gameState_ == team_id_) {
        if (team_id_ == 0) {
            {
                auto cs_receiver = static_cast<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>(
                    require(players_.get_Item(pls::cs::sub_i32((players_).length(), 1)))->pos_);
                float cs_arg0 = require(Team::FORMATION_KICKOFF().get_Item(0))->x_;
                float cs_arg1 = 0.0f;
                float cs_arg2 = require(Team::FORMATION_KICKOFF().get_Item(0))->z_;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->Set(cs_arg0, cs_arg1, cs_arg2);
            }
            if (require(players_.get_Item(pls::cs::sub_i32((players_).length(), 2)))->formation_[0] >= 50) {
                {
                    auto cs_receiver =
                        static_cast<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>(
                            require(players_.get_Item(pls::cs::sub_i32((players_).length(), 2)))->pos_);
                    float cs_arg0 = require(Team::FORMATION_KICKOFF().get_Item(1))->x_;
                    float cs_arg1 = 0.0f;
                    float cs_arg2 = require(Team::FORMATION_KICKOFF().get_Item(1))->z_;
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->Set(cs_arg0, cs_arg1, cs_arg2);
                }
            } else {
                {
                    auto cs_receiver =
                        static_cast<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>(
                            require(players_.get_Item(pls::cs::sub_i32((players_).length(), 2)))->pos_);
                    float cs_arg0 =
                        static_cast<float>((-((require(Team::FORMATION_KICKOFF().get_Item(1))->x_))));
                    float cs_arg1 = 0.0f;
                    float cs_arg2 = require(Team::FORMATION_KICKOFF().get_Item(1))->z_;
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->Set(cs_arg0, cs_arg1, cs_arg2);
                }
            }
        } else {
            {
                auto cs_receiver = static_cast<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>(
                    require(players_.get_Item(pls::cs::sub_i32((players_).length(), 1)))->pos_);
                float cs_arg0 = require(Team::FORMATION_KICKOFF().get_Item(0))->x_;
                float cs_arg1 = 0.0f;
                float cs_arg2 = static_cast<float>((-((require(Team::FORMATION_KICKOFF().get_Item(0))->z_))));
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->Set(cs_arg0, cs_arg1, cs_arg2);
            }
            if (require(players_.get_Item(pls::cs::sub_i32((players_).length(), 2)))->formation_[0] <= 50) {
                {
                    auto cs_receiver =
                        static_cast<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>(
                            require(players_.get_Item(pls::cs::sub_i32((players_).length(), 2)))->pos_);
                    float cs_arg0 = require(Team::FORMATION_KICKOFF().get_Item(1))->x_;
                    float cs_arg1 = 0.0f;
                    float cs_arg2 =
                        static_cast<float>((-((require(Team::FORMATION_KICKOFF().get_Item(1))->z_))));
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->Set(cs_arg0, cs_arg1, cs_arg2);
                }
            } else {
                {
                    auto cs_receiver =
                        static_cast<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>(
                            require(players_.get_Item(pls::cs::sub_i32((players_).length(), 2)))->pos_);
                    float cs_arg0 =
                        static_cast<float>((-((require(Team::FORMATION_KICKOFF().get_Item(1))->x_))));
                    float cs_arg1 = 0.0f;
                    float cs_arg2 =
                        static_cast<float>((-((require(Team::FORMATION_KICKOFF().get_Item(1))->z_))));
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->Set(cs_arg0, cs_arg1, cs_arg2);
                }
            }
        }
        {
            auto cs_receiver = static_cast<pls::cs::Ref<Ball>>(require(udat_)->ball_);
            pls::cs::Ref<Player> cs_arg0 = players_.get_Item(pls::cs::sub_i32((players_).length(), 1));
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->ReceiveBall(cs_arg0);
        }
    } else {
    }
}

// M:game.Team.SetPositionThrowIn
void Team::SetPositionThrowIn() {
    Team::ensure_initialized();

    if (require(require(udat_)->gm_)->gameState_ == team_id_) {
        pls::cs::Int32 num = pls::cs::Int32{};
        pls::cs::Int32 num2 = pls::cs::Int32{};
        if (team_id_ == 0) {
            if (((static_cast<double>(require(require(require(udat_)->ball_)->lineOutPos_)->x_) <
                  static_cast<double>(0.0f)))) {
                num = 0;
            } else {
                num = 100;
            }
            num2 = pls::cs::conv_i32(
                GameUtil::RateConvert_3(require(require(require(udat_)->ball_)->lineOutPos_)->z_,
                                        static_cast<float>(-900.0f), 900.0f, 0.0f, 100.0f, true));
        } else {
            if (((static_cast<double>(require(require(require(udat_)->ball_)->lineOutPos_)->x_) >
                  static_cast<double>(0.0f)))) {
                num = 0;
            } else {
                num = 100;
            }
            num2 = pls::cs::conv_i32(
                GameUtil::RateConvert_3(require(require(require(udat_)->ball_)->lineOutPos_)->z_, 900.0f,
                                        static_cast<float>(-900.0f), 0.0f, 100.0f, true));
        }
        pls::cs::Int32 num3 = 2147483647 /* Int32.MaxValue */;
        pls::cs::Int32 num4 = 1;
        for (pls::cs::Int32 i = 1; i < (players_).length(); ++i) {
            pls::cs::Ref<Player> player = players_.get_Item(i);
            pls::cs::Int32 num5 = ([&]() -> std::int32_t {
                auto cs_left = ([&]() -> std::int32_t {
                    auto cs_left = ((num - require(player)->formation_[0]));
                    auto cs_right = ((num - require(player)->formation_[0]));
                    return pls::cs::mul_i32(cs_left, cs_right);
                }());
                auto cs_right = ([&]() -> std::int32_t {
                    auto cs_left = ((num2 - require(player)->formation_[1]));
                    auto cs_right = ((num2 - require(player)->formation_[1]));
                    return pls::cs::mul_i32(cs_left, cs_right);
                }());
                return pls::cs::add_i32(cs_left, cs_right);
            }());
            if (num3 > num5) {
                num3 = num5;
                num4 = i;
            }
        }
        {
            auto cs_target = players_.get_Item(num4);
            auto cs_value =
                generated::kairo::unity::util::BitUtil::On(require(players_.get_Item(num4))->flag_, 256);
            require(cs_target)->flag_ = cs_value;
        }
        if (static_cast<double>(require(require(require(udat_)->ball_)->lineOutPos_)->x_) <
            static_cast<double>(0.0f)) {
            {
                auto cs_receiver = static_cast<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>(
                    require(players_.get_Item(num4))->pos_);
                float cs_arg0 = static_cast<float>(-470.0f);
                float cs_arg1 = 0.0f;
                float cs_arg2 = require(require(require(udat_)->ball_)->lineOutPos_)->z_;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->Set(cs_arg0, cs_arg1, cs_arg2);
            }
        } else {
            {
                auto cs_receiver = static_cast<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>(
                    require(players_.get_Item(num4))->pos_);
                float cs_arg0 = 470.0f;
                float cs_arg1 = 0.0f;
                float cs_arg2 = require(require(require(udat_)->ball_)->lineOutPos_)->z_;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->Set(cs_arg0, cs_arg1, cs_arg2);
            }
        }
        {
            auto cs_target = require(udat_)->ball_;
            auto cs_value =
                generated::kairo::unity::util::BitUtil::Off(require(require(udat_)->ball_)->flag_, 1);
            require(cs_target)->flag_ = cs_value;
        }
        if (static_cast<double>(require(require(require(udat_)->ball_)->lineOutPos_)->x_) >
            static_cast<double>(0.0f)) {
            require(players_.get_Item(num4))->direct_ = 3;
        } else {
            require(players_.get_Item(num4))->direct_ = 1;
        }
        {
            auto cs_receiver = static_cast<pls::cs::Ref<Ball>>(require(udat_)->ball_);
            pls::cs::Ref<Player> cs_arg0 = players_.get_Item(num4);
            bool cs_arg1 = true;
            if (!cs_receiver) {
                throw pls::cs::NullReferenceException();
            }
            cs_receiver->ReceiveBall(cs_arg0, cs_arg1);
        }
        require(require(udat_)->ball_)->SetStop();
    }
}

// M:game.Team.SetPositionGoalKick
void Team::SetPositionGoalKick() {
    Team::ensure_initialized();

    if (require(require(udat_)->gm_)->gameState_ == team_id_) {
        {
            auto cs_target = players_.get_Item(0);
            auto cs_value =
                generated::kairo::unity::util::BitUtil::On(require(players_.get_Item(0))->flag_, 512);
            require(cs_target)->flag_ = cs_value;
        }
        if (team_id_ == 0) {
            {
                auto cs_receiver = static_cast<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>(
                    require(players_.get_Item(0))->pos_);
                pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> cs_arg0 =
                    Map::COAT_GOAL1_IN_GLOBALPOS().get_Item(0);
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->Set(cs_arg0);
            }
        } else {
            {
                auto cs_receiver = static_cast<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>(
                    require(players_.get_Item(0))->pos_);
                pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D> cs_arg0 =
                    Map::COAT_GOAL2_IN_GLOBALPOS().get_Item(0);
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->Set(cs_arg0);
            }
        }
        if (team_id_ == 0) {
            require(players_.get_Item(0))->direct_ = 0;
        } else {
            require(players_.get_Item(0))->direct_ = 2;
        }
        require(require(udat_)->ball_)->SetStop();
        if (team_id_ == 0) {
            {
                auto cs_receiver = static_cast<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>(
                    require(require(udat_)->ball_)->pos_);
                float cs_arg0 = require(Map::COAT_GOAL1_IN_GLOBALPOS().get_Item(0))->x_;
                float cs_arg1 = 0.0f;
                float cs_arg2 = require(Map::COAT_GOAL1_IN_GLOBALPOS().get_Item(1))->z_;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->Set(cs_arg0, cs_arg1, cs_arg2);
            }
        } else {
            {
                auto cs_receiver = static_cast<pls::cs::Ref<generated::kairo::unity::m3d4::util3d::Vector3D>>(
                    require(require(udat_)->ball_)->pos_);
                float cs_arg0 = require(Map::COAT_GOAL2_IN_GLOBALPOS().get_Item(0))->x_;
                float cs_arg1 = 0.0f;
                float cs_arg2 = require(Map::COAT_GOAL2_IN_GLOBALPOS().get_Item(1))->z_;
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                cs_receiver->Set(cs_arg0, cs_arg1, cs_arg2);
            }
        }
        {
            auto cs_target = require(udat_)->ball_;
            auto cs_value =
                generated::kairo::unity::util::BitUtil::Off(require(require(udat_)->ball_)->flag_, 1);
            require(cs_target)->flag_ = cs_value;
        }
    }
}

// M:game.Team.SetPositionConnerKick
void Team::SetPositionConnerKick() {
    Team::ensure_initialized();

    if (require(require(udat_)->gm_)->gameState_ == team_id_) {
        pls::cs::Int32 num = 8;
        {
            auto cs_target = players_.get_Item(num);
            auto cs_value =
                generated::kairo::unity::util::BitUtil::On(require(players_.get_Item(num))->flag_, 1024);
            require(cs_target)->flag_ = cs_value;
        }
        if (team_id_ == 0) {
            if (static_cast<double>(require(require(require(udat_)->ball_)->lineOutPos_)->x_) <
                static_cast<double>(0.0f)) {
                require(require(players_.get_Item(num))->pos_)
                    ->Set(static_cast<float>(-480.0f), 0.0f, 930.0f);
            } else {
                require(require(players_.get_Item(num))->pos_)->Set(480.0f, 0.0f, 930.0f);
            }
        } else if (static_cast<double>(require(require(require(udat_)->ball_)->lineOutPos_)->x_) <
                   static_cast<double>(0.0f)) {
            require(require(players_.get_Item(num))->pos_)
                ->Set(static_cast<float>(-480.0f), 0.0f, static_cast<float>(-930.0f));
        } else {
            require(require(players_.get_Item(num))->pos_)->Set(480.0f, 0.0f, static_cast<float>(-930.0f));
        }
        if (team_id_ == 0) {
            if (static_cast<double>(require(require(require(udat_)->ball_)->lineOutPos_)->x_) <
                static_cast<double>(0.0f)) {
                require(players_.get_Item(num))->direct_ = 1;
            } else {
                require(players_.get_Item(num))->direct_ = 3;
            }
        } else if (static_cast<double>(require(require(require(udat_)->ball_)->lineOutPos_)->x_) <
                   static_cast<double>(0.0f)) {
            require(players_.get_Item(num))->direct_ = 1;
        } else {
            require(players_.get_Item(num))->direct_ = 3;
        }
        require(require(udat_)->ball_)->SetStop();
        if (team_id_ == 0) {
            if (static_cast<double>(require(require(require(udat_)->ball_)->lineOutPos_)->x_) <
                static_cast<double>(0.0f)) {
                require(require(require(udat_)->ball_)->pos_)->Set(static_cast<float>(-450.0f), 0.0f, 900.0f);
            } else {
                require(require(require(udat_)->ball_)->pos_)->Set(450.0f, 0.0f, 900.0f);
            }
        } else if (static_cast<double>(require(require(require(udat_)->ball_)->lineOutPos_)->x_) <
                   static_cast<double>(0.0f)) {
            require(require(require(udat_)->ball_)->pos_)
                ->Set(static_cast<float>(-450.0f), 0.0f, static_cast<float>(-900.0f));
        } else {
            require(require(require(udat_)->ball_)->pos_)->Set(450.0f, 0.0f, static_cast<float>(-900.0f));
        }
        {
            auto cs_target = require(udat_)->ball_;
            auto cs_value =
                generated::kairo::unity::util::BitUtil::Off(require(require(udat_)->ball_)->flag_, 1);
            require(cs_target)->flag_ = cs_value;
        }
        Team::Amefto_start();
    }
}

// M:game.Team.SetGoalState
void Team::SetGoalState() {
    Team::ensure_initialized();

    if (require(require(udat_)->gm_)->gameState_ == pls::cs::sub_i32(1, team_id_)) {
        if ((((!(require(require(udat_)->gm_)->halfTime)) && (team_id_ == 0))) ||
            ((require(require(udat_)->gm_)->halfTime && (team_id_ == 1)))) {
            {
                auto cs_receiver =
                    static_cast<pls::cs::Ref<generated::java::util::Vector_2<pls::cs::Ref<pls::cs::Object>>>>(
                        require(require(udat_)->gm_)->scorerListUserTeam);
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(generated::java::lang::JInteger::create(
                    require(players_.get_Item(lastKickeer_))->pData_id_));
                if (!cs_receiver) {
                    throw pls::cs::NullReferenceException();
                }
                generated::java::util::Vector_2_AddElement(cs_receiver, cs_arg0);
            }
            require(require(apdat_)->pData_.get_Item(require(players_.get_Item(lastKickeer_))->pData_id_))
                ->SetActScore(5);
        }
        if (!(require(require(udat_)->gm_)->halfTime)) {
            {
                auto cs_array = require(require(udat_)->gm_)->score_;
                auto cs_index = team_id_;
                auto cs_old = cs_array.at(cs_index);
                auto cs_new = pls::cs::add_i32(cs_old, 1);
                cs_array.at(cs_index) = cs_new;
            }
        } else {
            {
                auto cs_array = require(require(udat_)->gm_)->score_;
                auto cs_index = pls::cs::sub_i32(1, team_id_);
                auto cs_old = cs_array.at(cs_index);
                auto cs_new = pls::cs::add_i32(cs_old, 1);
                cs_array.at(cs_index) = cs_new;
            }
        }
        pls::cs::Int32 num = pls::cs::add_i32(GameUtil::Random(4), 1);
        for (pls::cs::Int32 i = 0; i < (players_).length(); ++i) {
            pls::cs::Ref<Player> player = players_.get_Item(i);
            if (i == lastKickeer_) {
                {
                    auto cs_target = player;
                    auto cs_value = generated::kairo::unity::util::BitUtil::On(require(player)->flag_, 2048);
                    require(cs_target)->flag_ = cs_value;
                }
                if (num == 0) {

                } else if ((num == 1)) {
                    require(require(player)->goalStatePos_)->x_ = static_cast<float>(-450.0f);
                    require(require(player)->goalStatePos_)->z_ = require(require(player)->pos_)->z_;
                } else if ((num == 2)) {
                    require(require(player)->goalStatePos_)->x_ = 450.0f;
                    require(require(player)->goalStatePos_)->z_ = require(require(player)->pos_)->z_;
                } else if ((num == 3)) {
                    require(require(player)->goalStatePos_)->x_ = static_cast<float>(-450.0f);
                    require(require(player)->goalStatePos_)->z_ = static_cast<float>(
                        (static_cast<double>(900.0f) -
                         static_cast<double>((static_cast<double>(1800.0f) *
                                              static_cast<double>(static_cast<float>(team_id_))))));
                } else if ((num == 4)) {
                    require(require(player)->goalStatePos_)->x_ = 450.0f;
                    require(require(player)->goalStatePos_)->z_ = static_cast<float>(
                        (static_cast<double>(900.0f) -
                         static_cast<double>((static_cast<double>(1800.0f) *
                                              static_cast<double>(static_cast<float>(team_id_))))));
                }
            } else {
                {
                    auto cs_target = player;
                    auto cs_value = generated::kairo::unity::util::BitUtil::On(require(player)->flag_, 4096);
                    require(cs_target)->flag_ = cs_value;
                }
                ([&]() {
                    auto cs_target = require(player)->goalStatePos_;
                    auto cs_value = static_cast<float>(([&]() -> std::int32_t {
                        std::int32_t cs_arg0 = GameUtil::Random(100);
                        std::int32_t cs_arg1 = 0;
                        std::int32_t cs_arg2 = 99;
                        std::int32_t cs_arg3 =
                            Team::GOAL_GLAD_AROUND_POS().get_Item(team_id_).get_Item(num)[0];
                        std::int32_t cs_arg4 =
                            Team::GOAL_GLAD_AROUND_POS().get_Item(team_id_).get_Item(num)[1];
                        bool cs_arg5 = true;
                        return GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                    }()));
                    require(cs_target)->x_ = cs_value;
                    return cs_value;
                }());
                ([&]() {
                    auto cs_target = require(player)->goalStatePos_;
                    auto cs_value = static_cast<float>(([&]() -> std::int32_t {
                        std::int32_t cs_arg0 = GameUtil::Random(100);
                        std::int32_t cs_arg1 = 0;
                        std::int32_t cs_arg2 = 99;
                        std::int32_t cs_arg3 =
                            Team::GOAL_GLAD_AROUND_POS().get_Item(team_id_).get_Item(num)[2];
                        std::int32_t cs_arg4 =
                            Team::GOAL_GLAD_AROUND_POS().get_Item(team_id_).get_Item(num)[3];
                        bool cs_arg5 = true;
                        return GameUtil::RateConvert(cs_arg0, cs_arg1, cs_arg2, cs_arg3, cs_arg4, cs_arg5);
                    }()));
                    require(cs_target)->z_ = cs_value;
                    return cs_value;
                }());
            }
        }
    } else {
        for (pls::cs::Int32 j = 0; j < (players_).length(); ++j) {
            pls::cs::Ref<Player> player2 = players_.get_Item(j);
            {
                auto cs_target = player2;
                auto cs_value = generated::kairo::unity::util::BitUtil::On(require(player2)->flag_, 8192);
                require(cs_target)->flag_ = cs_value;
            }
            require(player2)->AddCommandChangeSeb(12);
        }
    }
}

// M:game.Team.ChWhichChargeTern
bool Team::ChWhichChargeTern() {
    Team::ensure_initialized();

    bool result = true;
    if (is_null(require(require(udat_)->ball_)->lastOwner_)) {
        result = false;
    } else if (is_null(require(require(udat_)->ball_)->owner_)) {
        if (require(require(require(udat_)->ball_)->lastOwner_)->team_id_ != team_id_) {
            result = false;
        }
    } else if (require(require(require(udat_)->ball_)->owner_)->team_id_ != team_id_) {
        result = false;
    }
    if (require(require(udat_)->gm_)->state_ == 4) {
        if ((require(require(udat_)->gm_)->gameState_ == team_id_)) {
            result = true;
        } else {
            result = false;
        }
    }
    return result;
}

// M:game.Team.ChPAreaLineOver
bool Team::ChPAreaLineOver() {
    Team::ensure_initialized();

    if (team_id_ == 0) {
        if ([&]() -> bool {
                auto cs_left = static_cast<double>(require(amefto_goalPos_.get_Item(0))->z_);
                auto cs_right = static_cast<double>(require(Map::COAT_GOAL2_GLOBALPOS().get_Item(1))->z_);
                return (cs_left >= cs_right);
            }()) {
            return true;
        }
    } else if ([&]() -> bool {
                   auto cs_left = static_cast<double>(require(amefto_goalPos_.get_Item(0))->z_);
                   auto cs_right = static_cast<double>(require(Map::COAT_GOAL1_GLOBALPOS().get_Item(1))->z_);
                   return (cs_left <= cs_right);
               }()) {
        return true;
    }
    return false;
}
} // namespace game
} // namespace pls::game
