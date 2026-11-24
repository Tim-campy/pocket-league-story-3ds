// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.io.InputStream.hpp"
#include "generated/java.io.OutputStream.hpp"
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JString.hpp"
#include "generated/kairo.unity.util.SecureInt.hpp"
#include "generated/kairo.unity.util.SecureString.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "java.net.URLDecoder.hpp"
#include "system.friend.ui.Friend.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;

namespace pls::game {
namespace system::friend_::ui {

void Friend::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(friendId_, visitor);
    pls::cs::trace_value(name_, visitor);
    pls::cs::trace_value(state_, visitor);
    pls::cs::trace_value(minute_, visitor);
    pls::cs::trace_value(updated_, visitor);
}

static PLS_NOINLINE void cs_init_9465f7541f51c47e_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("system.friend.ui.Friend", flag, []() {

    });
}

void Friend::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_9465f7541f51c47e_slow(flag);
}

void Friend::create_init(pls::cs::Ref<Friend> self) {
    Friend::ensure_initialized();
    self->state_ = kl_util::SecureInt::create();
    self->minute_ = kl_util::SecureInt::create();
    self->updated_ = kl_util::SecureInt::create();
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.Friend.#ctor", game);
    {
        self->friendId_ = pls::cs::Ref<kl_util::SecureString>{};
        self->name_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::SecureString::ValueOf(pls::cs::String(u"")); });
        self->state_ = kl_util::SecureInt::create(1);
        self->minute_ = kl_util::SecureInt::create(0);
        self->updated_ = kl_util::SecureInt::create(0);
    }
}

void Friend::create_init(pls::cs::Ref<Friend> self, ByteArray src) {
    Friend::ensure_initialized();
    Friend::create_2_init(
        pls::cs::static_pointer_cast<Friend>(self),
        pls::diagnostic::api_call([&]() -> decltype(auto) { return kl_lang::JString::New(src); }));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.Friend.#ctor(System.Byte[])", game);
    {
    }
}

void Friend::create_init(pls::cs::Ref<Friend> self, pls::cs::String friendId, pls::cs::String name,
                         pls::cs::Int32 state, pls::cs::Int32 minute, pls::cs::Int32 updated) {
    Friend::ensure_initialized();
    self->state_ = kl_util::SecureInt::create();
    self->minute_ = kl_util::SecureInt::create();
    self->updated_ = kl_util::SecureInt::create();
    PLS_METHOD_SCOPE(
        "Assembly-CSharp",
        "M:system.friend.ui.Friend.#ctor(System.String,System.String,System.Int32,System.Int32,System.Int32)",
        game);
    {
        self->friendId_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::SecureString::ValueOf(friendId); });
        self->name_ = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::SecureString::ValueOf(name); });
        self->state_ = kl_util::SecureInt::create(state);
        self->minute_ = kl_util::SecureInt::create(minute);
        self->updated_ = kl_util::SecureInt::create(updated);
        if (!pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(self->name_)->EndsWith(literal(u"\010")); })) {
            self->name_ = pls::diagnostic::api_call([&]() -> decltype(auto) {
                return kl_util::SecureString::ValueOf(
                    pls::cs::String::concat(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                return require(self->name_)->ToString();
                                            }),
                                            literal(u"\010")));
            });
        }
    }
}

void Friend::create_2_init(pls::cs::Ref<Friend> self, pls::cs::String src) {
    Friend::ensure_initialized();
    Friend::create_init(pls::cs::static_pointer_cast<Friend>(self));
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.Friend.#ctor(System.String)", game);
    {
        StringArray array = pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::StringUtil::Split(src, literal(u"|")); });
        if (0 < array.length()) {
            self->friendId_ = kl_util::SecureString::create(array[0]);
        }
        if (1 < array.length()) {
            self->name_ = kl_util::SecureString::create(java::net::URLDecoder::Decode(array[1]));
        }
        if (2 < array.length()) {
            self->state_ = kl_util::SecureInt::create(([&]() {
                auto cs_value = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_lang::JInteger::ValueOf(array[2]); });
                return kl_lang::JInteger::op_Implicit(cs_value);
            }()));
        }
        if (3 < array.length()) {
            self->minute_ = kl_util::SecureInt::create(([&]() {
                auto cs_value = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_lang::JInteger::ValueOf(array[3]); });
                return kl_lang::JInteger::op_Implicit(cs_value);
            }()));
        }
        if (4 < array.length()) {
            self->updated_ = kl_util::SecureInt::create(([&]() {
                auto cs_value = pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_lang::JInteger::ValueOf(array[4]); });
                return kl_lang::JInteger::op_Implicit(cs_value);
            }()));
        }
        if (!pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return require(self->name_)->EndsWith(literal(u"\010")); })) {
            self->name_ = kl_util::SecureString::create(
                pls::cs::String::concat(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                            return require(self->name_)->ToString();
                                        }),
                                        literal(u"\010")));
        }
    }
}

// M:system.friend.ui.Friend.#ctor
pls::cs::Ref<Friend> Friend::create() {
    Friend::ensure_initialized();
    auto self = pls::cs::make_ref<Friend>();
    Friend::create_init(self);
    return self;
}

// M:system.friend.ui.Friend.#ctor(System.String,System.String,System.Int32,System.Int32,System.Int32)
pls::cs::Ref<Friend> Friend::create(pls::cs::String friendId, pls::cs::String name, pls::cs::Int32 state,
                                    pls::cs::Int32 minute, pls::cs::Int32 updated) {
    Friend::ensure_initialized();
    auto self = pls::cs::make_ref<Friend>();
    Friend::create_init(self, friendId, name, state, minute, updated);
    return self;
}

// M:system.friend.ui.Friend.#ctor(System.Byte[])
pls::cs::Ref<Friend> Friend::create(ByteArray src) {
    Friend::ensure_initialized();
    auto self = pls::cs::make_ref<Friend>();
    Friend::create_init(self, src);
    return self;
}

// M:system.friend.ui.Friend.#ctor(System.String)
pls::cs::Ref<Friend> Friend::create_2(pls::cs::String src) {
    Friend::ensure_initialized();
    auto self = pls::cs::make_ref<Friend>();
    Friend::create_2_init(self, src);
    return self;
}

// M:system.friend.ui.Friend.Serialize(java.io.OutputStream)
void Friend::Serialize(pls::cs::Ref<kl_io::OutputStream> os) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.Friend.Serialize(java.io.OutputStream)", game);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_util::StreamUtil::WriteStringString(
                os, pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_util::SecureString::ToStringSecureStringStatic(friendId_);
                }));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_util::StreamUtil::WriteInt(
                os, pls::diagnostic::api_call([&]() -> decltype(auto) { return require(state_)->Get(); }));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_util::StreamUtil::WriteInt(
                os, pls::diagnostic::api_call([&]() -> decltype(auto) { return require(minute_)->Get(); }));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_util::StreamUtil::WriteInt(
                os, pls::diagnostic::api_call([&]() -> decltype(auto) { return require(updated_)->Get(); }));
        });
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_util::StreamUtil::WriteStringString(
                os, pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_util::SecureString::ToStringSecureStringStatic(name_);
                }));
        });
    }
}

// M:system.friend.ui.Friend.Deserialize(java.io.InputStream)
void Friend::Deserialize(pls::cs::Ref<kl_io::InputStream> stream) {
    PLS_METHOD_SCOPE("Assembly-CSharp", "M:system.friend.ui.Friend.Deserialize(java.io.InputStream)", game);
    {
        friendId_ = kl_util::SecureString::create(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::StreamUtil::ReadString(stream); }));
        state_ = kl_util::SecureInt::create(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::StreamUtil::ReadInt(stream); }));
        minute_ = kl_util::SecureInt::create(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::StreamUtil::ReadInt(stream); }));
        updated_ = kl_util::SecureInt::create(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::StreamUtil::ReadInt(stream); }));
        name_ = kl_util::SecureString::create(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_util::StreamUtil::ReadString(stream); }));
    }
}
} // namespace system::friend_::ui
}
