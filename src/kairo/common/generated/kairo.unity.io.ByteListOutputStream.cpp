// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.io.OutputStream.hpp"
#include "java.lang.JSystem.hpp"
#include "java.util.JTool.hpp"
#include "kairo.unity.io.ByteListOutputStream.hpp"
#include "java.util.JTool_templates.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::generated {
namespace kairo::unity::io {

void ByteListOutputStream::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    OutputStream::trace_edges(visitor);
    pls::cs::trace_value(list_, visitor);
}

static PLS_NOINLINE void cs_init_832d81e198eeeec2_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.io.ByteListOutputStream", flag, []() {

    });
}

void ByteListOutputStream::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_832d81e198eeeec2_slow(flag);
}

void ByteListOutputStream::create_init(pls::cs::Ref<ByteListOutputStream> self) {
    ByteListOutputStream::ensure_initialized();
    OutputStream::create_init(pls::cs::static_pointer_cast<OutputStream>(self));
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.ByteListOutputStream.#ctor", kairo);
    {
        self->_init(1);
    }
}

void ByteListOutputStream::Close(pls::cs::Ref<ByteListOutputStream> self) {
    require(self)->ByteListOutputStream::Close();
}

void ByteListOutputStream::Flush(pls::cs::Ref<ByteListOutputStream> self) {
    require(self)->ByteListOutputStream::Flush();
}

void ByteListOutputStream::Write(pls::cs::Ref<ByteListOutputStream> self, ByteArray b, pls::cs::Int32 off,
                                 pls::cs::Int32 len) {
    require(self)->ByteListOutputStream::Write(b, off, len);
}

void ByteListOutputStream::Write(pls::cs::Ref<ByteListOutputStream> self, ByteArray b) {
    require(self)->ByteListOutputStream::Write(b);
}

void ByteListOutputStream::WriteInt(pls::cs::Ref<ByteListOutputStream> self, pls::cs::Int32 b) {
    require(self)->ByteListOutputStream::Write(b);
}

// M:kairo.unity.io.ByteListOutputStream.#ctor
pls::cs::Ref<ByteListOutputStream> ByteListOutputStream::create() {
    ByteListOutputStream::ensure_initialized();
    auto self = pls::cs::make_ref<ByteListOutputStream>();
    ByteListOutputStream::create_init(self);
    return self;
}

// M:kairo.unity.io.ByteListOutputStream._init(System.Int32)
void ByteListOutputStream::_init(pls::cs::Int32 listNum) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.ByteListOutputStream._init(System.Int32)", kairo);
    {
        list_ = java::util::JTool::MakeArray<pls::cs::Array<ByteArray>>(IntArray::from({listNum, 256}));
        count_ = 0;
        cidx_ = 0;
        clst_ = cidx_;
    }
}

// M:kairo.unity.io.ByteListOutputStream.Close
void ByteListOutputStream::Close() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.ByteListOutputStream.Close", kairo);
    {
        for (pls::cs::Int32 num = pls::cs::Int32(list_.length()) - 1; num >= 1; --num) {
            list_[num] = ByteArray{};
        }
        list_ = pls::cs::Array<ByteArray>{};
        count_ = 0;
        cidx_ = 0;
        clst_ = cidx_;
    }
}

// M:kairo.unity.io.ByteListOutputStream.Size
pls::cs::Int32 ByteListOutputStream::Size() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.ByteListOutputStream.Size", kairo);
    {
        return count_;
    }
}

// M:kairo.unity.io.ByteListOutputStream.ToByteArray(System.Int32,System.Int32)
ByteArray ByteListOutputStream::ToByteArray(pls::cs::Int32 index, pls::cs::Int32 length) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.io.ByteListOutputStream.ToByteArray(System.Int32,System.Int32)", kairo);
    {
        return ToByteArray(index, length, ByteArray{});
    }
}

// M:kairo.unity.io.ByteListOutputStream.ToByteArray(System.Int32,System.Int32,System.Byte[])
ByteArray ByteListOutputStream::ToByteArray(pls::cs::Int32 index, pls::cs::Int32 length, ByteArray dst) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.io.ByteListOutputStream.ToByteArray(System.Int32,System.Int32,System.Byte[])", kairo);
    {
        if ([&]() {
                auto cs_left = pls::cs::box(dst);
                auto cs_right = pls::cs::box(ByteArray{});
                return cs_left == cs_right;
            }()) {
            dst = ByteArray::make(length);
        }
        pls::cs::Int32 num = index / 256;
        pls::cs::Int32 num2 = index % 256;
        pls::cs::Int32 num3 = 0;
        pls::cs::Int32 num4 = num;
        while (num4 < list_.length() && num3 < length) {
            ByteArray array = list_[num4];
            pls::cs::Int32 num5 = length - num3;
            if (num5 > (array.length() - num2)) {
                num5 = (array.length() - num2);
            }
            java::lang::JSystem::Arraycopy(pls::cs::box(array), num2, pls::cs::box(dst), num3, num5);
            num3 += num5;
            num2 = 0;
            ++num4;
        }
        return dst;
    }
}

// M:kairo.unity.io.ByteListOutputStream.Write(System.Byte[],System.Int32,System.Int32)
void ByteListOutputStream::Write(ByteArray b, pls::cs::Int32 off, pls::cs::Int32 len) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.io.ByteListOutputStream.Write(System.Byte[],System.Int32,System.Int32)",
                     kairo);
    {
        pls::cs::Int32 num = off;
        while (len > 0) {
            if (cidx_ >= 256) {
                ++clst_;
                cidx_ = 0;
                if (clst_ >= list_.length()) {
                    _expand();
                }
            }
            pls::cs::Int32 num2 = 256 - cidx_;
            if (num2 > len) {
                num2 = len;
            }
            {
                pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(list_[clst_]);
                pls::cs::Int32 cs_arg3 = cidx_;
                java::lang::JSystem::Arraycopy(pls::cs::box(b), num, cs_arg2, cs_arg3, num2);
            }
            cidx_ = cidx_ + num2;
            count_ = count_ + num2;
            len = len - num2;
            num += num2;
        }
    }
}

// M:kairo.unity.io.ByteListOutputStream.Write(System.Byte[])
void ByteListOutputStream::Write(ByteArray b) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.ByteListOutputStream.Write(System.Byte[])", kairo);
    {
        this->Write(b, 0, b.length());
    }
}

// M:kairo.unity.io.ByteListOutputStream.Write(System.Int32)
void ByteListOutputStream::Write(pls::cs::Int32 b) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.ByteListOutputStream.Write(System.Int32)", kairo);
    {
        if (cidx_ >= 256) {
            ++clst_;
            cidx_ = 0;
            if (clst_ >= list_.length()) {
                _expand();
            }
        }
        list_[clst_][cidx_] = pls::cs::cast_integral<std::uint8_t>((b & 0xFF));
        ++cidx_;
        ++count_;
    }
}

// M:kairo.unity.io.ByteListOutputStream.Flush
void ByteListOutputStream::Flush() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.ByteListOutputStream.Flush", kairo);
    {
        OutputStream::Flush();
    }
}

// M:kairo.unity.io.ByteListOutputStream._expand
void ByteListOutputStream::_expand() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.io.ByteListOutputStream._expand", kairo);
    {
        pls::cs::Array<ByteArray> array = pls::cs::Array<ByteArray>::make(pls::cs::Int32(list_.length()) + 1);
        java::lang::JSystem::Arraycopy(pls::cs::box(list_), 0, pls::cs::box(array), 0, list_.length());
        {
            auto cs_target = array;
            auto cs_index = pls::cs::Int32(array.length()) - 1;
            auto cs_value = ByteArray::make(256);
            cs_target.set_Item(cs_index, cs_value);
        }
        list_ = array;
    }
}
} // namespace kairo::unity::io
}
