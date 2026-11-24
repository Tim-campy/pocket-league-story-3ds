// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.io.ByteArrayOutputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.lang.JSystem.hpp"
#include "kairo.common.cfg.Config.hpp"
#include "kairo.unity.util.Compressor.Node.hpp"
#include "kairo.unity.util.Compressor.hpp"
#include "kairo.unity.util.EncodeUtil.hpp"
#include "kairo.unity.util.FastVector.hpp"
#include "kairo.unity.util.FastVector_1.hpp"
#include "kairo.unity.util.Log.hpp"
#include "kairo.unity.util.StreamUtil.hpp"
#include "kairo.unity.util.FastVector_1_templates.hpp"
using ByteArray = pls::cs::Array<std::uint8_t>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::generated {
namespace kairo::unity::util::Compressor {

static IntArray _getLowestNode_result_storage{};

static ByteArray bitBuffer__storage{};

static pls::cs::Int32 bitPoint__storage{};

static ByteArray bits__storage{};

static pls::cs::Array<pls::cs::Ref<Compressor_Node>> nodeTbl__storage{};

static ByteArray nullbits__storage{};

static IntArray weights__storage{};

static PLS_NOINLINE void cs_init_18054fa8aeee43c7_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(_getLowestNode_result_storage, visitor);
        pls::cs::trace_value(bitBuffer__storage, visitor);
        pls::cs::trace_value(bitPoint__storage, visitor);
        pls::cs::trace_value(bits__storage, visitor);
        pls::cs::trace_value(nodeTbl__storage, visitor);
        pls::cs::trace_value(nullbits__storage, visitor);
        pls::cs::trace_value(weights__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.util.Compressor", flag, []() {
        weights__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Compressor.weights_",
                                                                    [&]() { return IntArray::make(256); });
        nodeTbl__storage =
            pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Compressor.nodeTbl_", [&]() {
                return pls::cs::Array<pls::cs::Ref<Compressor_Node>>::make(256);
            });
        bits__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.util.Compressor.bits_",
                                                                 [&]() { return ByteArray::make(256); });
        nullbits__storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.unity.util.Compressor.nullbits_", [&]() { return ByteArray::make(256); });
        _getLowestNode_result_storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.unity.util.Compressor._getLowestNode_result", [&]() { return IntArray::make(2); });
    });
}

void ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_18054fa8aeee43c7_slow(flag);
}

IntArray& _getLowestNode_result() {
    Compressor::ensure_initialized();
    return _getLowestNode_result_storage;
}

ByteArray& bitBuffer_() {
    Compressor::ensure_initialized();
    return bitBuffer__storage;
}

pls::cs::Int32& bitPoint_() {
    Compressor::ensure_initialized();
    return bitPoint__storage;
}

ByteArray& bits_() {
    Compressor::ensure_initialized();
    return bits__storage;
}

pls::cs::Array<pls::cs::Ref<Compressor_Node>>& nodeTbl_() {
    Compressor::ensure_initialized();
    return nodeTbl__storage;
}

ByteArray& nullbits_() {
    Compressor::ensure_initialized();
    return nullbits__storage;
}

IntArray& weights_() {
    Compressor::ensure_initialized();
    return weights__storage;
}

// M:kairo.unity.util.Compressor.Compress(System.Byte[])
ByteArray Compress(ByteArray data) {
    Compressor::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Compressor.Compress(System.Byte[])", kairo);
    {
        common::cfg::Config::ensure_initialized();

        if (([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(ByteArray{});
                return cs_left == cs_right;
            }()) ||
            (data.length() == 0)) {
            return data;
        }
        pls::cs::Int64 num = java::lang::JSystem::CurrentTimeMillis();
        pls::cs::Ref<FastVector> fastVector = pls::cs::Ref<FastVector>{};
        for (pls::cs::Int32 i = 0; i < Compressor::weights_().length(); ++i) {
            Compressor::weights_()[i] = 0;
        }
        for (pls::cs::Int32 j = 0; j < Compressor::nodeTbl_().length(); ++j) {
            Compressor::nodeTbl_().set_Item(j, pls::cs::Ref<Compressor_Node>{});
        }
        java::lang::JSystem::Arraycopy(pls::cs::box(Compressor::nullbits_()), 0,
                                       pls::cs::box(Compressor::bits_()), 0, Compressor::bits_().length());
        for (pls::cs::Int32 k = 0; k < data.length(); ++k) {
            Compressor::weights_()[data[k] & 0xFF]++;
        }
        fastVector = FastVector::create();
        for (pls::cs::Int32 l = 0; l < Compressor::weights_().length(); ++l) {
            if (Compressor::weights_()[l] > 0) {
                pls::cs::Ref<Compressor_Node> node =
                    Compressor_Node::create(pls::cs::Ref<Compressor_Node>{}, pls::cs::Ref<Compressor_Node>{},
                                            pls::cs::Ref<Compressor_Node>{}, Compressor::weights_()[l], l);
                util::FastVector_2_AddElement(require(fastVector), pls::cs::box(node));
                Compressor::nodeTbl_().set_Item(l, node);
            }
        }
        if (require(fastVector)->elementCount == 1) {
            pls::cs::Ref<Compressor_Node> node2 =
                pls::cs::unbox<pls::cs::Ref<Compressor_Node>>(require(fastVector)->elementData.get_Item(0));
            pls::cs::Ref<Compressor_Node> node3 =
                Compressor_Node::create(pls::cs::Ref<Compressor_Node>{}, node2, node2,
                                        require(node2)->weight_ + require(node2)->weight_, 0);
            require(node2)->parent_ = node3;
            require(fastVector)->elementData.set_Item(0, pls::cs::box(node3));
        } else {
            while (require(fastVector)->elementCount >= 2) {
                IntArray array = Compressor::_getLowestNode(fastVector);
                pls::cs::Ref<Compressor_Node> node4 = pls::cs::unbox<pls::cs::Ref<Compressor_Node>>(
                    require(fastVector)->elementData.get_Item(array[1]));
                pls::cs::Ref<Compressor_Node> node5 = pls::cs::unbox<pls::cs::Ref<Compressor_Node>>(
                    require(fastVector)->elementData.get_Item(array[0]));
                pls::cs::Ref<Compressor_Node> recoveredCombinedNode =
                    Compressor_Node::create(pls::cs::Ref<Compressor_Node>{}, node4, node5,
                                            require(node4)->weight_ + require(node5)->weight_, 0);
                require(node4)->parent_ = recoveredCombinedNode;
                require(node5)->parent_ = recoveredCombinedNode;
                util::FastVector_2_AddElement(require(fastVector), pls::cs::box(recoveredCombinedNode));
                util::FastVector_2_RemoveElement(require(fastVector), pls::cs::box(node4));
                util::FastVector_2_RemoveElement(require(fastVector), pls::cs::box(node5));
            }
        }
        if (common::cfg::Config::PRINT()) {
            Log::Info(
                pls::cs::String::concat(literal(u"符号化時間="),
                                        integer_string((java::lang::JSystem::CurrentTimeMillis() - num))),
                pls::cs::Ref<pls::cs::ExceptionObject>{});
        }
        num = java::lang::JSystem::CurrentTimeMillis();
        Compressor::_setBitBuffer(ByteArray::make(1024));
        Compressor::_writeNodeToBitBuffer(
            pls::cs::unbox<pls::cs::Ref<Compressor_Node>>(require(fastVector)->elementData.get_Item(0)));
        pls::cs::Int32 num2 = 0;
        for (pls::cs::Int32 m = 0; m < data.length(); ++m) {
            pls::cs::Int32 num3 = (data[m] & 0xFF);
            pls::cs::Ref<Compressor_Node> node6 = Compressor::nodeTbl_().get_Item(num3);
            while (!is_null(require(node6)->parent_)) {
                pls::cs::Ref<Compressor_Node> parent_ = require(node6)->parent_;
                if (pls::cs::box(require(parent_)->left_) == pls::cs::box(node6)) {
                    {
                        auto cs_target = Compressor::bits_();
                        auto cs_index = num2++;
                        auto cs_value = pls::cs::cast_integral<std::uint8_t>(0);
                        cs_target.set_Item(cs_index, cs_value);
                    }
                } else if (pls::cs::box(require(parent_)->right_) == pls::cs::box(node6)) {
                    {
                        auto cs_target = Compressor::bits_();
                        auto cs_index = num2++;
                        auto cs_value = pls::cs::cast_integral<std::uint8_t>(1);
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
                node6 = require(node6)->parent_;
                parent_ = require(node6)->parent_;
            }
            pls::cs::Int32 length = num2;
            for (num2--; num2 >= 0; --num2) {
                Compressor::_writeBit(pls::cs::cast_integral<pls::cs::Int32>(Compressor::bits_()[num2]));
            }
            num2 = 0;
            java::lang::JSystem::Arraycopy(pls::cs::box(Compressor::nullbits_()), 0,
                                           pls::cs::box(Compressor::bits_()), 0, length);
        }
        if (common::cfg::Config::PRINT()) {
            Log::Info(
                pls::cs::String::concat(literal(u"圧縮時間="),
                                        integer_string((java::lang::JSystem::CurrentTimeMillis() - num))),
                pls::cs::Ref<pls::cs::ExceptionObject>{});
        }
        ByteArray array2 = ByteArray{};
        pls::cs::Ref<java::io::ByteArrayOutputStream> byteArrayOutputStream =
            pls::cs::Ref<java::io::ByteArrayOutputStream>{};
        pls::cs::run_finally(
            [&]() {
                {
                    byteArrayOutputStream = java::io::ByteArrayOutputStream::create();
                    ByteArray data2 = Compressor::_getBitBuffer();
                    StreamUtil::WriteInt(
                        static_cast<pls::cs::Ref<java::io::OutputStream>>(byteArrayOutputStream),
                        Compressor::bitPoint_());
                    StreamUtil::Write(byteArrayOutputStream, data2);
                    array2 = require(byteArrayOutputStream)->ToByteArray();
                }
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
        return array2;
    }
}

// M:kairo.unity.util.Compressor.Expand(System.Byte[])
ByteArray Expand(ByteArray data) {
    Compressor::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Compressor.Expand(System.Byte[])", kairo);
    {
        common::cfg::Config::ensure_initialized();

        if (([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(ByteArray{});
                return cs_left == cs_right;
            }()) ||
            (data.length() == 0)) {
            return data;
        }
        pls::cs::Int64 num = java::lang::JSystem::CurrentTimeMillis();
        Compressor::_setBitBuffer(data);
        pls::cs::Int32 num2 = EncodeUtil::ByteAryToInt(data, true) + 32;
        {
            auto cs_old = Compressor::bitPoint_();
            auto cs_rhs = 32;
            pls::cs::Int32 cs_value = cs_old + cs_rhs;
            Compressor::bitPoint_() = cs_value;
        }
        pls::cs::Ref<Compressor_Node> node = Compressor::_readNodeFromBitBuffer();
        pls::cs::Ref<java::io::ByteArrayOutputStream> byteArrayOutputStream =
            pls::cs::Ref<java::io::ByteArrayOutputStream>{};
        {
            auto cs_flow_3 = pls::cs::run_finally(
                [&]() -> pls::cs::Flow<ByteArray> {
                    {
                        byteArrayOutputStream = java::io::ByteArrayOutputStream::create();
                        while (Compressor::bitPoint_() < num2) {
                            pls::cs::Ref<Compressor_Node> node2 = node;
                            while (!is_null(require(node2)->left_)) {
                                if (!((Compressor::_readBit() != 0))) {
                                    node2 = require(node2)->left_;
                                } else {
                                    node2 = require(node2)->right_;
                                }
                            }
                            require(byteArrayOutputStream)
                                ->Write(pls::cs::cast_integral<pls::cs::Int32>(
                                    pls::cs::cast_integral<std::uint8_t>(require(node2)->value_)));
                        }
                        if (common::cfg::Config::PRINT()) {
                            Log::Info(pls::cs::String::concat(
                                          literal(u"解凍時間="),
                                          integer_string((java::lang::JSystem::CurrentTimeMillis() - num))),
                                      pls::cs::Ref<pls::cs::ExceptionObject>{});
                        }
                        return pls::cs::flow_return(require(byteArrayOutputStream)->ToByteArray());
                    }
                    return {};
                },
                [&]() {
                    if (!is_null(byteArrayOutputStream)) {
                        try {
                            require(byteArrayOutputStream)->Close();
                        } catch (const pls::cs::Exception& cs_caught_2) {
                            pls::cs::capture_exception(cs_caught_2);
                            {
                            }
                        }
                    }
                    byteArrayOutputStream = pls::cs::Ref<java::io::ByteArrayOutputStream>{};
                });
            return cs_flow_3.value();
        }
    }
}

// M:kairo.unity.util.Compressor._writeNodeToBitBuffer(kairo.unity.util.Compressor.Node)
void _writeNodeToBitBuffer(pls::cs::Ref<Compressor_Node> node) {
    Compressor::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.Compressor._writeNodeToBitBuffer(kairo.unity.util.Compressor.Node)",
                     kairo);
    {
        if (is_null(require(node)->left_) && is_null(require(node)->right_)) {
            Compressor::_writeBit(1);
            Compressor::_writeByte(require(node)->value_);
            return;
        }
        if (!is_null(require(node)->left_)) {
            Compressor::_writeBit(0);
            Compressor::_writeNodeToBitBuffer(require(node)->left_);
        }
        if (!is_null(require(node)->right_)) {
            Compressor::_writeBit(0);
            Compressor::_writeNodeToBitBuffer(require(node)->right_);
        }
    }
}

// M:kairo.unity.util.Compressor._readNodeFromBitBuffer
pls::cs::Ref<Compressor_Node> _readNodeFromBitBuffer() {
    Compressor::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Compressor._readNodeFromBitBuffer", kairo);
    {
        pls::cs::Ref<Compressor_Node> node = Compressor_Node::create();
        pls::cs::Int32 num = 0;
        num = Compressor::_readBit();
        if (num == 1) {
            {
                auto cs_target = node;
                pls::cs::Int32 cs_value = Compressor::_readByte();
                require(cs_target)->value_ = cs_value;
            }
        } else {
            if (num == 0) {
                {
                    auto cs_target = node;
                    auto cs_value = Compressor::_readNodeFromBitBuffer();
                    require(cs_target)->left_ = cs_value;
                }
                require(require(node)->left_)->parent_ = node;
            }
            num = Compressor::_readBit();
            if (num == 0) {
                {
                    auto cs_target = node;
                    auto cs_value = Compressor::_readNodeFromBitBuffer();
                    require(cs_target)->right_ = cs_value;
                }
                require(require(node)->right_)->parent_ = node;
            }
        }
        return node;
    }
}

// M:kairo.unity.util.Compressor._getLowestNode(kairo.unity.util.FastVector)
IntArray _getLowestNode(pls::cs::Ref<FastVector> list) {
    Compressor::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.util.Compressor._getLowestNode(kairo.unity.util.FastVector)", kairo);
    {
        pls::cs::Int32 num = -1;
        pls::cs::Int32 num2 = -1;
        for (pls::cs::Int32 i = 0; i < require(list)->elementCount; ++i) {
            if (num == -1 || ([&]() -> bool {
                    auto cs_left = require((pls::cs::unbox<pls::cs::Ref<Compressor_Node>>(
                                               require(list)->elementData.get_Item(num))))
                                       ->weight_;
                    auto cs_right = require((pls::cs::unbox<pls::cs::Ref<Compressor_Node>>(
                                                require(list)->elementData.get_Item(i))))
                                        ->weight_;
                    return cs_left >= cs_right;
                }())) {
                num = i;
            }
        }
        for (pls::cs::Int32 j = 0; j < require(list)->elementCount; ++j) {
            if (j != num && (num2 == -1 || ([&]() -> bool {
                                 auto cs_left = require((pls::cs::unbox<pls::cs::Ref<Compressor_Node>>(
                                                            require(list)->elementData.get_Item(num2))))
                                                    ->weight_;
                                 auto cs_right = require((pls::cs::unbox<pls::cs::Ref<Compressor_Node>>(
                                                             require(list)->elementData.get_Item(j))))
                                                     ->weight_;
                                 return cs_left >= cs_right;
                             }()))) {
                num2 = j;
            }
        }
        Compressor::_getLowestNode_result()[0] = num;
        Compressor::_getLowestNode_result()[1] = num2;
        return Compressor::_getLowestNode_result();
    }
}

// M:kairo.unity.util.Compressor._setBitBuffer(System.Byte[])
void _setBitBuffer(ByteArray data) {
    Compressor::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Compressor._setBitBuffer(System.Byte[])", kairo);
    {
        Compressor::bitBuffer_() = data;
        Compressor::bitPoint_() = 0;
    }
}

// M:kairo.unity.util.Compressor._getBitBuffer
ByteArray _getBitBuffer() {
    Compressor::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Compressor._getBitBuffer", kairo);
    {
        ByteArray array = ByteArray::make((Compressor::bitPoint_() + 8 - 1) / 8);
        java::lang::JSystem::Arraycopy(pls::cs::box(Compressor::bitBuffer_()), 0, pls::cs::box(array), 0,
                                       array.length());
        return array;
    }
}

// M:kairo.unity.util.Compressor._writeBit(System.Int32)
void _writeBit(pls::cs::Int32 bit) {
    Compressor::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Compressor._writeBit(System.Int32)", kairo);
    {
        if (pls::cs::Int32(Compressor::bitBuffer_().length()) * 8 <= Compressor::bitPoint_()) {
            ByteArray dst = ByteArray::make(pls::cs::Int32(Compressor::bitBuffer_().length()) * 2);
            java::lang::JSystem::Arraycopy(pls::cs::box(Compressor::bitBuffer_()), 0, pls::cs::box(dst), 0,
                                           Compressor::bitBuffer_().length());
            Compressor::bitBuffer_() = dst;
        }
        Compressor::bitBuffer_()[Compressor::bitPoint_() / 8] = pls::cs::cast_integral<std::uint8_t>(
            ((Compressor::bitBuffer_()[Compressor::bitPoint_() / 8] & 0xFF) |
             (bit << (Compressor::bitPoint_() % 8))));
        ++Compressor::bitPoint_();
    }
}

// M:kairo.unity.util.Compressor._writeByte(System.Int32)
void _writeByte(pls::cs::Int32 v) {
    Compressor::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Compressor._writeByte(System.Int32)", kairo);
    {
        for (pls::cs::Int32 i = 0; i < 8; ++i) {
            Compressor::_writeBit((v & (pls::cs::Int32(1) << i)) >> i);
        }
    }
}

// M:kairo.unity.util.Compressor._readBit
pls::cs::Int32 _readBit() {
    Compressor::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Compressor._readBit", kairo);
    {
        pls::cs::Int32 result = (Compressor::bitBuffer_()[Compressor::bitPoint_() / 8] & 0xFF &
                                 (pls::cs::Int32(1) << (Compressor::bitPoint_() % 8))) >>
                                (Compressor::bitPoint_() % 8);
        ++Compressor::bitPoint_();
        return result;
    }
}

// M:kairo.unity.util.Compressor._readByte
pls::cs::Int32 _readByte() {
    Compressor::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.util.Compressor._readByte", kairo);
    {
        pls::cs::Int32 num = 0;
        for (pls::cs::Int32 i = 0; i < 8; ++i) {
            pls::cs::Int32 num2 = Compressor::_readBit();
            num = (num | (num2 << i));
        }
        return num;
    }
}
} // namespace kairo::unity::util::Compressor
}
