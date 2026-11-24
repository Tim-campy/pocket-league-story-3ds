// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "form.FormManager.hpp"
#include "generated/java.io.ByteArrayInputStream.hpp"
#include "generated/java.io.ByteArrayOutputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JString.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.SecureInt.hpp"
#include "generated/kairo.unity.util.SecureProperty.hpp"
#include "generated/kairo.unity.util.SecureString.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "java.net.URLEncoder.hpp"
#include "kairo.unity.system.KairoBase.hpp"
#include "native.AppPlugin.hpp"
#include "system.KairoText.hpp"
#include "system.form.FriendForm.hpp"
#include "system.friend.ui.Friend.hpp"
#include "system.friend.ui.FriendData.hpp"
#include "system.friend.ui.FriendPlayTimeData.hpp"
#include "generated/java.util.JTool_templates.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using LongArray = pls::cs::Array<pls::cs::Int64>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace system::friend_::ui {

void FriendData::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(INTRODUCTION_APPLY_SUBJECT, visitor);
    pls::cs::trace_value(INTRODUCTION_APPLY_TEXT, visitor);
    pls::cs::trace_value(INTRODUCTION_SUBJECT, visitor);
    pls::cs::trace_value(INTRODUCTION_TEXT, visitor);
    pls::cs::trace_value(friSave_, visitor);
    pls::cs::trace_value(friendList_, visitor);
    pls::cs::trace_value(applyList_, visitor);
    pls::cs::trace_value(newFriendList_, visitor);
    pls::cs::trace_value(randomFriend_, visitor);
    pls::cs::trace_value(previousUpdateMinute_, visitor);
    pls::cs::trace_value(friendHistory_, visitor);
}

static pls::cs::Array<ByteArray> FriendData_defFriSaveB__storage{};

static IntArray FriendData_defFriSaveI__storage{};

static LongArray FriendData_defFriSaveL__storage{};

static pls::cs::Array<pls::cs::Ref<kl_unity_util::SecureProperty>> FriendData_defFriSaveP__storage{};

static StringArray FriendData_defFriSaveS__storage{};

static pls::cs::Ref<FriendData> FriendData_instance__storage{};

static PLS_NOINLINE void cs_init_2d2e25a6914f7709_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(FriendData_defFriSaveB__storage, visitor);
        pls::cs::trace_value(FriendData_defFriSaveI__storage, visitor);
        pls::cs::trace_value(FriendData_defFriSaveL__storage, visitor);
        pls::cs::trace_value(FriendData_defFriSaveP__storage, visitor);
        pls::cs::trace_value(FriendData_defFriSaveS__storage, visitor);
        pls::cs::trace_value(FriendData_instance__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("system.friend.ui.FriendData", flag, []() {
        FriendData_defFriSaveP__storage =
            pls::cs::evaluate_type_initializer_field("F:system.friend.ui.FriendData.defFriSaveP_", [&]() {
                return pls::cs::Array<pls::cs::Ref<kl_unity_util::SecureProperty>>::make(0);
            });
        FriendData_defFriSaveI__storage = pls::cs::evaluate_type_initializer_field(
            "F:system.friend.ui.FriendData.defFriSaveI_", [&]() { return IntArray::make(6); });
        FriendData_defFriSaveL__storage = pls::cs::evaluate_type_initializer_field(
            "F:system.friend.ui.FriendData.defFriSaveL_", [&]() { return LongArray::make(0); });
        FriendData_defFriSaveS__storage =
            pls::cs::evaluate_type_initializer_field("F:system.friend.ui.FriendData.defFriSaveS_", [&]() {
                return StringArray::from({pls::cs::String(u"")});
            });
        FriendData_defFriSaveB__storage =
            pls::cs::evaluate_type_initializer_field("F:system.friend.ui.FriendData.defFriSaveB_", [&]() {
                return PLS_API(
                    kl_java_util::JTool::MakeArray<pls::cs::Array<ByteArray>>(IntArray::from({2, 0})));
            });
    });
}

void FriendData::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_2d2e25a6914f7709_slow(flag);
}

pls::cs::Array<ByteArray>& FriendData::defFriSaveB_() {
    FriendData::ensure_initialized();
    return FriendData_defFriSaveB__storage;
}

IntArray& FriendData::defFriSaveI_() {
    FriendData::ensure_initialized();
    return FriendData_defFriSaveI__storage;
}

LongArray& FriendData::defFriSaveL_() {
    FriendData::ensure_initialized();
    return FriendData_defFriSaveL__storage;
}

pls::cs::Array<pls::cs::Ref<kl_unity_util::SecureProperty>>& FriendData::defFriSaveP_() {
    FriendData::ensure_initialized();
    return FriendData_defFriSaveP__storage;
}

StringArray& FriendData::defFriSaveS_() {
    FriendData::ensure_initialized();
    return FriendData_defFriSaveS__storage;
}

pls::cs::Ref<FriendData>& FriendData::instance_() {
    FriendData::ensure_initialized();
    return FriendData_instance__storage;
}

// M:system.friend.ui.FriendData.#ctor
void FriendData::create_init(pls::cs::Ref<FriendData> self) {
    FriendData::ensure_initialized();
    kl_cfg::Config::ensure_initialized();
    self->FRIEND_MAX = 5;
    self->INTRODUCTION_APPLY_SUBJECT = KairoText::LT(literal(u"フレンド申請 お住まい夢物語"));
    self->INTRODUCTION_APPLY_TEXT =
        KairoText::LT(literal(u"お住まい夢物語for Androidで\nフレンド申請したよ!\n承認してね。"));
    self->INTRODUCTION_SUBJECT = KairoText::LT(literal(u"フレンド申請 お住まい夢物語"));
    self->INTRODUCTION_TEXT = pls::cs::String::concat(
        ([&]() {
            auto cs_left = pls::cs::String::concat(
                KairoText::LT(literal(
                    u"お住まい夢物語for Androidをインストールして\nフレンドで\nID：「<0>」\nを探してね。\n\nDLはこっちだよ\n")),
                literal(u"http://kairopark.jp/friend/?gm="));
            auto cs_right = integer_string(kl_cfg::Config::PID());
            return pls::cs::String::concat(cs_left, cs_right);
        }()),
        literal(u"&dl=store"));
    self->PLAY_BONUS_INTERVAL_MINUTE = 40;
    self->PLAY_BONUS_MAX = 20;
    self->PLAY_NEW_FRIEND_BONUS = 7;
    self->friendList_ = kl_java_util::Vector::create();
    self->applyList_ = kl_java_util::Vector::create();
    self->newFriendList_ = kl_java_util::Vector::create();
    self->previousUpdateMinute_ = kl_unity_util::SecureInt::create(-1);
    self->friendHistory_ = kl_java_util::Vector::create();
    self->playTimeBegin_ = -1ll;
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.#ctor", game);
    {
        self->friSave_ = kl_unity_util::SecureProperty::create(
            FriendData::defFriSaveP_(), FriendData::defFriSaveI_(), FriendData::defFriSaveL_(),
            FriendData::defFriSaveS_(), FriendData::defFriSaveB_());
    }
}

// M:system.friend.ui.FriendData.GetInstance
pls::cs::Ref<FriendData> FriendData::GetInstance() {
    FriendData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.GetInstance", game);
    {
        return FriendData::instance_();
    }
}

// M:system.friend.ui.FriendData.Init
void FriendData::Init() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.Init", game);
    {
    }
}

// M:system.friend.ui.FriendData.Load(System.Byte[])
void FriendData::Load(ByteArray data) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.Load(System.Byte[])", game);
    {
        friSave_ = kl_unity_util::SecureProperty::create(
            FriendData::defFriSaveP_(), FriendData::defFriSaveI_(), FriendData::defFriSaveL_(),
            FriendData::defFriSaveS_(), FriendData::defFriSaveB_());
        PLS_API(require(friSave_)->Load(data));
        UnpackFriendBinalyData();
        {
            auto cs_target = require(friSave_)->ints;
            auto cs_index = 2;
            auto cs_value = kl_unity_util::SecureInt::create_2(require(friSave_)->ints.get_Item(4));
            cs_target.set_Item(cs_index, cs_value);
        }
    }
}

// M:system.friend.ui.FriendData.Write
ByteArray FriendData::Write() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.Write", game);
    {
        PackFriendBinalyData();
        return PLS_API(require(friSave_)->ToByteArray());
    }
}

// M:system.friend.ui.FriendData.NewGame(System.Boolean)
void FriendData::NewGame(bool take) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.NewGame(System.Boolean)", game);
    {
        InitializeData();
    }
}

// M:system.friend.ui.FriendData.LoadGame(System.Byte[])
void FriendData::LoadGame(ByteArray data) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.LoadGame(System.Byte[])", game);
    {
        InitializeData();
    }
}

// M:system.friend.ui.FriendData.WriteGame
ByteArray FriendData::WriteGame() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.WriteGame", game);
    {
        pls::cs::Ref<kl_io::ByteArrayOutputStream> byteArrayOutputStream =
            pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
        {
            auto cs_flow_280 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<ByteArray> {
                    {
                        byteArrayOutputStream = kl_io::ByteArrayOutputStream::create();
                        return pls::cs::flow_return(PLS_API(require(byteArrayOutputStream)->ToByteArray()));
                    }
                    return {};
                },
                [&]() {
                    if (!is_null(byteArrayOutputStream)) {
                        PLS_API(require(byteArrayOutputStream)->Close());
                    }
                    byteArrayOutputStream = pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
                });
            return cs_flow_280.value();
        }
    }
}

// M:system.friend.ui.FriendData.PackFriendBinalyData
void FriendData::PackFriendBinalyData() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.PackFriendBinalyData", game);
    {
        pls::cs::Ref<kl_io::ByteArrayOutputStream> byteArrayOutputStream =
            pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
        pls::cs::run_finally(
            [&]() {
                {
                    byteArrayOutputStream = kl_io::ByteArrayOutputStream::create();
                    PLS_API(kl_unity_util::StreamUtil::WriteInt(
                        static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream),
                        PLS_API(kl_java_util::Vector_2_Size(require(friendHistory_)))));
                    for (pls::cs::Int32 i = 0;
                         i < PLS_API(kl_java_util::Vector_2_Size(require(friendHistory_))); ++i) {
                        pls::cs::Ref<FriendPlayTimeData> friendPlayTimeData =
                            pls::cs::unbox<pls::cs::Ref<FriendPlayTimeData>>(
                                PLS_API(kl_java_util::Vector_2_ElementAt(require(friendHistory_), i)));
                        require(friendPlayTimeData)->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(friSave_)->bins;
                        auto cs_index = 0;
                        auto cs_value = PLS_API(require(byteArrayOutputStream)->ToByteArray());
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    PLS_API(require(byteArrayOutputStream)->Close());
                    byteArrayOutputStream = kl_io::ByteArrayOutputStream::create();
                    PLS_API(kl_unity_util::StreamUtil::WriteInt(
                        static_cast<pls::cs::Ref<kl_io::OutputStream>>(byteArrayOutputStream),
                        PLS_API(kl_java_util::Vector_2_Size(require(newFriendList_)))));
                    for (pls::cs::Int32 j = 0;
                         j < PLS_API(kl_java_util::Vector_2_Size(require(newFriendList_))); ++j) {
                        pls::cs::Ref<Friend> friend_ = pls::cs::unbox<pls::cs::Ref<Friend>>(
                            PLS_API(kl_java_util::Vector_2_ElementAt(require(newFriendList_), j)));
                        require(friend_)->Serialize(byteArrayOutputStream);
                    }
                    {
                        auto cs_target = require(friSave_)->bins;
                        auto cs_index = 1;
                        auto cs_value = PLS_API(require(byteArrayOutputStream)->ToByteArray());
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    PLS_API(require(byteArrayOutputStream)->Close());
                }
            },
            [&]() {
                if (!is_null(byteArrayOutputStream)) {
                    PLS_API(require(byteArrayOutputStream)->Close());
                }
                byteArrayOutputStream = pls::cs::Ref<kl_io::ByteArrayOutputStream>{};
            });
    }
}

// M:system.friend.ui.FriendData.UnpackFriendBinalyData
void FriendData::UnpackFriendBinalyData() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.UnpackFriendBinalyData", game);
    {
        pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream =
            pls::cs::Ref<kl_io::ByteArrayInputStream>{};
        if (([&]() {
                auto cs_left = pls::cs::box(require(friSave_)->bins[0]);
                auto cs_right = pls::cs::box(ByteArray{});
                return cs_left == cs_right;
            }()) ||
            (require(friSave_)->bins[0].length() == 0)) {
            return;
        }
        pls::cs::run_finally(
            [&]() {
                {
                    PLS_API(kl_java_util::Vector_2_Clear(require(friendHistory_)));
                    byteArrayInputStream = kl_io::ByteArrayInputStream::create(require(friSave_)->bins[0]);
                    if (PLS_API(require(byteArrayInputStream)->Available()) > 0) {
                        pls::cs::Int32 num =
                            PLS_API(kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream));
                        for (pls::cs::Int32 i = 0; i < num; ++i) {
                            pls::cs::Ref<FriendPlayTimeData> friendPlayTimeData =
                                FriendPlayTimeData::create();
                            require(friendPlayTimeData)->Deserialize(byteArrayInputStream);
                            PLS_API(kl_java_util::Vector_2_AddElement(require(friendHistory_),
                                                                      pls::cs::box(friendPlayTimeData)));
                        }
                    }
                    PLS_API(require(byteArrayInputStream)->Close());
                    PLS_API(kl_java_util::Vector_2_Clear(require(newFriendList_)));
                    byteArrayInputStream = kl_io::ByteArrayInputStream::create(require(friSave_)->bins[1]);
                    if (PLS_API(require(byteArrayInputStream)->Available()) > 0) {
                        pls::cs::Int32 num2 =
                            PLS_API(kl_unity_util::StreamUtil::ReadInt(byteArrayInputStream));
                        for (pls::cs::Int32 j = 0; j < num2; ++j) {
                            pls::cs::Ref<Friend> friend_ = Friend::create();
                            require(friend_)->Deserialize(byteArrayInputStream);
                            PLS_API(kl_java_util::Vector_2_AddElement(require(newFriendList_),
                                                                      pls::cs::box(friend_)));
                        }
                    }
                    PLS_API(require(byteArrayInputStream)->Close());
                }
            },
            [&]() {

            });
    }
}

// M:system.friend.ui.FriendData.CgiRegistFriend(System.String,System.Int64)
void FriendData::CgiRegistFriend(pls::cs::String name, pls::cs::Int64 minute) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.friend.ui.FriendData.CgiRegistFriend(System.String,System.Int64)", game);
    {
        pls::cs::String text = kairo::unity::system::KairoBase::MakeQueryString(literal(u"name"), name);
        pls::cs::String text2 = kairo::unity::system::KairoBase::MakeQueryString(
            literal(u"m"), ((minute == pls::cs::cast_integral<pls::cs::Int64>(-1)))
                               ? (pls::cs::String(u""))
                               : (PLS_API(kl_lang::JString::ValueOfLong(minute))));
        kairo::unity::system::KairoBase::Connect(pls::cs::String::concat(
            pls::cs::String::concat(literal(u"friend/regist_friend.php"), text), text2));
    }
}

// M:system.friend.ui.FriendData.CgiGetFriendList
pls::cs::Ref<kl_java_util::Vector> FriendData::CgiGetFriendList() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.CgiGetFriendList", game);
    {
        PLS_API(kl_java_util::Vector_2_RemoveAllElements(require(friendList_)));
        PLS_API(kl_java_util::Vector_2_RemoveAllElements(require(applyList_)));
        try {
            ByteArray array = kairo::unity::system::KairoBase::Connect(literal(u"friend/friend_get.php"));
            if (array.length() == 0) {
                return friendList_;
            }
            StringArray array2 = PLS_API(
                kl_unity_util::StringUtil::Split(PLS_API(kl_lang::JString::New(array)), literal(u",")));
            for (pls::cs::Int32 i = 0; i < array2.length(); ++i) {
                pls::cs::Ref<Friend> friend_ = Friend::create_2(array2[i]);
                if (PLS_API(require(require(friend_)->state_)->Get()) == 1) {
                    PLS_API(kl_java_util::Vector_2_AddElement(require(applyList_), pls::cs::box(friend_)));
                } else if (PLS_API(require(require(friend_)->state_)->Get()) == 3) {
                    PLS_API(kl_java_util::Vector_2_AddElement(require(friendList_), pls::cs::box(friend_)));
                }
            }
            return friendList_;
        } catch (const pls::cs::Exception& cs_caught_259) {
            auto ex = pls::cs::capture_exception(cs_caught_259);
            {
                PLS_API(kl_java_util::Vector_2_RemoveAllElements(require(friendList_)));
                PLS_API(kl_java_util::Vector_2_RemoveAllElements(require(applyList_)));
                pls::cs::throw_exception(ex);
            }
        }
    }
}

// M:system.friend.ui.FriendData.CgiSearchFriend(System.String)
pls::cs::Ref<Friend> FriendData::CgiSearchFriend(pls::cs::String friendId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.CgiSearchFriend(System.String)", game);
    {
        if (!CheckRegistFriend()) {
            throw pls::cs::Exception();
        }
        pls::cs::String text = kairo::unity::system::KairoBase::MakeQueryString(
            literal(u"friendid"), PLS_API(pls::cs::string_trim(friendId)));
        ByteArray array = kairo::unity::system::KairoBase::Connect(
            pls::cs::String::concat(literal(u"friend/friend_search.php"), text));
        if (array.length() == 0) {
            return pls::cs::Ref<Friend>{};
        }
        return Friend::create(array);
    }
}

// M:system.friend.ui.FriendData.CgiApplyFriend(System.String)
void FriendData::CgiApplyFriend(pls::cs::String friendId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.CgiApplyFriend(System.String)", game);
    {
        if (!CheckRegistFriend()) {
            throw pls::cs::Exception();
        }
        pls::cs::String text =
            kairo::unity::system::KairoBase::MakeQueryString(literal(u"friendid"), friendId);
        pls::cs::String text2 = kairo::unity::system::KairoBase::MakeQueryString(
            literal(u"max"), PLS_API(kl_lang::JString::ValueOfInt(FRIEND_MAX)));
        kairo::unity::system::KairoBase::Connect(pls::cs::String::concat(
            pls::cs::String::concat(literal(u"friend/friend_apply.php"), text), text2));
    }
}

// M:system.friend.ui.FriendData.CgiApproveFriend(System.String)
void FriendData::CgiApproveFriend(pls::cs::String friendId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.CgiApproveFriend(System.String)",
                     game);
    {
        if (!CheckRegistFriend()) {
            throw pls::cs::Exception();
        }
        pls::cs::String text =
            kairo::unity::system::KairoBase::MakeQueryString(literal(u"friendid="), friendId);
        pls::cs::String text2 = kairo::unity::system::KairoBase::MakeQueryString(
            literal(u"max"), PLS_API(kl_lang::JString::ValueOfInt(FRIEND_MAX)));
        kairo::unity::system::KairoBase::Connect(pls::cs::String::concat(
            pls::cs::String::concat(literal(u"friend/friend_approve.php"), text), text2));
    }
}

// M:system.friend.ui.FriendData.CgiRefuseFriend(System.String)
void FriendData::CgiRefuseFriend(pls::cs::String friendId) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.CgiRefuseFriend(System.String)", game);
    {
        if (!CheckRegistFriend()) {
            throw pls::cs::Exception();
        }
        pls::cs::String text =
            kairo::unity::system::KairoBase::MakeQueryString(literal(u"friendid="), friendId);
        kairo::unity::system::KairoBase::Connect(
            pls::cs::String::concat(literal(u"friend/friend_refuse.php"), text));
    }
}

// M:system.friend.ui.FriendData.CgiRandomFriend
pls::cs::Ref<Friend> FriendData::CgiRandomFriend() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.CgiRandomFriend", game);
    {
        if (!CheckRegistFriend()) {
            return pls::cs::Ref<Friend>{};
        }
        ByteArray array = kairo::unity::system::KairoBase::Connect(literal(u"friend/friend_random.php"));
        if (array.length() == 0) {
            return pls::cs::Ref<Friend>{};
        }
        return Friend::create(array);
    }
}

// M:system.friend.ui.FriendData.GetFriendName
pls::cs::String FriendData::GetFriendName() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.GetFriendName", game);
    {
        return PLS_API(
            kl_unity_util::SecureString::ToStringSecureStringStatic(require(friSave_)->strs.get_Item(0)));
    }
}

// M:system.friend.ui.FriendData.GetFriendID
pls::cs::String FriendData::GetFriendID() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.GetFriendID", game);
    {
        pls::cs::Ref<kairo::unity::system::KairoBase> instance =
            kairo::unity::system::KairoBase::GetInstance();
        if (is_null(instance)) {
            return pls::cs::String(u"");
        }
        return require(instance)->GetFriendId();
    }
}

// M:system.friend.ui.FriendData.SetFriendName(System.String)
void FriendData::SetFriendName(pls::cs::String name) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.SetFriendName(System.String)", game);
    {
        {
            auto cs_target = require(friSave_)->strs;
            auto cs_index = 0;
            auto cs_value = PLS_API(kl_unity_util::SecureString::ValueOf(name));
            cs_target.set_Item(cs_index, cs_value);
        }
    }
}

// M:system.friend.ui.FriendData.CheckRegistFriend
bool FriendData::CheckRegistFriend() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.CheckRegistFriend", game);
    {
        return (!is_null(require(friSave_)->strs.get_Item(0)) &&
                PLS_API(require(require(friSave_)->strs.get_Item(0))->Length()) > 0);
    }
}

// M:system.friend.ui.FriendData.GetPlayBonus
pls::cs::Int32 FriendData::GetPlayBonus() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.GetPlayBonus", game);
    {
        if (PLAY_BONUS_MAX == 0 || PLAY_BONUS_INTERVAL_MINUTE == 0) {
            return 0;
        }
        auto cs_left_299 = PLS_API(require(require(friSave_)->ints.get_Item(3))->Get());
        auto cs_right_299 = PLAY_BONUS_INTERVAL_MINUTE;
        pls::cs::Int32 num = cs_left_299 / cs_right_299;
        if (num > PLAY_BONUS_MAX) {
            num = PLAY_BONUS_MAX;
        }
        return num;
    }
}

// M:system.friend.ui.FriendData.RefreshFriendList
void FriendData::RefreshFriendList() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.RefreshFriendList", game);
    {
        kl_cfg::Config::ensure_initialized();

        if (!CheckRegistFriend()) {
            return;
        }
        try {
            friendDataUpdated_ = false;
            this->CgiGetFriendList();
            pls::cs::Int32 num = 0;
            pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
            for (pls::cs::Int32 i = 0; i < PLS_API(kl_java_util::Vector_2_Size(require(friendList_))); ++i) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::cs::Object> cs_arg0 =
                        PLS_API(kl_java_util::Vector_2_ElementAt(require(friendList_), i));
                    kl_java_util::Vector_2_AddElement(require(vector), cs_arg0);
                }()));
            }
            for (pls::cs::Int32 j = 0; j < PLS_API(kl_java_util::Vector_2_Size(require(applyList_))); ++j) {
                PLS_API(([&]() -> void {
                    pls::cs::Ref<pls::cs::Object> cs_arg0 =
                        PLS_API(kl_java_util::Vector_2_ElementAt(require(applyList_), j));
                    kl_java_util::Vector_2_AddElement(require(vector), cs_arg0);
                }()));
            }
            for (pls::cs::Int32 k = 0; k < PLS_API(kl_java_util::Vector_2_Size(require(vector))); ++k) {
                pls::cs::Ref<Friend> friend_ = pls::cs::unbox<pls::cs::Ref<Friend>>(
                    PLS_API(kl_java_util::Vector_2_ElementAt(require(vector), k)));
                bool flag = false;
                for (pls::cs::Int32 l = 0; l < PLS_API(kl_java_util::Vector_2_Size(require(friendHistory_)));
                     ++l) {
                    pls::cs::Ref<FriendPlayTimeData> friendPlayTimeData =
                        pls::cs::unbox<pls::cs::Ref<FriendPlayTimeData>>(
                            PLS_API(kl_java_util::Vector_2_ElementAt(require(friendHistory_), l)));
                    if (PLS_API(require(require(friend_)->friendId_)
                                    ->EqualsSecureString(require(friendPlayTimeData)->friendId_))) {
                        flag = true;
                        if (PLS_API(require(require(friend_)->state_)->Get()) == 3) {
                            auto cs_left_301 =
                                pls::cs::Int32(PLS_API(require(require(friend_)->minute_)->Get()));
                            auto cs_right_301 = PLS_API(require(require(friendPlayTimeData)->minute_)->Get());
                            pls::cs::Int32 num2 = cs_left_301 - cs_right_301;
                            if (num2 > 0) {
                                num += num2;
                            }
                            {
                                auto cs_target = friendPlayTimeData;
                                auto cs_value = kl_unity_util::SecureInt::create_2(require(friend_)->minute_);
                                require(cs_target)->minute_ = cs_value;
                            }
                        }
                        {
                            auto cs_target = friendPlayTimeData;
                            auto cs_value = kl_unity_util::SecureInt::create_2(require(friend_)->state_);
                            require(cs_target)->state_ = cs_value;
                        }
                        break;
                    }
                }
                if (!flag) {
                    if (PLS_API(require(require(friend_)->state_)->Get()) == 3) {
                        pls::cs::String cs_arg0_302 =
                            PLS_API(kl_unity_util::SecureString::ToStringSecureStringStatic(
                                require(friend_)->friendId_));
                        pls::cs::Int32 cs_arg1_302 = PLS_API(require(require(friend_)->minute_)->Get());
                        pls::cs::Int32 cs_arg2_302 = PLS_API(require(require(friend_)->state_)->Get());
                        pls::cs::Ref<FriendPlayTimeData> obj =
                            FriendPlayTimeData::create(cs_arg0_302, cs_arg1_302, cs_arg2_302);
                        PLS_API(
                            kl_java_util::Vector_2_AddElement(require(friendHistory_), pls::cs::box(obj)));
                        num += PLS_API(require(require(friend_)->minute_)->Get());
                        PLS_API(kl_java_util::Vector_2_AddElement(require(newFriendList_),
                                                                  pls::cs::box(friend_)));
                    }
                    friendDataUpdated_ = true;
                }
            }
            {
                auto cs_target = require(friSave_)->ints;
                auto cs_index = 3;
                auto cs_value = kl_unity_util::SecureInt::create(
                    PLS_API(require(require(friSave_)->ints.get_Item(3))->Get()) + num);
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                auto cs_target = require(friSave_)->ints;
                auto cs_index = 4;
                auto cs_value = kl_unity_util::SecureInt::create(
                    PLS_API(require(require(friSave_)->ints.get_Item(4))->Get()) + num);
                cs_target.set_Item(cs_index, cs_value);
            }
            for (pls::cs::Int32 m = 0; m < PLS_API(kl_java_util::Vector_2_Size(require(friendHistory_)));
                 ++m) {
                pls::cs::Ref<FriendPlayTimeData> friendPlayTimeData2 =
                    pls::cs::unbox<pls::cs::Ref<FriendPlayTimeData>>(
                        PLS_API(kl_java_util::Vector_2_ElementAt(require(friendHistory_), m)));
                if (PLS_API(require(require(friendPlayTimeData2)->state_)->Get()) != 3) {
                    continue;
                }
                bool flag2 = false;
                for (pls::cs::Int32 n = 0; n < PLS_API(kl_java_util::Vector_2_Size(require(friendList_)));
                     ++n) {
                    pls::cs::Ref<Friend> friend2 = pls::cs::unbox<pls::cs::Ref<Friend>>(
                        PLS_API(kl_java_util::Vector_2_ElementAt(require(friendList_), n)));
                    if (PLS_API(require(require(friendPlayTimeData2)->friendId_)
                                    ->EqualsSecureString(require(friend2)->friendId_))) {
                        flag2 = true;
                        break;
                    }
                }
                if (!flag2) {
                    {
                        auto cs_target = friendPlayTimeData2;
                        auto cs_value = kl_unity_util::SecureInt::create(-1);
                        require(cs_target)->state_ = cs_value;
                    }
                }
            }
            pls::cs::Ref<kairo::unity::system::KairoBase> instance =
                kairo::unity::system::KairoBase::GetInstance();
            require(instance)->Save();
        } catch (const pls::cs::Exception& cs_caught_258) {
            auto ex = pls::cs::capture_exception(cs_caught_258);
            {
                if (kl_cfg::Config::PRINT()) {
                    PLS_API(kl_unity_util::Log::Info(ex));
                }
                friendDataUpdated_ = false;
                pls::cs::throw_exception(ex);
            }
        }
    }
}

// M:system.friend.ui.FriendData.UpdateRandomFriend
bool FriendData::UpdateRandomFriend() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.UpdateRandomFriend", game);
    {
        kl_cfg::Config::ensure_initialized();

        pls::cs::Ref<Friend> friend_ = pls::cs::Ref<Friend>{};
        try {
            friend_ = CgiRandomFriend();
        } catch (const pls::cs::Exception& cs_caught_279) {
            auto t = pls::cs::capture_exception(cs_caught_279);
            {
                if (kl_cfg::Config::PRINT()) {
                    PLS_API(kl_unity_util::Log::Info(t));
                }
            }
        }
        randomFriend_ = friend_;
        return !is_null(randomFriend_);
    }
}

// M:system.friend.ui.FriendData.ExistRandomFriend
bool FriendData::ExistRandomFriend() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.ExistRandomFriend", game);
    {
        return !is_null(randomFriend_);
    }
}

// M:system.friend.ui.FriendData.GetRandomFriend
pls::cs::Ref<Friend> FriendData::GetRandomFriend() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.GetRandomFriend", game);
    {
        return randomFriend_;
    }
}

// M:system.friend.ui.FriendData.DrawGradation(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
void FriendData::DrawGradation(pls::cs::Ref<pls::kairo::Graphics> g, pls::cs::Int32 dx, pls::cs::Int32 dy,
                               pls::cs::Int32 sx, pls::cs::Int32 sy, pls::cs::Int32 w, pls::cs::Int32 h,
                               pls::cs::Int32 sr, pls::cs::Int32 sg, pls::cs::Int32 sb, pls::cs::Int32 dr,
                               pls::cs::Int32 dg, pls::cs::Int32 db) {
    FriendData::ensure_initialized();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.friend.ui.FriendData.DrawGradation(kairo.unity.ui.Graphics,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)",
        game);
    {
        if ((w <= 0) || (h <= 0)) {
            return;
        }
        pls::cs::Int32 dxAlias = dx;
        pls::cs::Int32 num = dy;
        pls::cs::Int32 num2 = dx + w;
        pls::cs::Int32 num3 = dy + h;
        pls::cs::Double num4 = pls::cs::Double((dr - sr)) / pls::cs::Double((h / 4 + 1));
        pls::cs::Double num5 = pls::cs::Double((dg - sg)) / pls::cs::Double((h / 4 + 1));
        pls::cs::Double num6 = pls::cs::Double((db - sb)) / pls::cs::Double((h / 4 + 1));
        pls::cs::Double num7 = pls::cs::Double(sr) + pls::cs::Double((sy / 4)) * num4;
        pls::cs::Double num8 = pls::cs::Double(sg) + pls::cs::Double((sy / 4)) * num5;
        pls::cs::Double num9 = pls::cs::Double(sb) + pls::cs::Double((sy / 4)) * num6;
        while (num < num3) {
            num7 = (((num7 > 255.0)) ? pls::cs::Double(255.0) : (num7));
            num7 = (((num7 < 0.0)) ? pls::cs::Double(0.0) : (num7));
            num8 = (((num8 > 255.0)) ? pls::cs::Double(255.0) : (num8));
            num8 = (((num8 < 0.0)) ? pls::cs::Double(0.0) : (num8));
            num9 = (((num9 > 255.0)) ? pls::cs::Double(255.0) : (num9));
            num9 = (((num9 < 0.0)) ? pls::cs::Double(0.0) : (num9));
            PLS_API(require(g)->SetColor(PLS_API(pls::kairo::Graphics::GetColorOfRGB(
                pls::cs::to_int32(num7), pls::cs::to_int32(num8), pls::cs::to_int32(num9)))));
            pls::cs::Int32 num10 = 0;
            if ((num == dy && sy % 4 != 0)) {
                num10 = (sy % 4);
            } else {
                if ((num + 4 > num3)) {
                    num10 = ((num3 - num));
                } else {
                    num10 = 4;
                }
            }
            PLS_API(require(g)->FillRect(dxAlias, num, w, num10));
            num += num10;
            num7 = num7 + num4;
            num8 = num8 + num5;
            num9 = num9 + num6;
        }
    }
}

// M:system.friend.ui.FriendData.ActionSendMail(System.String,System.String)
void FriendData::ActionSendMail(pls::cs::String subject, pls::cs::String text) {
    FriendData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.friend.ui.FriendData.ActionSendMail(System.String,System.String)", game);
    {
        native::AppPlugin::LaunchMailer(subject, text);
    }
}

// M:system.friend.ui.FriendData.IsFriendDataUpdated
bool FriendData::IsFriendDataUpdated() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.IsFriendDataUpdated", game);
    {
        return friendDataUpdated_;
    }
}

// M:system.friend.ui.FriendData.InitializeData
void FriendData::InitializeData() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.InitializeData", game);
    {
        alreadyCheckPlayTimeBonus_ = false;
        alreadyCheckNewFriendBonus_ = false;
    }
}

// M:system.friend.ui.FriendData.IsEffectiveRegistName(System.String)
bool FriendData::IsEffectiveRegistName(pls::cs::String name) {
    FriendData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.IsEffectiveRegistName(System.String)",
                     game);
    {
        return FriendData::IsEffectiveRegistName(name, -1);
    }
}

// M:system.friend.ui.FriendData.IsEffectiveRegistName(System.String,System.Int32)
bool FriendData::IsEffectiveRegistName(pls::cs::String name, pls::cs::Int32 max_) {
    FriendData::ensure_initialized();
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.friend.ui.FriendData.IsEffectiveRegistName(System.String,System.Int32)", game);
    {
        if (is_null(name)) {
            return false;
        }
        if (kl_lang::StringEx::Length(name) == 0) {
            return false;
        }
        if (kl_lang::StringEx::Length(PLS_API(pls::cs::string_trim(name))) == 0) {
            return false;
        }
        if (max_ != -1 && kl_lang::StringEx::Length(name) > max_) {
            return false;
        }
        try {
            pls::cs::String text = java::net::URLEncoder::Encode(name, literal(u"UTF-8"));
            if (is_null(text)) {
                return false;
            }
            if (kl_lang::StringEx::Length(text) == 0) {
                return false;
            }
            if (kl_lang::StringEx::Length(PLS_API(pls::cs::string_trim(text))) == 0) {
                return false;
            }
        } catch (const pls::cs::Exception& cs_caught_256) {
            pls::cs::capture_exception(cs_caught_256);
            {
                return false;
            }
        }
        return true;
    }
}

// M:system.friend.ui.FriendData.GetCurrentForm
pls::cs::Ref<form::FriendForm> FriendData::GetCurrentForm() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.GetCurrentForm", game);
    {
        return GetCurrentForm(pls::cs::Ref<Friend>{});
    }
}

// M:system.friend.ui.FriendData.GetCurrentForm(system.friend.ui.Friend)
pls::cs::Ref<form::FriendForm> FriendData::GetCurrentForm(pls::cs::Ref<Friend> friend_) {
    PLS_METHOD_SCOPE("Assembly-CSharp",
                     "M:system.friend.ui.FriendData.GetCurrentForm(system.friend.ui.Friend)", game);
    {
        if (!CheckRegistFriend()) {
            pls::cs::Ref<form::FriendForm> friendForm = form::FriendForm::create(0);
            require(friendForm)->friend_ = friend_;
            return friendForm;
        }
        if (is_null(friend_)) {
            return form::FriendForm::create(2);
        }
        pls::cs::Ref<form::FriendForm> friendForm2 = form::FriendForm::create(4);
        require(friendForm2)->friend_ = friend_;
        return friendForm2;
    }
}

// M:system.friend.ui.FriendData.UpdatePlayTime
void FriendData::UpdatePlayTime() {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.FriendData.UpdatePlayTime", game);
    {
        pls::cs::Int64 num = PLS_API(kl_lang::JSystem::CurrentTimeMillis());
        if (playTimeBegin_ == pls::cs::cast_integral<pls::cs::Int64>(-1)) {
            playTimeSec_ = 0ll;
            playTimeBegin_ = num;
        }
        pls::cs::Int64 num2 = num - playTimeBegin_;
        if (num2 > pls::cs::cast_integral<pls::cs::Int64>(1000)) {
            ++playTimeSec_;
            playTimeBegin_ = num;
        }
        if (playTimeSec_ >= pls::cs::cast_integral<pls::cs::Int64>(60)) {
            {
                auto cs_target = require(friSave_)->ints;
                auto cs_index = 1;
                auto cs_value = kl_unity_util::SecureInt::create(
                    pls::cs::Int32(PLS_API(require(require(friSave_)->ints.get_Item(1))->Get())) + 1);
                cs_target.set_Item(cs_index, cs_value);
            }
            playTimeSec_ = 0ll;
        }
        pls::cs::Ref<pls::game::form::FormManager> instance = pls::game::form::FormManager::GetInstance();
        if (!alreadyCheckNewFriendBonus_ &&
            PLS_API(kl_java_util::Vector_2_Size(require(newFriendList_))) > 0 && PLAY_NEW_FRIEND_BONUS > 0) {
            PLS_API(([&]() -> bool {
                pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = form::FriendForm::create(14);
                return require(instance)->Push(cs_arg0);
            }()));
        } else if (!alreadyCheckPlayTimeBonus_ && ([&]() -> bool {
                       auto cs_left = PLS_API(require(require(friSave_)->ints.get_Item(3))->Get());
                       auto cs_right = PLAY_BONUS_INTERVAL_MINUTE;
                       return cs_left >= cs_right;
                   }()) &&
                   PLAY_BONUS_INTERVAL_MINUTE > 0) {
            PLS_API(([&]() -> bool {
                pls::cs::Ref<pls::kairo::FormBase> cs_arg0 = form::FriendForm::create(12);
                return require(instance)->Push(cs_arg0);
            }()));
        }
    }
}
} // namespace system::friend_::ui
}
