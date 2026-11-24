// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.io.ByteArrayInputStream.hpp"
#include "java.io.ByteArrayOutputStream.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.JSystem.hpp"
#include "kairo.unity.util.SecureInt.hpp"
#include "kairo.unity.util.SecureLong.hpp"
#include "kairo.unity.util.SecureNumber.hpp"
#include "kairo.unity.util.SecureProperty.hpp"
#include "kairo.unity.util.SecureString.hpp"
#include "kairo.unity.util.StreamUtil.hpp"
#include "kairo.unity.util.StringUtil.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using LongArray = pls::cs::Array<pls::cs::Int64>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::generated {
namespace kairo::unity::util {

void SecureProperty::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(pros, visitor);
    pls::cs::trace_value(ints, visitor);
    pls::cs::trace_value(lngs, visitor);
    pls::cs::trace_value(strs, visitor);
    pls::cs::trace_value(bins, visitor);
}

static PLS_NOINLINE void cs_init_c20c229ea63037d8_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.SecureProperty", flag, []() {

    });
}

void SecureProperty::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_c20c229ea63037d8_slow(flag);
}

void SecureProperty::create_init(pls::cs::Ref<SecureProperty> self, pls::cs::Ref<SecureProperty> property) {
    SecureProperty::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.SecureProperty.#ctor(kairo.unity.util.SecureProperty)", kairo);
    {
        if (is_null(property)) {
            return;
        }
        self->SetData(require(property)->ints);
        self->SetDataSecureLongArray(require(property)->lngs);
        self->SetDataSecureStringArray(require(property)->strs);
        self->SetDataByteArrayArray(require(property)->bins);
        self->SetDataSecurePropertyArray(require(property)->pros);
    }
}

void SecureProperty::create_init(pls::cs::Ref<SecureProperty> self,
                                 pls::cs::Array<pls::cs::Ref<SecureProperty>> pros, IntArray ints,
                                 LongArray lngs, StringArray strs, pls::cs::Array<ByteArray> bins) {
    SecureProperty::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.SecureProperty.#ctor(kairo.unity.util.SecureProperty[],System.Int32[],System.Int64[],System.String[],System.Byte[][])",
        kairo);
    {
        self->SetDataIntArray(ints);
        self->SetDataLongArray(lngs);
        self->SetDataStringArray(strs);
        self->SetDataByteArrayArray(bins);
        self->SetDataSecurePropertyArray(pros);
    }
}

// M:kairo.unity.util.SecureProperty.#ctor(kairo.unity.util.SecureProperty[],System.Int32[],System.Int64[],System.String[],System.Byte[][])
pls::cs::Ref<SecureProperty> SecureProperty::create(pls::cs::Array<pls::cs::Ref<SecureProperty>> pros,
                                                    IntArray ints, LongArray lngs, StringArray strs,
                                                    pls::cs::Array<ByteArray> bins) {
    SecureProperty::ensure_initialized();
    auto self = pls::cs::make_ref<SecureProperty>();
    SecureProperty::create_init(self, pros, ints, lngs, strs, bins);
    return self;
}

// M:kairo.unity.util.SecureProperty.#ctor(kairo.unity.util.SecureProperty)
pls::cs::Ref<SecureProperty> SecureProperty::create(pls::cs::Ref<SecureProperty> property) {
    SecureProperty::ensure_initialized();
    auto self = pls::cs::make_ref<SecureProperty>();
    SecureProperty::create_init(self, property);
    return self;
}

// M:kairo.unity.util.SecureProperty.SetData(kairo.unity.util.SecureInt[])
void SecureProperty::SetData(pls::cs::Array<pls::cs::Ref<SecureInt>> data) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.SecureProperty.SetData(kairo.unity.util.SecureInt[])", kairo);
    {
        ints = pls::cs::Array<pls::cs::Ref<SecureInt>>{};
        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<SecureInt>>{});
                return cs_left == cs_right;
            }()) {
            return;
        }
        ints = pls::cs::Array<pls::cs::Ref<SecureInt>>::make(pls::cs::Int32(data.length()));
        java::lang::JSystem::Arraycopy(pls::cs::box(data), 0, pls::cs::box(ints), 0,
                                       pls::cs::Int32(ints.length()));
    }
}

// M:kairo.unity.util.SecureProperty.SetData(System.Int32[])
void SecureProperty::SetDataIntArray(IntArray data) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureProperty.SetData(System.Int32[])", kairo);
    {
        ints = pls::cs::Array<pls::cs::Ref<SecureInt>>{};
        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left == cs_right;
            }()) {
            return;
        }
        ints = pls::cs::Array<pls::cs::Ref<SecureInt>>::make(pls::cs::Int32(data.length()));
        for (pls::cs::Int32 i = 0; i < pls::cs::Int32(data.length()); ++i) {
            {
                auto cs_target = ints;
                auto cs_index = i;
                auto cs_value = SecureInt::create(data[i]);
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:kairo.unity.util.SecureProperty.SetData(kairo.unity.util.SecureLong[])
void SecureProperty::SetDataSecureLongArray(pls::cs::Array<pls::cs::Ref<SecureLong>> data) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.SecureProperty.SetData(kairo.unity.util.SecureLong[])", kairo);
    {
        lngs = pls::cs::Array<pls::cs::Ref<SecureLong>>{};
        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<SecureLong>>{});
                return cs_left == cs_right;
            }()) {
            return;
        }
        lngs = pls::cs::Array<pls::cs::Ref<SecureLong>>::make(pls::cs::Int32(data.length()));
        java::lang::JSystem::Arraycopy(pls::cs::box(data), 0, pls::cs::box(lngs), 0,
                                       pls::cs::Int32(lngs.length()));
    }
}

// M:kairo.unity.util.SecureProperty.SetData(System.Int64[])
void SecureProperty::SetDataLongArray(LongArray data) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureProperty.SetData(System.Int64[])", kairo);
    {
        lngs = pls::cs::Array<pls::cs::Ref<SecureLong>>{};
        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(LongArray{});
                return cs_left == cs_right;
            }()) {
            return;
        }
        lngs = pls::cs::Array<pls::cs::Ref<SecureLong>>::make(pls::cs::Int32(data.length()));
        for (pls::cs::Int32 i = 0; i < pls::cs::Int32(lngs.length()); ++i) {
            {
                auto cs_target = lngs;
                auto cs_index = i;
                auto cs_value = SecureLong::create(data[i]);
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:kairo.unity.util.SecureProperty.SetData(kairo.unity.util.SecureString[])
void SecureProperty::SetDataSecureStringArray(pls::cs::Array<pls::cs::Ref<SecureString>> data) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.SecureProperty.SetData(kairo.unity.util.SecureString[])", kairo);
    {
        strs = pls::cs::Array<pls::cs::Ref<SecureString>>{};
        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<SecureString>>{});
                return cs_left == cs_right;
            }()) {
            return;
        }
        strs = pls::cs::Array<pls::cs::Ref<SecureString>>::make(pls::cs::Int32(data.length()));
        SecureString::Arraycopy(data, 0, strs, 0, pls::cs::Int32(strs.length()));
    }
}

// M:kairo.unity.util.SecureProperty.SetData(System.String[])
void SecureProperty::SetDataStringArray(StringArray data) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureProperty.SetData(System.String[])", kairo);
    {
        strs = pls::cs::Array<pls::cs::Ref<SecureString>>{};
        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(StringArray{});
                return cs_left == cs_right;
            }()) {
            return;
        }
        strs = pls::cs::Array<pls::cs::Ref<SecureString>>::make(pls::cs::Int32(data.length()));
        for (pls::cs::Int32 i = 0; i < pls::cs::Int32(strs.length()); ++i) {
            {
                auto cs_target = strs;
                auto cs_index = i;
                auto cs_value = SecureString::ValueOf(data[i]);
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:kairo.unity.util.SecureProperty.SetData(System.Byte[][])
void SecureProperty::SetDataByteArrayArray(pls::cs::Array<ByteArray> data) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureProperty.SetData(System.Byte[][])", kairo);
    {
        bins = pls::cs::Array<ByteArray>{};
        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(pls::cs::Array<ByteArray>{});
                return cs_left == cs_right;
            }()) {
            return;
        }
        bins = pls::cs::Array<ByteArray>::make(pls::cs::Int32(data.length()));
        for (pls::cs::Int32 i = 0; i < pls::cs::Int32(bins.length()); ++i) {
            {
                auto cs_target = bins;
                auto cs_index = i;
                auto cs_value = ByteArray::make(pls::cs::Int32(data[i].length()));
                cs_target.set_Item(cs_index, cs_value);
            }
            {
                pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(data[i]);
                pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(bins[i]);
                pls::cs::Int32 cs_arg4 = pls::cs::Int32(bins[i].length());
                java::lang::JSystem::Arraycopy(cs_arg0, 0, cs_arg2, 0, cs_arg4);
            }
        }
    }
}

// M:kairo.unity.util.SecureProperty.SetData(kairo.unity.util.SecureProperty[])
void SecureProperty::SetDataSecurePropertyArray(pls::cs::Array<pls::cs::Ref<SecureProperty>> data) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.SecureProperty.SetData(kairo.unity.util.SecureProperty[])", kairo);
    {
        pros = pls::cs::Array<pls::cs::Ref<SecureProperty>>{};
        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<SecureProperty>>{});
                return cs_left == cs_right;
            }()) {
            return;
        }
        pros = pls::cs::Array<pls::cs::Ref<SecureProperty>>::make(pls::cs::Int32(data.length()));
        for (pls::cs::Int32 i = 0; i < pls::cs::Int32(pros.length()); ++i) {
            {
                auto cs_target = pros;
                auto cs_index = i;
                auto cs_value = SecureProperty::create(data.get_Item(i));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:kairo.unity.util.SecureProperty.Load(System.Byte[])
void SecureProperty::Load(ByteArray data) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureProperty.Load(System.Byte[])", kairo);
    {
        pls::cs::Ref<java::io::ByteArrayInputStream> byteArrayInputStream =
            pls::cs::Ref<java::io::ByteArrayInputStream>{};
        pls::cs::run_finally(
            [&]() {
                {
                    byteArrayInputStream = java::io::ByteArrayInputStream::create(data);
                    LoadInputStream(byteArrayInputStream);
                }
            },
            [&]() {
                ([&]() -> void {
                    auto cs_conditional = byteArrayInputStream;
                    if (!cs_conditional)
                        return;
                    ([&]() -> void {
                        auto cs_receiver = static_cast<pls::cs::Ref<java::io::InputStream>>(cs_conditional);
                        if (!cs_receiver)
                            throw pls::cs::NullReferenceException();
                        cs_receiver->Close();
                    }());
                }());
                byteArrayInputStream = pls::cs::Ref<java::io::ByteArrayInputStream>{};
            });
    }
}

// M:kairo.unity.util.SecureProperty.Load(java.io.InputStream)
void SecureProperty::LoadInputStream(pls::cs::Ref<java::io::InputStream> stream) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureProperty.Load(java.io.InputStream)", kairo);
    {
        pls::cs::Int32 num = StreamUtil::ReadInt(stream);
        for (pls::cs::Int32 i = 0; i < num; ++i) {
            pls::cs::Int32 type;
            pls::cs::Int32 size;
            ByteArray ids = ByteArray{};
            type = StreamUtil::ReadInt(stream);
            size = StreamUtil::ReadInt(stream);
            Read(stream, type, size, ids);
        }
    }
}

// M:kairo.unity.util.SecureProperty.ToByteArray
ByteArray SecureProperty::ToByteArray() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureProperty.ToByteArray", kairo);
    {
        pls::cs::Ref<java::io::ByteArrayOutputStream> byteArrayOutputStream =
            pls::cs::Ref<java::io::ByteArrayOutputStream>{};
        {
            auto cs_flow_23 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<ByteArray> {
                    {
                        byteArrayOutputStream = java::io::ByteArrayOutputStream::create();
                        ToByteArray(byteArrayOutputStream);
                        return pls::cs::flow_return(require(byteArrayOutputStream)->ToByteArray());
                    }
                    return {};
                },
                [&]() {
                    ([&]() -> void {
                        auto cs_conditional = byteArrayOutputStream;
                        if (!cs_conditional)
                            return;
                        ([&]() -> void {
                            auto cs_receiver =
                                static_cast<pls::cs::Ref<java::io::ByteArrayOutputStream>>(cs_conditional);
                            if (!cs_receiver)
                                throw pls::cs::NullReferenceException();
                            cs_receiver->Close();
                        }());
                    }());
                    byteArrayOutputStream = pls::cs::Ref<java::io::ByteArrayOutputStream>{};
                });
            return cs_flow_23.value();
        }
    }
}

// M:kairo.unity.util.SecureProperty.ToByteArray(java.io.OutputStream)
void SecureProperty::ToByteArray(pls::cs::Ref<java::io::OutputStream> os) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureProperty.ToByteArray(java.io.OutputStream)",
                     kairo);
    {
        pls::cs::Int32 typeNum = GetTypeNum();
        StreamUtil::WriteInt(os, typeNum);
        for (pls::cs::Int32 i = 0; i < typeNum; ++i) {
            StreamUtil::WriteInt(os, i);
            StreamUtil::WriteInt(os, Size(i));
            Write(os, i);
        }
    }
}

// M:kairo.unity.util.SecureProperty.Read(java.io.InputStream,System.Int32,System.Int32,System.Byte[])
void SecureProperty::Read(pls::cs::Ref<java::io::InputStream> stream, pls::cs::Int32 type,
                          pls::cs::Int32 size, ByteArray ids) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.SecureProperty.Read(java.io.InputStream,System.Int32,System.Int32,System.Byte[])",
        kairo);
    {
        if (type == 0) {
            if ([&]() {
                    auto cs_left = pls::cs::box(pros);
                    auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<SecureProperty>>{});
                    return cs_left == cs_right;
                }()) {
                pros = pls::cs::Array<pls::cs::Ref<SecureProperty>>::make(size);
            }
            for (pls::cs::Int32 i = 0; i < size; ++i) {
                pls::cs::Ref<SecureProperty> secureProperty = SecureProperty::create(pros.get_Item(i));
                {
                    ByteArray cs_arg0 = StreamUtil::ReadBool(stream, true);
                    require(secureProperty)->Load(cs_arg0);
                }
                if (0 <= i && i < pls::cs::Int32(pros.length())) {
                    pros.set_Item(i, secureProperty);
                }
            }
            return;
        }
        if (type == 1) {
            if ([&]() {
                    auto cs_left = pls::cs::box(ints);
                    auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<SecureInt>>{});
                    return cs_left == cs_right;
                }()) {
                ints = SecureInt::Array(size);
            }
            for (pls::cs::Int32 j = 0; j < size; ++j) {
                pls::cs::Int32 num = StreamUtil::ReadInt(stream);
                if (0 <= j && j < pls::cs::Int32(ints.length())) {
                    require(ints.get_Item(j))->Set(num);
                }
            }
            return;
        }
        if (type == 2) {
            if ([&]() {
                    auto cs_left = pls::cs::box(lngs);
                    auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<SecureLong>>{});
                    return cs_left == cs_right;
                }()) {
                lngs = SecureLong::Array(size);
            }
            for (pls::cs::Int32 k = 0; k < size; ++k) {
                pls::cs::Int64 num1 = StreamUtil::ReadLong(stream);
                if (0 <= k && k < pls::cs::Int32(lngs.length())) {
                    require(lngs.get_Item(k))->Set(num1);
                }
            }
            return;
        }
        if (type == 3) {
            if ([&]() {
                    auto cs_left = pls::cs::box(strs);
                    auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<SecureString>>{});
                    return cs_left == cs_right;
                }()) {
                strs = pls::cs::Array<pls::cs::Ref<SecureString>>::make(size);
            }
            for (pls::cs::Int32 l = 0; l < size; ++l) {
                ByteArray numArray = StreamUtil::ReadBool(stream, true);
                if (0 <= l && l < pls::cs::Int32(strs.length())) {
                    {
                        auto cs_target = strs;
                        auto cs_index = l;
                        auto cs_value = SecureString::create(StringUtil::GetString(numArray));
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
            }
            return;
        }
        if (type == 4) {
            if ([&]() {
                    auto cs_left = pls::cs::box(bins);
                    auto cs_right = pls::cs::box(pls::cs::Array<ByteArray>{});
                    return cs_left == cs_right;
                }()) {
                bins = pls::cs::Array<ByteArray>::make(size);
            }
            for (pls::cs::Int32 m = 0; m < size; ++m) {
                ByteArray numArray1 = StreamUtil::ReadBool(stream, true);
                if (0 <= m && m < pls::cs::Int32(bins.length())) {
                    bins[m] = numArray1;
                }
            }
        }
    }
}

// M:kairo.unity.util.SecureProperty.Write(java.io.OutputStream,System.Int32)
void SecureProperty::Write(pls::cs::Ref<java::io::OutputStream> os, pls::cs::Int32 type) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.SecureProperty.Write(java.io.OutputStream,System.Int32)", kairo);
    {
        if (type == 0) {
            if ([&]() {
                    auto cs_left = pls::cs::box(pros);
                    auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<SecureProperty>>{});
                    return cs_left == cs_right;
                }()) {
                return;
            }
            for (pls::cs::Int32 i = 0; i < pls::cs::Int32(pros.length()); ++i) {
                StreamUtil::Write(os, require(pros.get_Item(i))->ToByteArray(), true);
            }
            return;
        }
        if (type == 1) {
            if ([&]() {
                    auto cs_left = pls::cs::box(ints);
                    auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<SecureInt>>{});
                    return cs_left == cs_right;
                }()) {
                return;
            }
            for (pls::cs::Int32 j = 0; j < pls::cs::Int32(ints.length()); ++j) {
                StreamUtil::WriteInt(os, require(ints.get_Item(j))->Get());
            }
            return;
        }
        if (type == 2) {
            if ([&]() {
                    auto cs_left = pls::cs::box(lngs);
                    auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<SecureLong>>{});
                    return cs_left == cs_right;
                }()) {
                return;
            }
            for (pls::cs::Int32 k = 0; k < pls::cs::Int32(lngs.length()); ++k) {
                StreamUtil::WriteLong(os, require(lngs.get_Item(k))->Get());
            }
            return;
        }
        if (type == 3) {
            if ([&]() {
                    auto cs_left = pls::cs::box(strs);
                    auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<SecureString>>{});
                    return cs_left == cs_right;
                }()) {
                return;
            }
            for (pls::cs::Int32 l = 0; l < pls::cs::Int32(strs.length()); ++l) {
                StreamUtil::Write(os, require(strs.get_Item(l))->GetBytes(), true);
            }
            return;
        }
        if (type == 4) {
            if ([&]() {
                    auto cs_left = pls::cs::box(bins);
                    auto cs_right = pls::cs::box(pls::cs::Array<ByteArray>{});
                    return cs_left == cs_right;
                }()) {
                return;
            }
            for (pls::cs::Int32 m = 0; m < pls::cs::Int32(bins.length()); ++m) {
                StreamUtil::Write(os, bins[m], true);
            }
        }
    }
}

// M:kairo.unity.util.SecureProperty.Size(System.Int32)
pls::cs::Int32 SecureProperty::Size(pls::cs::Int32 type) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureProperty.Size(System.Int32)", kairo);
    {
        if (type == 0 && ([&]() {
                auto cs_left = pls::cs::box(pros);
                auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<SecureProperty>>{});
                return cs_left != cs_right;
            }())) {
            return pros.length();
        }
        if (type == 1 && ([&]() {
                auto cs_left = pls::cs::box(ints);
                auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<SecureInt>>{});
                return cs_left != cs_right;
            }())) {
            return ints.length();
        }
        if (type == 2 && ([&]() {
                auto cs_left = pls::cs::box(lngs);
                auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<SecureLong>>{});
                return cs_left != cs_right;
            }())) {
            return lngs.length();
        }
        if (type == 3 && ([&]() {
                auto cs_left = pls::cs::box(strs);
                auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<SecureString>>{});
                return cs_left != cs_right;
            }())) {
            return strs.length();
        }
        if (type == 4 && ([&]() {
                auto cs_left = pls::cs::box(bins);
                auto cs_right = pls::cs::box(pls::cs::Array<ByteArray>{});
                return cs_left != cs_right;
            }())) {
            return bins.length();
        }
        return 0;
    }
}

// M:kairo.unity.util.SecureProperty.GetTypeNum
pls::cs::Int32 SecureProperty::GetTypeNum() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.SecureProperty.GetTypeNum", kairo);
    {
        return 5;
    }
}
} // namespace kairo::unity::util
}
