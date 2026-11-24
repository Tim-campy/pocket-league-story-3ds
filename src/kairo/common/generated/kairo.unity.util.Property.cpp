// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.io.ByteArrayInputStream.hpp"
#include "java.io.ByteArrayOutputStream.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.JSystem.hpp"
#include "java.lang.StringEx.hpp"
#include "kairo.unity.util.Property.hpp"
#include "kairo.unity.util.StreamUtil.hpp"
#include "kairo.unity.util.StringUtil.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using LongArray = pls::cs::Array<pls::cs::Int64>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::generated {
namespace kairo::unity::util {

void Property::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(pros, visitor);
    pls::cs::trace_value(ints, visitor);
    pls::cs::trace_value(lngs, visitor);
    pls::cs::trace_value(strs, visitor);
    pls::cs::trace_value(bins, visitor);
}

static PLS_NOINLINE void cs_init_8c57b816bbc8fd6e_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.Property", flag, []() {

    });
}

void Property::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_8c57b816bbc8fd6e_slow(flag);
}

void Property::create_init(pls::cs::Ref<Property> self) {
    Property::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Property.#ctor", kairo);
    {
    }
}

void Property::create_init(pls::cs::Ref<Property> self, pls::cs::Ref<Property> property) {
    Property::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Property.#ctor(kairo.unity.util.Property)", kairo);
    {
        if (is_null(property)) {
            return;
        }
        self->SetData(require(property)->ints);
        self->SetDataLongArray(require(property)->lngs);
        self->SetDataStringArray(require(property)->strs);
        self->SetDataByteArrayArray(require(property)->bins);
        self->SetDataPropertyArray(require(property)->pros);
    }
}

void Property::create_init(pls::cs::Ref<Property> self, pls::cs::Array<pls::cs::Ref<Property>> pros,
                           IntArray ints, LongArray lngs, StringArray strs, pls::cs::Array<ByteArray> bins) {
    Property::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.Property.#ctor(kairo.unity.util.Property[],System.Int32[],System.Int64[],System.String[],System.Byte[][])",
        kairo);
    {
        self->SetData(ints);
        self->SetDataLongArray(lngs);
        self->SetDataStringArray(strs);
        self->SetDataByteArrayArray(bins);
        self->SetDataPropertyArray(pros);
    }
}

// M:kairo.unity.util.Property.#ctor
pls::cs::Ref<Property> Property::create() {
    Property::ensure_initialized();
    auto self = pls::cs::make_ref<Property>();
    Property::create_init(self);
    return self;
}

// M:kairo.unity.util.Property.#ctor(kairo.unity.util.Property[],System.Int32[],System.Int64[],System.String[],System.Byte[][])
pls::cs::Ref<Property> Property::create(pls::cs::Array<pls::cs::Ref<Property>> pros, IntArray ints,
                                        LongArray lngs, StringArray strs, pls::cs::Array<ByteArray> bins) {
    Property::ensure_initialized();
    auto self = pls::cs::make_ref<Property>();
    Property::create_init(self, pros, ints, lngs, strs, bins);
    return self;
}

// M:kairo.unity.util.Property.#ctor(kairo.unity.util.Property)
pls::cs::Ref<Property> Property::create(pls::cs::Ref<Property> property) {
    Property::ensure_initialized();
    auto self = pls::cs::make_ref<Property>();
    Property::create_init(self, property);
    return self;
}

// M:kairo.unity.util.Property.SetData(System.Int32[])
void Property::SetData(IntArray data) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Property.SetData(System.Int32[])", kairo);
    {
        ints = IntArray{};
        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left == cs_right;
            }()) {
            return;
        }
        ints = IntArray::make(pls::cs::Int32(data.length()));
        java::lang::JSystem::Arraycopy(pls::cs::box(data), 0, pls::cs::box(ints), 0,
                                       pls::cs::Int32(ints.length()));
    }
}

// M:kairo.unity.util.Property.SetData(System.Int64[])
void Property::SetDataLongArray(LongArray data) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Property.SetData(System.Int64[])", kairo);
    {
        lngs = LongArray{};
        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(LongArray{});
                return cs_left == cs_right;
            }()) {
            return;
        }
        lngs = LongArray::make(pls::cs::Int32(data.length()));
        java::lang::JSystem::Arraycopy(pls::cs::box(data), 0, pls::cs::box(lngs), 0,
                                       pls::cs::Int32(lngs.length()));
    }
}

// M:kairo.unity.util.Property.SetData(System.String[])
void Property::SetDataStringArray(StringArray data) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Property.SetData(System.String[])", kairo);
    {
        strs = StringArray{};
        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(StringArray{});
                return cs_left == cs_right;
            }()) {
            return;
        }
        strs = StringArray::make(pls::cs::Int32(data.length()));
        java::lang::JSystem::Arraycopy(pls::cs::box(data), 0, pls::cs::box(strs), 0,
                                       pls::cs::Int32(strs.length()));
    }
}

// M:kairo.unity.util.Property.SetData(System.Byte[][])
void Property::SetDataByteArrayArray(pls::cs::Array<ByteArray> data) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Property.SetData(System.Byte[][])", kairo);
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

// M:kairo.unity.util.Property.SetData(kairo.unity.util.Property[])
void Property::SetDataPropertyArray(pls::cs::Array<pls::cs::Ref<Property>> data) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Property.SetData(kairo.unity.util.Property[])",
                     kairo);
    {
        pros = pls::cs::Array<pls::cs::Ref<Property>>{};
        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<Property>>{});
                return cs_left == cs_right;
            }()) {
            return;
        }
        pros = pls::cs::Array<pls::cs::Ref<Property>>::make(pls::cs::Int32(data.length()));
        for (pls::cs::Int32 i = 0; i < pls::cs::Int32(pros.length()); ++i) {
            {
                auto cs_target = pros;
                auto cs_index = i;
                auto cs_value = Property::create(data.get_Item(i));
                cs_target.set_Item(cs_index, cs_value);
            }
        }
    }
}

// M:kairo.unity.util.Property.Load(System.Byte[])
void Property::Load(ByteArray data) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Property.Load(System.Byte[])", kairo);
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

// M:kairo.unity.util.Property.Load(java.io.InputStream)
void Property::LoadInputStream(pls::cs::Ref<java::io::InputStream> stream) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Property.Load(java.io.InputStream)", kairo);
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

// M:kairo.unity.util.Property.ToByteArray
ByteArray Property::ToByteArray() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Property.ToByteArray", kairo);
    {
        pls::cs::Ref<java::io::ByteArrayOutputStream> byteArrayOutputStream =
            pls::cs::Ref<java::io::ByteArrayOutputStream>{};
        {
            auto cs_flow_22 = pls::cs::run_finally(
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
            return cs_flow_22.value();
        }
    }
}

// M:kairo.unity.util.Property.ToByteArray(java.io.OutputStream)
void Property::ToByteArray(pls::cs::Ref<java::io::OutputStream> os) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Property.ToByteArray(java.io.OutputStream)", kairo);
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

// M:kairo.unity.util.Property.Read(java.io.InputStream,System.Int32,System.Int32,System.Byte[])
void Property::Read(pls::cs::Ref<java::io::InputStream> stream, pls::cs::Int32 type, pls::cs::Int32 size,
                    ByteArray ids) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.util.Property.Read(java.io.InputStream,System.Int32,System.Int32,System.Byte[])",
        kairo);
    {
        if (type == 0) {
            if ([&]() {
                    auto cs_left = pls::cs::box(pros);
                    auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<Property>>{});
                    return cs_left == cs_right;
                }()) {
                pros = pls::cs::Array<pls::cs::Ref<Property>>::make(size);
            }
            for (pls::cs::Int32 i = 0; i < size; ++i) {
                pls::cs::Ref<Property> property = Property::create(pros.get_Item(i));
                {
                    ByteArray cs_arg0 = StreamUtil::ReadBool(stream, true);
                    require(property)->Load(cs_arg0);
                }
                if (0 <= i && i < pls::cs::Int32(pros.length())) {
                    pros.set_Item(i, property);
                }
            }
            return;
        }
        if (type == 1) {
            if ([&]() {
                    auto cs_left = pls::cs::box(ints);
                    auto cs_right = pls::cs::box(IntArray{});
                    return cs_left == cs_right;
                }()) {
                ints = IntArray::make(size);
            }
            for (pls::cs::Int32 j = 0; j < size; ++j) {
                pls::cs::Int32 num = StreamUtil::ReadInt(stream);
                if (0 <= j && j < pls::cs::Int32(ints.length())) {
                    ints[j] = num;
                }
            }
            return;
        }
        if (type == 2) {
            if ([&]() {
                    auto cs_left = pls::cs::box(lngs);
                    auto cs_right = pls::cs::box(LongArray{});
                    return cs_left == cs_right;
                }()) {
                lngs = LongArray::make(size);
            }
            for (pls::cs::Int32 k = 0; k < size; ++k) {
                pls::cs::Int64 num1 = StreamUtil::ReadLong(stream);
                if (0 <= k && k < pls::cs::Int32(lngs.length())) {
                    lngs[k] = num1;
                }
            }
            return;
        }
        if (type == 3) {
            if ([&]() {
                    auto cs_left = pls::cs::box(strs);
                    auto cs_right = pls::cs::box(StringArray{});
                    return cs_left == cs_right;
                }()) {
                strs = StringArray::make(size);
            }
            for (pls::cs::Int32 l = 0; l < size; ++l) {
                ByteArray numArray = StreamUtil::ReadBool(stream, true);
                if (0 <= l && l < pls::cs::Int32(strs.length())) {
                    {
                        auto cs_target = strs;
                        auto cs_index = l;
                        auto cs_value = StringUtil::GetString(numArray);
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

// M:kairo.unity.util.Property.Write(java.io.OutputStream,System.Int32)
void Property::Write(pls::cs::Ref<java::io::OutputStream> os, pls::cs::Int32 type) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Property.Write(java.io.OutputStream,System.Int32)",
                     kairo);
    {
        if (type == 0) {
            if ([&]() {
                    auto cs_left = pls::cs::box(pros);
                    auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<Property>>{});
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
                    auto cs_right = pls::cs::box(IntArray{});
                    return cs_left == cs_right;
                }()) {
                return;
            }
            for (pls::cs::Int32 j = 0; j < pls::cs::Int32(ints.length()); ++j) {
                StreamUtil::WriteInt(os, ints[j]);
            }
            return;
        }
        if (type == 2) {
            if ([&]() {
                    auto cs_left = pls::cs::box(lngs);
                    auto cs_right = pls::cs::box(LongArray{});
                    return cs_left == cs_right;
                }()) {
                return;
            }
            for (pls::cs::Int32 k = 0; k < pls::cs::Int32(lngs.length()); ++k) {
                StreamUtil::WriteLong(os, lngs[k]);
            }
            return;
        }
        if (type == 3) {
            if ([&]() {
                    auto cs_left = pls::cs::box(strs);
                    auto cs_right = pls::cs::box(StringArray{});
                    return cs_left == cs_right;
                }()) {
                return;
            }
            for (pls::cs::Int32 l = 0; l < pls::cs::Int32(strs.length()); ++l) {
                StreamUtil::Write(os, java::lang::StringEx::GetBytes(strs[l]), true);
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

// M:kairo.unity.util.Property.Size(System.Int32)
pls::cs::Int32 Property::Size(pls::cs::Int32 type) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Property.Size(System.Int32)", kairo);
    {
        if (type == 0 && ([&]() {
                auto cs_left = pls::cs::box(pros);
                auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<Property>>{});
                return cs_left != cs_right;
            }())) {
            return pros.length();
        }
        if (type == 1 && ([&]() {
                auto cs_left = pls::cs::box(ints);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left != cs_right;
            }())) {
            return ints.length();
        }
        if (type == 2 && ([&]() {
                auto cs_left = pls::cs::box(lngs);
                auto cs_right = pls::cs::box(LongArray{});
                return cs_left != cs_right;
            }())) {
            return lngs.length();
        }
        if (type == 3 && ([&]() {
                auto cs_left = pls::cs::box(strs);
                auto cs_right = pls::cs::box(StringArray{});
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

// M:kairo.unity.util.Property.GetTypeNum
pls::cs::Int32 Property::GetTypeNum() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Property.GetTypeNum", kairo);
    {
        return 5;
    }
}
} // namespace kairo::unity::util
}
