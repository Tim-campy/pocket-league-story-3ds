// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.io.ByteArrayInputStream.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.StreamUtil.hpp"
#include "kairo.unity.math.KairoMath.hpp"
#include "kairo.unity.ui.Image.hpp"
#include "generated/java.util.JTool_templates.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ShortArray = pls::cs::Array<std::int16_t>;
using ByteArray = pls::cs::Array<std::uint8_t>;
using IntArray = pls::cs::Array<pls::cs::Int32>;

namespace pls::game {
namespace kairo::unity::ui::Image {

// M:kairo.unity.ui.Image.LoadOptimize(java.io.InputStream,kairo.unity.ui.Image[])
void LoadOptimize(pls::cs::Ref<pls::kairo::Image> self, pls::cs::Ref<kl_io::InputStream> stream,
                  pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> images) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.ui.Image.LoadOptimize(java.io.InputStream,kairo.unity.ui.Image[])",
                     kairo);
    {
        self->images_ = images;
        self->optimizeSeb_ = pls::cs::Array<std::int8_t>{};
        pls::cs::Int32 num = 0;
        pls::cs::Ref<kl_java_util::Vector> vector = kl_java_util::Vector::create();
        pls::cs::Ref<kl_java_util::Vector> vector2 = kl_java_util::Vector::create();
        self->optimizeBlockWidth_ = pls::cs::cast_integral<std::int16_t>(pls::diagnostic::api_call(
            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadByte(stream); }));
        if (pls::cs::cast_integral<pls::cs::Int32>(self->optimizeBlockWidth_) == -1) {
            self->optimizeBlockHeight_ = pls::cs::cast_integral<std::int16_t>(-1);
            self->optimizePass_ = 1;
            pls::cs::Int32 num2 = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadByte(stream); }));
            pls::cs::Array<ShortArray> array = pls::cs::Array<ShortArray>::make(num2);
            self->optimizeSeb_ = pls::cs::Array<std::int8_t>::make(num2 * 4);
            pls::cs::Ref<kl_java_util::Vector> vector3 = pls::cs::Ref<kl_java_util::Vector>{};
            for (pls::cs::Int32 i = 0; i < array.length(); ++i) {
                num2 = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
                    [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadByte(stream); }));
                bool flag = false;
                ShortArray array2 = ShortArray::make(4);
                for (pls::cs::Int32 j = 0; j < array2.length(); ++j) {
                    array2[j] = pls::cs::cast_integral<std::int16_t>(
                        (pls::diagnostic::api_call([&]() -> decltype(auto) {
                             return kl_unity_util::StreamUtil::ReadByte(stream);
                         }) &
                         0xFF));
                    if (pls::cs::cast_integral<pls::cs::Int32>(array2[j]) > 255) {
                        flag = true;
                    }
                }
                if (flag || (pls::cs::cast_integral<pls::cs::Int32>(array2[0]) == 255)) {
                    if ([&]() {
                            pls::cs::Ref<kl_java_util::Vector_2<pls::cs::Ref<pls::cs::Object>>> cs_left =
                                vector3;
                            pls::cs::Ref<kl_java_util::Vector> cs_right =
                                pls::cs::Ref<kl_java_util::Vector>{};
                            return kl_java_util::Vector_2_op_Equality(cs_left, cs_right);
                        }()) {
                        vector3 = kl_java_util::Vector::create();
                    }
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return kl_java_util::Vector_2_AddElement(require(vector3), pls::cs::box(array2));
                    });
                    self->optimizeSeb_[i * 4 + 0] = pls::cs::cast_integral<std::int8_t>(-1);
                    {
                        auto cs_target = self->optimizeSeb_;
                        auto cs_index = i * 4 + 1;
                        auto cs_value = pls::cs::cast_integral<std::int8_t>(
                            (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                 return kl_java_util::Vector_2_Size(require(vector3));
                             }) -
                             1));
                        cs_target.set_Item(cs_index, cs_value);
                    }
                } else {
                    for (pls::cs::Int32 k = 0; k < array2.length(); ++k) {
                        self->optimizeSeb_[i * 4 + k] = pls::cs::cast_integral<std::int8_t>(array2[k]);
                    }
                }
                array[i] = ShortArray::make(num2 * 7);
                for (pls::cs::Int32 l = 0; l < array[i].length(); ++l) {
                    {
                        auto cs_target = array[i];
                        auto cs_index = l;
                        auto cs_value = pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); });
                        cs_target.set_Item(cs_index, cs_value);
                    }
                }
                if (self->optimizePass_ < num2) {
                    self->optimizePass_ = num2;
                }
            }
            if ([&]() {
                    pls::cs::Ref<kl_java_util::Vector_2<pls::cs::Ref<pls::cs::Object>>> cs_left = vector3;
                    pls::cs::Ref<kl_java_util::Vector> cs_right = pls::cs::Ref<kl_java_util::Vector>{};
                    return kl_java_util::Vector_2_op_Inequality(cs_left, cs_right);
                }()) {
                self->optimizeSebEx_ =
                    ShortArray::make(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                         return kl_java_util::Vector_2_Size(require(vector3));
                                     }) *
                                     4);
                for (pls::cs::Int32 m = 0; m < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(require(vector3));
                                           });
                     ++m) {
                    pls::diagnostic::api_call([&]() -> decltype(auto) {
                        return ([&]() -> void {
                            pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(
                                pls::cs::unbox<ShortArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_java_util::Vector_2_ElementAt(require(vector3), m);
                                })));
                            pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(self->optimizeSebEx_);
                            kl_lang::JSystem::Arraycopy(cs_arg0, 0, cs_arg2, m * 4, 4);
                        }());
                    });
                }
            }
            self->optimizeAccessL_ = ShortArray::make(pls::cs::Int32(array.length()) * self->optimizePass_);
            for (pls::cs::Int32 n = 0; n < array.length(); ++n) {
                ShortArray array3 = array[n];
                pls::cs::Int32 num3;
                for (([&]() {
                         pls::cs::Int32 cs_value = 0;
                         num3 = cs_value;
                         return cs_value;
                     }());
                     num3 < self->optimizePass_; ++num3) {
                    self->optimizeAccessL_[n * self->optimizePass_ + num3] =
                        pls::cs::cast_integral<std::int16_t>(-1);
                }
                pls::cs::Int32 num4 = 0;
                pls::cs::Int32 num5 = 0;
                while (num4 < array3.length()) {
                    ByteArray array4 = ByteArray::make(7);
                    for (pls::cs::Int32 num6 = 0; num6 < 7; ++num6) {
                        array4[num6] = pls::cs::cast_integral<std::uint8_t>(array3[num4 + num6]);
                    }
                    std::int16_t num7 = pls::cs::cast_integral<std::int16_t>(-1);
                    if (([&]() -> bool {
                            auto cs_left = pls::cs::cast_integral<pls::cs::Int32>(array4[0]);
                            auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(array3[num4 + 0]);
                            return cs_left != cs_right;
                        }()) ||
                        ([&]() -> bool {
                            auto cs_left = (array4[1] & 0xFF);
                            auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(array3[num4 + 1]);
                            return cs_left != cs_right;
                        }()) ||
                        ([&]() -> bool {
                            auto cs_left = (array4[2] & 0xFF);
                            auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(array3[num4 + 2]);
                            return cs_left != cs_right;
                        }()) ||
                        ([&]() -> bool {
                            auto cs_left = (array4[3] & 0xFF);
                            auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(array3[num4 + 3]);
                            return cs_left != cs_right;
                        }()) ||
                        ([&]() -> bool {
                            auto cs_left = (array4[4] & 0xFF);
                            auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(array3[num4 + 4]);
                            return cs_left != cs_right;
                        }()) ||
                        ([&]() -> bool {
                            auto cs_left = (array4[5] & 0xFF);
                            auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(array3[num4 + 5]);
                            return cs_left != cs_right;
                        }()) ||
                        ([&]() -> bool {
                            auto cs_left = (array4[6] & 0xFF);
                            auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(array3[num4 + 6]);
                            return cs_left != cs_right;
                        }())) {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_AddElement(require(vector2), pls::cs::box(array3));
                        });
                        num7 = pls::cs::cast_integral<std::int16_t>(
                            (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                 return kl_java_util::Vector_2_Size(require(vector2));
                             }) -
                             1));
                        if (num < pls::cs::cast_integral<pls::cs::Int32>(num7)) {
                            num = pls::cs::cast_integral<pls::cs::Int32>(num7);
                        }
                        std::uint16_t num8 = pls::cs::cast_integral<std::uint16_t>(32768);
                        num7 = (num7 | pls::cs::cast_integral<std::int16_t>(num8));
                    } else {
                        pls::diagnostic::api_call([&]() -> decltype(auto) {
                            return kl_java_util::Vector_2_AddElement(require(vector), pls::cs::box(array4));
                        });
                        num7 = pls::cs::cast_integral<std::int16_t>(
                            (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                 return kl_java_util::Vector_2_Size(require(vector));
                             }) -
                             1));
                        if (num < pls::cs::cast_integral<pls::cs::Int32>(num7)) {
                            num = pls::cs::cast_integral<pls::cs::Int32>(num7);
                        }
                    }
                    self->optimizeAccessL_[n * self->optimizePass_ + num5] = num7;
                    num4 += 7;
                    ++num5;
                }
                array[n] = ShortArray{};
            }
        } else {
            self->optimizeBlockHeight_ = pls::cs::cast_integral<std::int16_t>(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadByte(stream); }));
            self->optimizeWidthNum_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadByte(stream); }));
            self->optimizeHeightNum_ = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadByte(stream); }));
            self->optimizePass_ = 1;
            self->optimizeBlockWidth_ = (self->optimizeBlockWidth_ & 255);
            self->optimizeBlockHeight_ = (self->optimizeBlockHeight_ & 255);
            pls::cs::Array<pls::cs::Array<ShortArray>> array5 =
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_java_util::JTool::MakeArray<pls::cs::Array<pls::cs::Array<ShortArray>>>(
                        IntArray::from({self->optimizeHeightNum_, self->optimizeWidthNum_}));
                });
            for (pls::cs::Int32 num9 = 0; num9 < array5.length(); ++num9) {
                for (pls::cs::Int32 num10 = 0; num10 < array5[num9].length(); ++num10) {
                    pls::cs::Int32 num11 = pls::cs::cast_integral<pls::cs::Int32>(pls::diagnostic::api_call(
                        [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadByte(stream); }));
                    {
                        auto cs_target = array5[num9];
                        auto cs_index = num10;
                        auto cs_value = ShortArray::make(num11 * 7);
                        cs_target.set_Item(cs_index, cs_value);
                    }
                    ShortArray array6 = array5[num9][num10];
                    for (pls::cs::Int32 num12 = 0; num12 < array6.length(); ++num12) {
                        array6[num12] = pls::diagnostic::api_call(
                            [&]() -> decltype(auto) { return kl_unity_util::StreamUtil::ReadShort(stream); });
                    }
                    if (self->optimizePass_ < num11) {
                        self->optimizePass_ = num11;
                    }
                }
            }
            self->optimizeAccessL_ = ShortArray::make(pls::cs::Int32(self->optimizeWidthNum_) *
                                                      self->optimizeHeightNum_ * self->optimizePass_);
            for (pls::cs::Int32 num13 = 0; num13 < array5.length(); ++num13) {
                for (pls::cs::Int32 num14 = 0; num14 < array5[num13].length(); ++num14) {
                    ShortArray array7 = array5[num13][num14];
                    pls::cs::Int32 num15;
                    for (([&]() {
                             pls::cs::Int32 cs_value = 0;
                             num15 = cs_value;
                             return cs_value;
                         }());
                         num15 < self->optimizePass_; ++num15) {
                        self->optimizeAccessL_[(num13 * self->optimizeWidthNum_ + num14) *
                                                   self->optimizePass_ +
                                               num15] = pls::cs::cast_integral<std::int16_t>(-1);
                    }
                    pls::cs::Int32 num16 = 0;
                    pls::cs::Int32 num17 = 0;
                    while (num16 < array7.length()) {
                        pls::cs::Array<std::int8_t> array8 = pls::cs::Array<std::int8_t>::make(7);
                        for (pls::cs::Int32 num18 = 0; num18 < 7; ++num18) {
                            array8[num18] = pls::cs::cast_integral<std::int8_t>(array7[num16 + num18]);
                        }
                        std::int16_t num19 = pls::cs::cast_integral<std::int16_t>(-1);
                        if (([&]() -> bool {
                                auto cs_left = pls::cs::cast_integral<pls::cs::Int32>(array8[0]);
                                auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(array7[num16 + 0]);
                                return cs_left != cs_right;
                            }()) ||
                            ([&]() -> bool {
                                auto cs_left = (array8[1] & 0xFF);
                                auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(array7[num16 + 1]);
                                return cs_left != cs_right;
                            }()) ||
                            ([&]() -> bool {
                                auto cs_left = (array8[2] & 0xFF);
                                auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(array7[num16 + 2]);
                                return cs_left != cs_right;
                            }()) ||
                            ([&]() -> bool {
                                auto cs_left = (array8[3] & 0xFF);
                                auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(array7[num16 + 3]);
                                return cs_left != cs_right;
                            }()) ||
                            ([&]() -> bool {
                                auto cs_left = (array8[4] & 0xFF);
                                auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(array7[num16 + 4]);
                                return cs_left != cs_right;
                            }()) ||
                            ([&]() -> bool {
                                auto cs_left = (array8[5] & 0xFF);
                                auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(array7[num16 + 5]);
                                return cs_left != cs_right;
                            }()) ||
                            ([&]() -> bool {
                                auto cs_left = (array8[6] & 0xFF);
                                auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(array7[num16 + 6]);
                                return cs_left != cs_right;
                            }())) {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_AddElement(require(vector2),
                                                                         pls::cs::box(array7));
                            });
                            num19 = pls::cs::cast_integral<std::int16_t>(
                                (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                     return kl_java_util::Vector_2_Size(require(vector2));
                                 }) -
                                 1));
                            if (num < pls::cs::cast_integral<pls::cs::Int32>(num19)) {
                                num = pls::cs::cast_integral<pls::cs::Int32>(num19);
                            }
                            std::uint16_t num20 = pls::cs::cast_integral<std::uint16_t>(32768);
                            num19 = (num19 | pls::cs::cast_integral<std::int16_t>(num20));
                        } else {
                            pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_AddElement(require(vector),
                                                                         pls::cs::box(array8));
                            });
                            num19 = pls::cs::cast_integral<std::int16_t>(
                                (pls::diagnostic::api_call([&]() -> decltype(auto) {
                                     return kl_java_util::Vector_2_Size(require(vector));
                                 }) -
                                 1));
                            if (num < pls::cs::cast_integral<pls::cs::Int32>(num19)) {
                                num = pls::cs::cast_integral<pls::cs::Int32>(num19);
                            }
                        }
                        self->optimizeAccessL_[(num13 * self->optimizeWidthNum_ + num14) *
                                                   self->optimizePass_ +
                                               num17] = num19;
                        num16 += 7;
                        ++num17;
                    }
                    array5[num13][num14] = ShortArray{};
                }
            }
        }
        if (num < 127) {
            self->optimizeAccess_ = pls::cs::Array<std::int8_t>::make(self->optimizeAccessL_.length());
            for (pls::cs::Int32 num21 = 0; num21 < self->optimizeAccess_.length(); ++num21) {
                if (pls::cs::cast_integral<pls::cs::Int32>(self->optimizeAccessL_[num21]) == -1) {
                    self->optimizeAccess_[num21] = pls::cs::cast_integral<std::int8_t>(-1);
                    continue;
                }
                self->optimizeAccess_[num21] =
                    pls::cs::cast_integral<std::int8_t>((self->optimizeAccessL_[num21] & 0x7F));
                if ((self->optimizeAccessL_[num21] & 0x8000) != 0) {
                    std::uint8_t b = pls::cs::cast_integral<std::uint8_t>(128);
                    {
                        auto cs_target = self->optimizeAccess_;
                        auto cs_index = num21;
                        auto cs_old = cs_target.at(cs_index);
                        auto cs_rhs = pls::cs::cast_integral<std::int8_t>(b);
                        auto cs_value = (cs_old | cs_rhs);
                        cs_target.at(cs_index) = cs_value;
                    }
                }
            }
            self->optimizeAccessL_ = ShortArray{};
        }
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(vector)); }) > 0) {
            self->optimize_ =
                pls::cs::Array<std::int8_t>::make(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                      return kl_java_util::Vector_2_Size(require(vector));
                                                  }) *
                                                  7);
            for (pls::cs::Int32 num22 = 0; num22 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(require(vector));
                                           });
                 ++num22) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Ref<pls::cs::Object> cs_arg0 =
                            pls::cs::box(pls::cs::unbox<pls::cs::Array<std::int8_t>>(
                                pls::diagnostic::api_call([&]() -> decltype(auto) {
                                    return kl_java_util::Vector_2_ElementAt(require(vector), num22);
                                })));
                        pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(self->optimize_);
                        kl_lang::JSystem::Arraycopy(cs_arg0, 0, cs_arg2, num22 * 7, 7);
                    }());
                });
            }
        }
        if (pls::diagnostic::api_call(
                [&]() -> decltype(auto) { return kl_java_util::Vector_2_Size(require(vector2)); }) > 0) {
            self->optimizeEx_ = ShortArray::make(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                                     return kl_java_util::Vector_2_Size(require(vector2));
                                                 }) *
                                                 7);
            for (pls::cs::Int32 num23 = 0; num23 < pls::diagnostic::api_call([&]() -> decltype(auto) {
                                               return kl_java_util::Vector_2_Size(require(vector2));
                                           });
                 ++num23) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return ([&]() -> void {
                        pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(
                            pls::cs::unbox<ShortArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {
                                return kl_java_util::Vector_2_ElementAt(require(vector2), num23);
                            })));
                        pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(self->optimizeEx_);
                        kl_lang::JSystem::Arraycopy(cs_arg0, 0, cs_arg2, num23 * 7, 7);
                    }());
                });
            }
        }
    }
}

// M:kairo.unity.ui.Image.LoadOptimize(System.Byte[],kairo.unity.ui.Image[])
void LoadOptimizeByteArray(pls::cs::Ref<pls::kairo::Image> self, ByteArray data,
                           pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> images) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.ui.Image.LoadOptimize(System.Byte[],kairo.unity.ui.Image[])", kairo);
    {
        pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream =
            pls::cs::Ref<kl_io::ByteArrayInputStream>{};
        pls::cs::run_finally(
            [&]() {
                {
                    byteArrayInputStream = kl_io::ByteArrayInputStream::create(data);
                    Image::LoadOptimize(self, byteArrayInputStream, images);
                }
            },
            [&]() {
                ([&]() -> void {
                    auto cs_conditional = byteArrayInputStream;
                    if (!cs_conditional)
                        return;
                    ([&]() -> void {
                        auto cs_receiver = static_cast<pls::cs::Ref<kl_io::InputStream>>(cs_conditional);
                        if (!cs_receiver)
                            throw pls::cs::NullReferenceException();
                        cs_receiver->Close();
                    }());
                }());
                byteArrayInputStream = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
            });
    }
}

// M:kairo.unity.ui.Image.OverwritePaletteData(System.Byte[],System.Byte[])
ByteArray OverwritePaletteData(ByteArray image, ByteArray palette) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.ui.Image.OverwritePaletteData(System.Byte[],System.Byte[])", kairo);
    {
        if (([&]() {
                auto cs_left = pls::cs::box(palette);
                auto cs_right = pls::cs::box(ByteArray{});
                return cs_left == cs_right;
            }()) ||
            ([&]() {
                auto cs_left = pls::cs::box(image);
                auto cs_right = pls::cs::box(ByteArray{});
                return cs_left == cs_right;
            }())) {
            return image;
        }
        return Image::OverwritePaletteData(image, palette, 0, 0, pls::cs::Int32(palette.length()) / 3);
    }
}

// M:kairo.unity.ui.Image.OverwritePaletteData(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32)
ByteArray OverwritePaletteData(ByteArray image, ByteArray palette, pls::cs::Int32 imageOffset,
                               pls::cs::Int32 paletteOffset, pls::cs::Int32 colors) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Image.OverwritePaletteData(System.Byte[],System.Byte[],System.Int32,System.Int32,System.Int32)",
        kairo);
    {
        if (([&]() {
                auto cs_left = pls::cs::box(palette);
                auto cs_right = pls::cs::box(ByteArray{});
                return cs_left == cs_right;
            }()) ||
            ([&]() {
                auto cs_left = pls::cs::box(image);
                auto cs_right = pls::cs::box(ByteArray{});
                return cs_left == cs_right;
            }())) {
            return image;
        }
        IntArray paletteInfo = Image::GetPaletteInfo(image);
        if ([&]() {
                auto cs_left = pls::cs::box(paletteInfo);
                auto cs_right = pls::cs::box(IntArray{});
                return cs_left == cs_right;
            }()) {
            return image;
        }
        if (imageOffset + colors > pls::cs::Int32(palette.length()) / 3) {
            colors = pls::cs::Int32(palette.length()) / 3 - imageOffset;
        }
        if (paletteOffset + colors > paletteInfo[1]) {
            colors = paletteInfo[1] - paletteOffset;
        }
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_lang::JSystem::Arraycopy(pls::cs::box(palette), paletteOffset * 3, pls::cs::box(image),
                                               paletteInfo[0] + imageOffset * 3, colors * 3);
        });
        return image;
    }
}

// M:kairo.unity.ui.Image.GetPaletteInfo(System.Byte[])
IntArray GetPaletteInfo(ByteArray data) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Image.GetPaletteInfo(System.Byte[])", kairo);
    {
        kl_cfg::Config::ensure_initialized();

        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(ByteArray{});
                return cs_left == cs_right;
            }()) {
            return IntArray{};
        }
        pls::cs::String fileFormat = Image::GetFileFormat(data);
        if (fileFormat == literal(u"gif")) {
            std::uint8_t b = data[10];
            if (((pls::cs::Int32(b) >> 7) & 1) == 1) {
                pls::kairo::Image::getPaletteInfo_result[0] = 13;
                {
                    auto cs_target = pls::kairo::Image::getPaletteInfo_result;
                    auto cs_index = 1;
                    auto cs_value = math::KairoMath::Pow(2, (b & 7) + 1);
                    cs_target.set_Item(cs_index, cs_value);
                }
                return pls::kairo::Image::getPaletteInfo_result;
            }
            pls::cs::Int32 num = 13;
            while (num < data.length()) {
                pls::cs::Int32 num2 = pls::cs::cast_integral<pls::cs::Int32>(data[num]);
                if (num2 == 44) {
                    b = data[num + 9];
                    if (((pls::cs::Int32(b) >> 7) & 1) == 1) {
                        pls::kairo::Image::getPaletteInfo_result[0] = num + 10;
                        {
                            auto cs_target = pls::kairo::Image::getPaletteInfo_result;
                            auto cs_index = 1;
                            auto cs_value = math::KairoMath::Pow(2, (b & 7) + 1);
                            cs_target.set_Item(cs_index, cs_value);
                        }
                        return pls::kairo::Image::getPaletteInfo_result;
                    }
                    return IntArray{};
                }
                if (num2 != 33) {
                    break;
                }
                num += pls::cs::Int32(3) + data[num + 2];
                if (pls::cs::cast_integral<pls::cs::Int32>(data[num]) == 0) {
                    ++num;
                }
            }
        } else if (fileFormat == literal(u"png")) {
            if (kl_cfg::Config::DEBUG()) {
                pls::diagnostic::api_call([&]() -> decltype(auto) {
                    return kl_unity_util::Log::Info(literal(u"getPaletteInfo:PNGは対応していません"),
                                                    pls::cs::Ref<pls::cs::ExceptionObject>{});
                });
            }
            return IntArray{};
        }
        return IntArray{};
    }
}

// M:kairo.unity.ui.Image.GetAreaSize(System.Byte[])
IntArray GetAreaSize(ByteArray data) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Image.GetAreaSize(System.Byte[])", kairo);
    {
        IntArray array = pls::kairo::Image::getAreaSize_result;
        array[0] = (([&]() {
            auto cs_target = array;
            auto cs_index = 1;
            auto cs_value = 0;
            cs_target.set_Item(cs_index, cs_value);
            return cs_value;
        }()));
        pls::cs::String fileFormat = Image::GetFileFormat(data);
        if (fileFormat == literal(u"gif")) {
            array[0] = ([&]() -> pls::cs::Int32 {
                auto cs_left = (data[6] & 0xFF);
                auto cs_right = ((data[7] & 0xFF) << 8);
                return cs_left | cs_right;
            }());
            array[1] = ([&]() -> pls::cs::Int32 {
                auto cs_left = (data[8] & 0xFF);
                auto cs_right = ((data[9] & 0xFF) << 8);
                return cs_left | cs_right;
            }());
        } else if (fileFormat == literal(u"png")) {
            array[0] = ([&]() -> pls::cs::Int32 {
                auto cs_left = ([&]() -> pls::cs::Int32 {
                    auto cs_left = ([&]() -> pls::cs::Int32 {
                        auto cs_left = ((data[16] & 0xFF) << 24);
                        auto cs_right = ((data[17] & 0xFF) << 16);
                        return cs_left | cs_right;
                    }());
                    auto cs_right = ((data[18] & 0xFF) << 8);
                    return cs_left | cs_right;
                }());
                auto cs_right = (data[19] & 0xFF);
                return cs_left | cs_right;
            }());
            array[1] = ([&]() -> pls::cs::Int32 {
                auto cs_left = ([&]() -> pls::cs::Int32 {
                    auto cs_left = ([&]() -> pls::cs::Int32 {
                        auto cs_left = ((data[20] & 0xFF) << 24);
                        auto cs_right = ((data[21] & 0xFF) << 16);
                        return cs_left | cs_right;
                    }());
                    auto cs_right = ((data[22] & 0xFF) << 8);
                    return cs_left | cs_right;
                }());
                auto cs_right = (data[23] & 0xFF);
                return cs_left | cs_right;
            }());
        } else if (fileFormat == literal(u"jpg")) {
            {
                pls::cs::Int32 num = 2;
                while (true) {
                    auto cs_left_267 = (pls::cs::Int32(data[num + 0]) << 8);
                    auto cs_right_267 = pls::cs::cast_integral<pls::cs::Int32>(data[num + 1]);
                    pls::cs::Int32 num2 = (cs_left_267 | cs_right_267);
                    num += 2;
                    auto cs_left_268 = (pls::cs::Int32(data[num + 0]) << 8);
                    auto cs_right_268 = pls::cs::cast_integral<pls::cs::Int32>(data[num + 1]);
                    pls::cs::Int32 num3 = (cs_left_268 | cs_right_268);
                    if (num2 == 65472) {
                        array[1] = ([&]() -> pls::cs::Int32 {
                            auto cs_left = (pls::cs::Int32(data[num + 3]) << 8);
                            auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(data[num + 4]);
                            return cs_left | cs_right;
                        }());
                        array[0] = ([&]() -> pls::cs::Int32 {
                            auto cs_left = (pls::cs::Int32(data[num + 5]) << 8);
                            auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(data[num + 6]);
                            return cs_left | cs_right;
                        }());
                        break;
                    }
                    num += num3;
                }
            }
        }
        return array;
    }
}

// M:kairo.unity.ui.Image.GetFileFormat(System.Byte[])
pls::cs::String GetFileFormat(ByteArray data) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Image.GetFileFormat(System.Byte[])", kairo);
    {
        if ([&]() {
                auto cs_left = pls::cs::box(data);
                auto cs_right = pls::cs::box(ByteArray{});
                return cs_left == cs_right;
            }()) {
            return pls::cs::String{};
        }
        if ((data.length() >= 3) && (pls::cs::cast_integral<pls::cs::Int32>(data[0]) == 71) &&
            (pls::cs::cast_integral<pls::cs::Int32>(data[1]) == 73) &&
            (pls::cs::cast_integral<pls::cs::Int32>(data[2]) == 70)) {
            return literal(u"gif");
        }
        if ((data.length() >= 8) && (data[0] & 0xFF) == 137 &&
            (pls::cs::cast_integral<pls::cs::Int32>(data[1]) == 80) &&
            (pls::cs::cast_integral<pls::cs::Int32>(data[2]) == 78) &&
            (pls::cs::cast_integral<pls::cs::Int32>(data[3]) == 71) &&
            (pls::cs::cast_integral<pls::cs::Int32>(data[4]) == 13) &&
            (pls::cs::cast_integral<pls::cs::Int32>(data[5]) == 10) &&
            (pls::cs::cast_integral<pls::cs::Int32>(data[6]) == 26) &&
            (pls::cs::cast_integral<pls::cs::Int32>(data[7]) == 10)) {
            return literal(u"png");
        }
        if ((data.length() >= 2) && (data[0] & 0xFF) == 255 &&
            (pls::cs::cast_integral<pls::cs::Int32>(data[1]) == 216)) {
            return literal(u"jpg");
        }
        return pls::cs::String{};
    }
}
} // namespace kairo::unity::ui::Image
}
