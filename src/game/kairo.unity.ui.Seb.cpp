// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "PlsPortGeneratedBootstrap.Source.hpp"
#include "generated/java.io.ByteArrayInputStream.hpp"
#include "generated/java.io.DataInputStream.hpp"
#include "generated/java.io.InputStream.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/java.util.Vector.hpp"
#include "generated/java.util.Vector_1.hpp"
#include "java.io.DataInputStream.hpp"
#include "java.lang.JShort.hpp"
#include "kairo.unity.ui.DepthInfo.hpp"
#include "kairo.unity.ui.Matrix.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.WorkStaticValue.hpp"
#include "kairo.unity.ui.Seb.WorkValue.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "generated/java.util.JTool_templates.hpp"
#include "generated/java.util.Vector_1_templates.hpp"

namespace kl_io = pls::generated::java::io;
namespace kl_lang = pls::generated::java::lang;
namespace kl_util = pls::generated::java::util;

using ShortArray = pls::cs::Array<std::int16_t>;
using ByteArray = pls::cs::Array<std::uint8_t>;
using FloatArray = pls::cs::Array<pls::cs::Single>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;
using IntArray3 = pls::cs::Array<pls::cs::Array<pls::cs::Array<pls::cs::Int32>>>;

namespace pls::game {
namespace kairo::unity::ui {

void Seb::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(name_,visitor);pls::cs::trace_value(layerHeads_,visitor);pls::cs::trace_value(spriteFrames_,visitor);pls::cs::trace_value(spriteBuffer_,visitor);pls::cs::trace_value(spritesBufferEx_,visitor);pls::cs::trace_value(cache_,visitor);pls::cs::trace_value(boundingRects_,visitor);pls::cs::trace_value(boundingRectsEx_,visitor);pls::cs::trace_value(manager_,visitor);pls::cs::trace_value(depthInfoList_,visitor);pls::cs::trace_value(offset_,visitor);pls::cs::trace_value(threadLocal_,visitor);}

static pls::cs::Ref<Seb_WorkStaticValue> Seb_threadLocalStatic__storage{};

static PLS_NOINLINE void cs_init_9cade6927d6e0bf3_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(Seb_threadLocalStatic__storage,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.ui.Seb",flag,[](){
Seb_threadLocalStatic__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.ui.Seb.threadLocalStatic_",[&](){return Seb_WorkStaticValue::create();});

});}

void Seb::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_9cade6927d6e0bf3_slow(flag);}

pls::cs::Ref<Seb_WorkStaticValue>& Seb::threadLocalStatic_(){Seb::ensure_initialized();return Seb_threadLocalStatic__storage;}

void Seb::create_2_init(pls::cs::Ref<Seb> self,pls::cs::Ref<Seb> seb) {
Seb::ensure_initialized();
self->name_ = literal(u"");
self->offset_ = FloatArray::make(2);
self->threadLocal_ = Seb_WorkValue::create();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.#ctor(kairo.unity.ui.Seb)",kairo);
{
self->name_ = require(seb)->name_;
self->maxFrame_ = require(seb)->maxFrame_;
self->layerHeads_ = require(seb)->layerHeads_;
self->spriteFrames_ = require(seb)->spriteFrames_;
self->spriteBuffer_ = require(seb)->spriteBuffer_;
self->spritesBufferEx_ = require(seb)->spritesBufferEx_;
self->boundingRect_ = require(seb)->boundingRect_;
self->boundingRects_ = require(seb)->boundingRects_;
self->boundingRectsEx_ = require(seb)->boundingRectsEx_;
self->manager_ = require(seb)->manager_;
}

}

void Seb::create_init(pls::cs::Ref<Seb> self,ByteArray data) {
Seb::ensure_initialized();
self->name_ = literal(u"");
self->offset_ = FloatArray::make(2);
self->threadLocal_ = Seb_WorkValue::create();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.#ctor(System.Byte[])",kairo);
{
self->_load(data);
}

}

// M:kairo.unity.ui.Seb.GetWorkStaticValue
pls::cs::Ref<Seb_WorkStaticValue> Seb::GetWorkStaticValue() {
Seb::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.GetWorkStaticValue",kairo);
{
pls::cs::Ref<Seb_WorkStaticValue> workStaticValue = Seb::threadLocalStatic_();
if (is_null(workStaticValue)) {
pls::cs::Ref<Seb_WorkStaticValue> workStaticValue1 = Seb_WorkStaticValue::create();
workStaticValue = workStaticValue1;
Seb::threadLocalStatic_() = workStaticValue1;
}
return workStaticValue;
}

}

// M:kairo.unity.ui.Seb.GetWorkValue
pls::cs::Ref<Seb_WorkValue> Seb::GetWorkValue() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.GetWorkValue",kairo);
{
pls::cs::Ref<Seb_WorkValue> workValue = threadLocal_;
if (is_null(workValue)) {
workValue = Seb_WorkValue::create();
threadLocal_ = workValue;
}
return workValue;
}
}

// M:kairo.unity.ui.Seb.SetClip(System.Int32,System.Int32,System.Int32,System.Int32)
void Seb::SetClip(pls::cs::Int32 x,pls::cs::Int32 y,pls::cs::Int32 w,pls::cs::Int32 h) {
Seb::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.SetClip(System.Int32,System.Int32,System.Int32,System.Int32)",kairo);
{

}

}

// M:kairo.unity.ui.Seb.ClearClip
void Seb::ClearClip() {
Seb::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.ClearClip",kairo);
{

}

}

// M:kairo.unity.ui.Seb.#ctor(System.Byte[])
pls::cs::Ref<Seb> Seb::create(ByteArray data) {
Seb::ensure_initialized();
 auto self = pls::cs::make_ref<Seb>(); Seb::create_init(self,data); return self; 
}

// M:kairo.unity.ui.Seb.#ctor(kairo.unity.ui.Seb)
pls::cs::Ref<Seb> Seb::create_2(pls::cs::Ref<Seb> seb) {
Seb::ensure_initialized();
 auto self = pls::cs::make_ref<Seb>(); Seb::create_2_init(self,seb); return self; 
}

// M:kairo.unity.ui.Seb.Dispose
void Seb::Dispose() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.Dispose",kairo);
{
currentFrame_ = 0;
maxFrame_ = 0;
if ([&]() { auto cs_left = pls::cs::box(cache_); auto cs_right = pls::cs::box(IntArray3{}); return cs_left != cs_right; }()) {
for (pls::cs::Int32 num = pls::cs::Int32(cache_.length()) - 1; num >= 0; --num) {
cache_[num] = IntArray2{};
}
}
cache_ = IntArray3{};
layerHeads_ = IntArray{};
spriteFrames_ = ShortArray{};
spriteBuffer_ = pls::cs::Array<std::int8_t>{};
spritesBufferEx_ = ShortArray{};
}
}

// M:kairo.unity.ui.Seb._load(System.Byte[])
void Seb::_load(ByteArray data) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb._load(System.Byte[])",kairo);
{
pls::cs::Ref<kl_io::ByteArrayInputStream> byteArrayInputStream = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
pls::cs::run_finally([&]() {{
byteArrayInputStream = kl_io::ByteArrayInputStream::create(data);
_loadInputStream(byteArrayInputStream);
}}, [&]() {
([&]() -> void { auto cs_conditional = byteArrayInputStream; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<kl_io::InputStream>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Close(); }()); }());
byteArrayInputStream = pls::cs::Ref<kl_io::ByteArrayInputStream>{};
});
}
}

// M:kairo.unity.ui.Seb._load(java.io.InputStream)
void Seb::_loadInputStream(pls::cs::Ref<kl_io::InputStream> stream) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb._load(java.io.InputStream)",kairo);
{
Dispose();
pls::cs::Ref<kl_io::DataInputStream> dataInputStream = pls::cs::Ref<kl_io::DataInputStream>{};
pls::cs::run_finally([&]() {{
dataInputStream = kl_io::DataInputStream::create(stream);
pls::cs::Int32 num = 0;
pls::cs::Int32 num3;
pls::cs::Int32 num2 = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadByte(require(dataInputStream)));
if (num2 < 0) {
num = -num2;
num3 = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
} else {
pls::cs::Int32 num4 = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadByte(require(dataInputStream)));
num3 = pls::cs::cast_integral<pls::cs::Int32>(pls::cs::cast_integral<std::int16_t>((((num2 & 0xFF) << 8) | (num4 & 0xFF))));
}
maxFrame_ = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
pls::cs::Array<ShortArray> array = pls::cs::Array<ShortArray>::make(num3);
pls::cs::Array<pls::cs::Array<std::int8_t>> array2 = pls::cs::Array<pls::cs::Array<std::int8_t>>::make(num3);
IntArray array3 = IntArray::make(12);
pls::cs::Ref<kl_util::Vector> vector = pls::cs::Ref<kl_util::Vector>{};
for (pls::cs::Int32 i = 0; i < num3; ++i) {
pls::cs::Int32 num5 = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
if (num == 0) {
java::io::DataInputStream::ReadShort(require(dataInputStream));
}
array[i] = ShortArray::make(num5);
array2[i] = pls::cs::Array<std::int8_t>::make(num5 * 8);
for (pls::cs::Int32 j = 0; j < num5; ++j) {
if (num == 0) {
array3[0] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
array3[1] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
array3[2] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
array3[3] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
array3[4] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
array3[5] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
array3[6] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
array3[7] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
array3[8] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
array3[9] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
array3[10] = 0;
std::uint32_t num7 = 4294967295u /* UInt32.MaxValue */;
array3[11] = pls::cs::cast_integral<pls::cs::Int32>(num7);
if (array3[1] < 0) {
pls::cs::Int32 num8 = (array3[8] & 0xFF00);
pls::cs::Int32 num9 = 255;
pls::cs::Int32 num10 = (array3[8] & 0xFF);
pls::cs::Int32 num11 = (array3[9] & 0xFF00) >> 8;
pls::cs::Int32 num12 = (array3[9] & 0xFF);
if (num8 == 8192) {
array3[10] = 1;
} else if (num8 == 16384) {
array3[10] = 2;
} else if (num8 == 32768) {
array3[10] = 3;
}
if (array3[10] != 0) {
num9 = 128;
}
array3[11] = ((num9 << 24) | (num10 << 16) | (num11 << 8) | num12);
}
} else if (num == 1) {
array3[0] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
array3[1] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
array3[6] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
array3[7] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
array3[10] = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(dataInputStream)->Read();});
array3[8] = 0;
array3[9] = 0;
if ((array3[1] >= 0 && array3[10] != 0) || array3[1] == -2 || array3[1] == -3 || array3[1] == -4 || array3[1] == -5 || array3[1] == -6) {
array3[11] = ([&]() -> pls::cs::Int32 { auto cs_left = ([&]() -> pls::cs::Int32 { auto cs_left = ([&]() -> pls::cs::Int32 { auto cs_left = (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(dataInputStream)->Read();}) << 24); auto cs_right = (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(dataInputStream)->Read();}) << 16); return cs_left | cs_right; }()); auto cs_right = (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(dataInputStream)->Read();}) << 8); return cs_left | cs_right; }()); auto cs_right = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(dataInputStream)->Read();}); return cs_left | cs_right; }());
}
if (array3[1] >= 0 || array3[1] == -8) {
array3[2] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
array3[3] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
}
array3[4] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
array3[5] = pls::cs::cast_integral<pls::cs::Int32>(java::io::DataInputStream::ReadShort(require(dataInputStream)));
if (array3[1] >= 0) {
std::int8_t num6 = java::io::DataInputStream::ReadByte(require(dataInputStream));
if ((num6 & 1) != 0) {
array3[8] = 1;
}
if ((num6 & 2) != 0) {
array3[9] = 1;
}
}
}
pls::cs::Int32 num13 = pls::cs::to_int32((((pls::cs::Int64(array3[11]) & pls::cs::Int64(0xFF000000u)) >> 24) & pls::cs::Int64(0xFF)));
if (array3[10] == 1 && num13 == 255) {
array3[10] = 0;
}
array[i][j] = pls::cs::cast_integral<std::int16_t>(array3[0]);
pls::cs::Array<std::int8_t> array4 = array2[i];
pls::cs::Int32 num14 = j * 8;
array4[num14 + 0] = pls::cs::cast_integral<std::int8_t>(array3[1]);
array4[num14 + 1] = pls::cs::cast_integral<std::int8_t>(array3[6]);
array4[num14 + 2] = pls::cs::cast_integral<std::int8_t>(array3[7]);
array4[num14 + 3] = pls::cs::cast_integral<std::int8_t>(array3[2]);
array4[num14 + 4] = pls::cs::cast_integral<std::int8_t>(array3[3]);
array4[num14 + 5] = pls::cs::cast_integral<std::int8_t>(array3[4]);
array4[num14 + 6] = pls::cs::cast_integral<std::int8_t>(array3[5]);
array4[num14 + 7] = pls::cs::cast_integral<std::int8_t>((([&]() -> pls::cs::Int32 { auto cs_left = ([&]() -> pls::cs::Int32 { auto cs_left = (array3[8] << 6); auto cs_right = (array3[9] << 5); return cs_left | cs_right; }()); auto cs_right = array3[10]; return cs_left | cs_right; }())));
if (array3[10] != 0 || array3[1] == -2 || array3[1] == -3 || array3[1] == -4 || array3[1] == -8 || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<pls::cs::Int32>(array4[num14 + 0]); auto cs_right = array3[1]; return cs_left != cs_right; }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<pls::cs::Int32>(array4[num14 + 1]); auto cs_right = array3[6]; return cs_left != cs_right; }()) || ([&]() -> bool { auto cs_left = pls::cs::cast_integral<pls::cs::Int32>(array4[num14 + 2]); auto cs_right = array3[7]; return cs_left != cs_right; }()) || ([&]() -> bool { auto cs_left = (array4[num14 + 3] & 0xFF); auto cs_right = array3[2]; return cs_left != cs_right; }()) || ([&]() -> bool { auto cs_left = (array4[num14 + 4] & 0xFF); auto cs_right = array3[3]; return cs_left != cs_right; }()) || ([&]() -> bool { auto cs_left = (array4[num14 + 5] & 0xFF); auto cs_right = array3[4]; return cs_left != cs_right; }()) || ([&]() -> bool { auto cs_left = (array4[num14 + 6] & 0xFF); auto cs_right = array3[5]; return cs_left != cs_right; }())) {
if ([&]() { pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<pls::cs::Object>>> cs_left = vector; pls::cs::Ref<kl_util::Vector> cs_right = pls::cs::Ref<kl_util::Vector>{}; return kl_util::Vector_2_op_Equality(cs_left,cs_right); }()) {
vector = kl_util::Vector::create();
}
array4[num14 + 0] = std::int8_t(-128) /* SByte.MinValue */;
array4[num14 + 1] = pls::cs::cast_integral<std::int8_t>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Vector_2_Size(require(vector));}));
array4[num14 + 2] = pls::cs::cast_integral<std::int8_t>(((array3[11] >> 24) & 0xFF));
array4[num14 + 3] = pls::cs::cast_integral<std::int8_t>(((array3[11] >> 16) & 0xFF));
array4[num14 + 4] = pls::cs::cast_integral<std::int8_t>(((array3[11] >> 8) & 0xFF));
array4[num14 + 5] = pls::cs::cast_integral<std::int8_t>((array3[11] & 0xFF));
ShortArray recoveredSpriteRecord = ShortArray::make(7);
recoveredSpriteRecord[0] = pls::cs::cast_integral<std::int16_t>(array3[1]);
recoveredSpriteRecord[1] = pls::cs::cast_integral<std::int16_t>(array3[6]);
recoveredSpriteRecord[2] = pls::cs::cast_integral<std::int16_t>(array3[7]);
recoveredSpriteRecord[3] = pls::cs::cast_integral<std::int16_t>(array3[2]);
recoveredSpriteRecord[4] = pls::cs::cast_integral<std::int16_t>(array3[3]);
recoveredSpriteRecord[5] = pls::cs::cast_integral<std::int16_t>(array3[4]);
recoveredSpriteRecord[6] = pls::cs::cast_integral<std::int16_t>(array3[5]);
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Vector_2_AddElement(require(vector), pls::cs::box(recoveredSpriteRecord));});
}
}
}
pls::cs::Int32 num15 = 0;
for (pls::cs::Int32 k = 0; k < array2.length(); ++k) {
num15 += pls::cs::Int32(array2[k].length()) / 8;
}
layerHeads_ = IntArray::make(array2.length());
spriteFrames_ = ShortArray::make(num15);
spriteBuffer_ = pls::cs::Array<std::int8_t>::make(num15 * 8);
IntArray array5;
{
pls::cs::Int32 l = 0;
pls::cs::Int32 num16 = 0;
for (; l < layerHeads_.length(); ++l) {
layerHeads_[l] = num16;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(array2[l]); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(spriteBuffer_); pls::cs::Int32 cs_arg4 = array2[l].length(); kl_lang::JSystem::Arraycopy(cs_arg0, 0, cs_arg2, num16 * 8, cs_arg4); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(array[l]); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(spriteFrames_); pls::cs::Int32 cs_arg4 = array[l].length(); kl_lang::JSystem::Arraycopy(cs_arg0, 0, cs_arg2, num16, cs_arg4); }());});
num16 += array[l].length();
}
if ([&]() { pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<pls::cs::Object>>> cs_left = vector; pls::cs::Ref<kl_util::Vector> cs_right = pls::cs::Ref<kl_util::Vector>{}; return kl_util::Vector_2_op_Inequality(cs_left,cs_right); }()) {
spritesBufferEx_ = ShortArray::make(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Vector_2_Size(require(vector));}) * 7);
for (pls::cs::Int32 m = 0; m < pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Vector_2_Size(require(vector));}); ++m) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(pls::cs::unbox<ShortArray>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Vector_2_ElementAt(require(vector), m);}))); pls::cs::Ref<pls::cs::Object> cs_arg2 = pls::cs::box(spritesBufferEx_); kl_lang::JSystem::Arraycopy(cs_arg0, 0, cs_arg2, m * 7, 7); }());});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Vector_2_RemoveAllElements(require(vector));});
}
vector = pls::cs::Ref<kl_util::Vector>{};
boundingRects_ = pls::cs::Array<std::int8_t>::make(maxFrame_ * 4);
array5 = IntArray::make(4);
for (pls::cs::Int32 n = 0; n < maxFrame_; ++n) {
IntArray2 spritesLocal = GetSpritesLocal(n);
if ([&]() { auto cs_left = pls::cs::box(spritesLocal); auto cs_right = pls::cs::box(IntArray2{}); return cs_left == cs_right; }()) {
continue;
}
pls::cs::Int32 num17 = 0;
pls::cs::Int32 num18 = 0;
pls::cs::Int32 num19 = 0;
pls::cs::Int32 num20 = 0;
pls::cs::Int32 num21 = 0;
for (pls::cs::Int32 num22 = 0; num22 < spritesLocal.length(); ++num22) {
if ([&]() { auto cs_left = pls::cs::box(spritesLocal[num22]); auto cs_right = pls::cs::box(IntArray{}); return cs_left == cs_right; }()) {
continue;
}
pls::cs::Int32 num23 = spritesLocal[num22][1];
if (num23 == -1 || num23 == -9 || num23 == -8) {
continue;
}
if (num21 == 0) {
num17 = spritesLocal[num22][6];
num18 = spritesLocal[num22][7];
num19 = ([&]() -> pls::cs::Int32 { auto cs_left = spritesLocal[num22][6]; auto cs_right = spritesLocal[num22][4]; return cs_left + cs_right; }());
num20 = ([&]() -> pls::cs::Int32 { auto cs_left = spritesLocal[num22][7]; auto cs_right = spritesLocal[num22][5]; return cs_left + cs_right; }());
} else {
if (num17 > spritesLocal[num22][6]) {
num17 = spritesLocal[num22][6];
}
if (num18 > spritesLocal[num22][7]) {
num18 = spritesLocal[num22][7];
}
if (num19 < ([&]() -> pls::cs::Int32 { auto cs_left = spritesLocal[num22][6]; auto cs_right = spritesLocal[num22][4]; return cs_left + cs_right; }())) {
num19 = ([&]() -> pls::cs::Int32 { auto cs_left = spritesLocal[num22][6]; auto cs_right = spritesLocal[num22][4]; return cs_left + cs_right; }());
}
if (num20 < ([&]() -> pls::cs::Int32 { auto cs_left = spritesLocal[num22][7]; auto cs_right = spritesLocal[num22][5]; return cs_left + cs_right; }())) {
num20 = ([&]() -> pls::cs::Int32 { auto cs_left = spritesLocal[num22][7]; auto cs_right = spritesLocal[num22][5]; return cs_left + cs_right; }());
}
}
++num21;
}
pls::cs::Int32 num24 = num19 - num17;
pls::cs::Int32 num25 = num20 - num18;
pls::cs::Int32 num26 = n * 4;
boundingRects_[num26 + 0] = pls::cs::cast_integral<std::int8_t>(num17);
boundingRects_[num26 + 1] = pls::cs::cast_integral<std::int8_t>(num18);
boundingRects_[num26 + 2] = pls::cs::cast_integral<std::int8_t>(num24);
boundingRects_[num26 + 3] = pls::cs::cast_integral<std::int8_t>(num25);
if ((pls::cs::cast_integral<pls::cs::Int32>(boundingRects_[num26 + 0]) == pls::cs::cast_integral<pls::cs::Int32>(std::int8_t(-128) /* SByte.MinValue */)) || (pls::cs::cast_integral<pls::cs::Int32>(pls::cs::cast_integral<std::int8_t>(num17)) != num17) || (pls::cs::cast_integral<pls::cs::Int32>(pls::cs::cast_integral<std::int8_t>(num18)) != num18) || (pls::cs::cast_integral<pls::cs::Int32>(pls::cs::cast_integral<std::int8_t>(num24)) != num24) || (pls::cs::cast_integral<pls::cs::Int32>(pls::cs::cast_integral<std::int8_t>(num25)) != num25)) {
if ([&]() { pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<pls::cs::Object>>> cs_left = vector; pls::cs::Ref<kl_util::Vector> cs_right = pls::cs::Ref<kl_util::Vector>{}; return kl_util::Vector_2_op_Equality(cs_left,cs_right); }()) {
vector = kl_util::Vector::create();
}
boundingRects_[num26 + 0] = std::int8_t(-128) /* SByte.MinValue */;
{ auto cs_target = boundingRects_; auto cs_index = num26 + 1; auto cs_value = pls::cs::cast_integral<std::int8_t>((pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Vector_2_Size(require(vector));}) / 4));cs_target.set_Item(cs_index,cs_value);}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(java::lang::JShort::create(pls::cs::cast_integral<std::int16_t>(num17))); kl_util::Vector_2_AddElement(require(vector), cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(java::lang::JShort::create(pls::cs::cast_integral<std::int16_t>(num18))); kl_util::Vector_2_AddElement(require(vector), cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(java::lang::JShort::create(pls::cs::cast_integral<std::int16_t>(num24))); kl_util::Vector_2_AddElement(require(vector), cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::cs::Object> cs_arg0 = pls::cs::box(java::lang::JShort::create(pls::cs::cast_integral<std::int16_t>(num25))); kl_util::Vector_2_AddElement(require(vector), cs_arg0); }());});
}
if (n == 0) {
array5[0] = num17;
array5[1] = num18;
array5[2] = num19;
array5[3] = num20;
continue;
}
if (array5[0] > num17) {
array5[0] = num17;
}
if (array5[1] > num18) {
array5[1] = num18;
}
if (array5[2] < num19) {
array5[2] = num19;
}
if (array5[3] < num20) {
array5[3] = num20;
}
}
array5[2] = array5[2] - array5[0];
array5[3] = array5[3] - array5[1];
boundingRect_ = pls::cs::cast_integral<pls::cs::Int64>((([&]() -> std::uint64_t { auto cs_left = ([&]() -> std::uint64_t { auto cs_left = ([&]() -> std::uint64_t { auto cs_left = (pls::cs::shl_u64(((pls::cs::cast_integral<std::uint64_t>(pls::cs::cast_integral<std::int16_t>(array5[0])) & 0xFFFFull)),48)); auto cs_right = (pls::cs::shl_u64(((pls::cs::cast_integral<std::uint64_t>(pls::cs::cast_integral<std::int16_t>(array5[1])) & 0xFFFFull)),32)); return cs_left | cs_right; }()); auto cs_right = (pls::cs::shl_u64(((pls::cs::cast_integral<std::uint64_t>(pls::cs::cast_integral<std::int16_t>(array5[2])) & 0xFFFFull)),16)); return cs_left | cs_right; }()); auto cs_right = ((pls::cs::cast_integral<std::uint64_t>(pls::cs::cast_integral<std::int16_t>(array5[3])) & 0xFFFFull)); return cs_left | cs_right; }())));
if ([&]() { pls::cs::Ref<kl_util::Vector_2<pls::cs::Ref<pls::cs::Object>>> cs_left = vector; pls::cs::Ref<kl_util::Vector> cs_right = pls::cs::Ref<kl_util::Vector>{}; return kl_util::Vector_2_op_Inequality(cs_left,cs_right); }()) {
boundingRectsEx_ = ShortArray::make(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Vector_2_Size(require(vector));}));
for (pls::cs::Int32 num27 = 0; num27 < boundingRectsEx_.length(); ++num27) {
{ auto cs_target = boundingRectsEx_; auto cs_index = num27; auto cs_value = require((pls::cs::unbox<pls::cs::Ref<java::lang::JShort>>(pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Vector_2_ElementAt(require(vector), num27);}))))->ShortValue();cs_target.set_Item(cs_index,cs_value);}
}
}
}
}}, [&]() {
([&]() -> void { auto cs_conditional = dataInputStream; if(!cs_conditional)return; ([&]() -> void { auto cs_receiver = static_cast<pls::cs::Ref<kl_io::DataInputStream>>(cs_conditional); if(!cs_receiver)throw pls::cs::NullReferenceException(); cs_receiver->Close(); }()); }());
dataInputStream = pls::cs::Ref<kl_io::DataInputStream>{};
});
}
}

// M:kairo.unity.ui.Seb.GetBoundingRect
IntArray Seb::GetBoundingRect() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.GetBoundingRect",kairo);
{
IntArray getBoundingRectI_result = require(Seb::GetWorkStaticValue())->getBoundingRectI_result;
getBoundingRectI_result[0] = pls::cs::cast_integral<pls::cs::Int32>(pls::cs::cast_integral<std::int16_t>((pls::cs::shr_u64(pls::cs::cast_integral<std::uint64_t>((boundingRect_ & -281474976710656ll)),48))));
getBoundingRectI_result[1] = pls::cs::cast_integral<pls::cs::Int32>(pls::cs::cast_integral<std::int16_t>((pls::cs::shr_u64(pls::cs::cast_integral<std::uint64_t>((boundingRect_ & 0xFFFF00000000ll)),32))));
getBoundingRectI_result[2] = pls::cs::cast_integral<pls::cs::Int32>(pls::cs::cast_integral<std::int16_t>((pls::cs::shr_u64(pls::cs::cast_integral<std::uint64_t>((boundingRect_ & pls::cs::Int64(0xFFFF0000u))),16))));
getBoundingRectI_result[3] = pls::cs::cast_integral<pls::cs::Int32>(pls::cs::cast_integral<std::int16_t>((boundingRect_ & pls::cs::Int64(0xFFFF))));
if ((flip_ & 2) != 0) {
getBoundingRectI_result[0] = ([&]() -> pls::cs::Int32 { auto cs_left = (-getBoundingRectI_result[2] / 2); auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = (-getBoundingRectI_result[2] / 2); auto cs_right = getBoundingRectI_result[0]; return cs_left - cs_right; }())); return cs_left + cs_right; }());
}
if ((flip_ & 1) != 0) {
getBoundingRectI_result[1] = ([&]() -> pls::cs::Int32 { auto cs_left = (-getBoundingRectI_result[3] / 2); auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = (-getBoundingRectI_result[3] / 2); auto cs_right = getBoundingRectI_result[1]; return cs_left - cs_right; }())); return cs_left + cs_right; }());
}
return getBoundingRectI_result;
}
}

// M:kairo.unity.ui.Seb.GetBoundingRect(System.Int32)
ShortArray Seb::GetBoundingRect(pls::cs::Int32 frame) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.GetBoundingRect(System.Int32)",kairo);
{
ShortArray getBoundingRect_result = require(Seb::GetWorkStaticValue())->getBoundingRect_result;
pls::cs::Int32 num = frame * 4;
if (pls::cs::cast_integral<pls::cs::Int32>(boundingRects_[num + 0]) == pls::cs::cast_integral<pls::cs::Int32>(std::int8_t(-128) /* SByte.MinValue */)) {
num = boundingRects_[num + 1] * 4;
getBoundingRect_result[0] = boundingRectsEx_[num + 0];
getBoundingRect_result[1] = boundingRectsEx_[num + 1];
getBoundingRect_result[2] = boundingRectsEx_[num + 2];
getBoundingRect_result[3] = boundingRectsEx_[num + 3];
} else {
getBoundingRect_result[0] = pls::cs::cast_integral<std::int16_t>(boundingRects_[num + 0]);
getBoundingRect_result[1] = pls::cs::cast_integral<std::int16_t>(boundingRects_[num + 1]);
getBoundingRect_result[2] = pls::cs::cast_integral<std::int16_t>(boundingRects_[num + 2]);
getBoundingRect_result[3] = pls::cs::cast_integral<std::int16_t>(boundingRects_[num + 3]);
}
if ((flip_ & 2) != 0) {
getBoundingRect_result[0] = pls::cs::cast_integral<std::int16_t>((([&]() -> pls::cs::Int32 { auto cs_left = (-pls::cs::Int32(getBoundingRect_result[2]) / 2); auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = (-pls::cs::Int32(getBoundingRect_result[2]) / 2); auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(getBoundingRect_result[0]); return cs_left - cs_right; }())); return cs_left + cs_right; }())));
}
if ((flip_ & 1) != 0) {
getBoundingRect_result[1] = pls::cs::cast_integral<std::int16_t>((([&]() -> pls::cs::Int32 { auto cs_left = (-pls::cs::Int32(getBoundingRect_result[3]) / 2); auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = (-pls::cs::Int32(getBoundingRect_result[3]) / 2); auto cs_right = pls::cs::cast_integral<pls::cs::Int32>(getBoundingRect_result[1]); return cs_left - cs_right; }())); return cs_left + cs_right; }())));
}
return getBoundingRect_result;
}
}

// M:kairo.unity.ui.Seb.GetMaxFrame
pls::cs::Int32 Seb::GetMaxFrame() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.GetMaxFrame",kairo);
{
return maxFrame_;
}
}

// M:kairo.unity.ui.Seb.Frame
void Seb::Frame() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.Frame",kairo);
{
currentFrame_ = (currentFrame_ + 1) % maxFrame_;
}
}

// M:kairo.unity.ui.Seb.GetSprites(System.Int32)
IntArray2 Seb::GetSprites(pls::cs::Int32 frameNo) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.GetSprites(System.Int32)",kairo);
{
pls::cs::Ref<Seb_WorkValue> workValue = GetWorkValue();
pls::cs::Int32 layersNum = GetLayersNum();
if ([&]() { auto cs_left = pls::cs::box(require(workValue)->works_); auto cs_right = pls::cs::box(IntArray2{}); return cs_left == cs_right; }()) {
{ auto cs_target = workValue; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::JTool::MakeArray<IntArray2>(IntArray::from({layersNum, 12}));}); require(cs_target)->works_ = cs_value; }
}
if ([&]() { auto cs_left = pls::cs::box(require(workValue)->result_); auto cs_right = pls::cs::box(IntArray2{}); return cs_left == cs_right; }()) {
{ auto cs_target = workValue; auto cs_value = IntArray2::make(layersNum); require(cs_target)->result_ = cs_value; }
}
for (pls::cs::Int32 i = 0; i < layersNum; ++i) {
{ auto cs_target = require(workValue)->result_; auto cs_index = i; auto cs_value = GetSprite(frameNo, i);cs_target.set_Item(cs_index,cs_value);}
}
return require(workValue)->result_;
}
}

// M:kairo.unity.ui.Seb.GetSpritesLocal(System.Int32)
IntArray2 Seb::GetSpritesLocal(pls::cs::Int32 frameNo) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.GetSpritesLocal(System.Int32)",kairo);
{
pls::cs::Ref<Seb_WorkStaticValue> workStaticValue = Seb::GetWorkStaticValue();
pls::cs::Int32 layersNum = GetLayersNum();
if (([&]() { auto cs_left = pls::cs::box(require(workStaticValue)->result_); auto cs_right = pls::cs::box(IntArray3{}); return cs_left == cs_right; }()) || (require(workStaticValue)->result_.length() <= layersNum)) {
{ auto cs_target = workStaticValue; auto cs_value = IntArray3::make(layersNum + 1); require(cs_target)->result_ = cs_value; }
for (pls::cs::Int32 i = 0; i < require(workStaticValue)->result_.length(); ++i) {
{ auto cs_target = require(workStaticValue)->result_; auto cs_index = i; auto cs_value = IntArray2::make(i);cs_target.set_Item(cs_index,cs_value);}
}
}
IntArray2 array = require(workStaticValue)->result_[layersNum];
for (pls::cs::Int32 j = 0; j < layersNum; ++j) {
array[j] = GetSpriteLocal(frameNo, j);
}
return array;
}
}

// M:kairo.unity.ui.Seb.GetSprite(System.Int32,System.Int32)
IntArray Seb::GetSprite(pls::cs::Int32 frameNo,pls::cs::Int32 lineNo) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.GetSprite(System.Int32,System.Int32)",kairo);
{
pls::cs::Ref<Seb_WorkValue> workValue = GetWorkValue();
if ([&]() { auto cs_left = pls::cs::box(require(workValue)->works_); auto cs_right = pls::cs::box(IntArray2{}); return cs_left == cs_right; }()) {
{ auto cs_target = workValue; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::JTool::MakeArray<IntArray2>(IntArray::from({GetLayersNum(), 12}));}); require(cs_target)->works_ = cs_value; }
}
if ([&]() { auto cs_left = pls::cs::box(cache_); auto cs_right = pls::cs::box(IntArray3{}); return cs_left != cs_right; }()) {
for (pls::cs::Int32 i = 0; i < cache_.length(); ++i) {
pls::cs::Int32 num = cache_[i][lineNo][0];
if (num == -1) {
break;
}
if (num == frameNo) {
IntArray array = cache_[i][lineNo];
for (pls::cs::Int32 num2 = i - 1; num2 >= 0; --num2) {
cache_[num2 + 1][lineNo] = cache_[num2][lineNo];
}
cache_[0][lineNo] = array;
return cache_[0][lineNo];
}
}
IntArray array2 = cache_[pls::cs::Int32(cache_.length()) - 1][lineNo];
for (pls::cs::Int32 num3 = pls::cs::Int32(cache_.length()) - 1; num3 >= 1; --num3) {
cache_[num3][lineNo] = cache_[num3 - 1][lineNo];
}
cache_[0][lineNo] = array2;
}
IntArray array3 = ((([&]() { auto cs_left = pls::cs::box(cache_); auto cs_right = pls::cs::box(IntArray3{}); return cs_left != cs_right; }())) ? cache_[0][lineNo] : require(workValue)->works_[lineNo]);
pls::cs::Int32 num4 = 0;
pls::cs::Int32 num5 = 0;
pls::cs::Int32 num6 = 0;
pls::cs::Int32 num7 = 0;
pls::cs::Int32 num8 = layerHeads_[lineNo];
pls::cs::Int32 num9 = pls::cs::Int32(spriteBuffer_.length()) / 8 - 1;
if (lineNo + 1 < layerHeads_.length()) {
num9 = layerHeads_[lineNo + 1] - 1;
}
if (num8 > num9) {
return IntArray{};
}
if ((frameNo < pls::cs::cast_integral<pls::cs::Int32>(spriteFrames_[num8])) || (frameNo > pls::cs::cast_integral<pls::cs::Int32>(spriteFrames_[num9]))) {
return IntArray{};
}
if (frameNo >= 2) {
while (true) {
pls::cs::Int32 num10 = num8 + (num9 - num8) / 2;
if (num10 == num8 || (pls::cs::cast_integral<pls::cs::Int32>(spriteFrames_[num10]) == frameNo)) {
break;
}
if (pls::cs::cast_integral<pls::cs::Int32>(spriteFrames_[num10]) < frameNo) {
num8 = num10;
} else {
num9 = num10;
}
}
}
for (pls::cs::Int32 num11 = num8, num12 = num8 * 8; num11 <= num9; ) {
if (frameNo == pls::cs::cast_integral<pls::cs::Int32>(spriteFrames_[num11])) {
ConvBufferToSprite(num11, array3);
return array3;
}
if (frameNo < pls::cs::cast_integral<pls::cs::Int32>(spriteFrames_[num11])) {
num4 = num11 - 1;
num5 = num11;
num6 = spriteFrames_[num5] - spriteFrames_[num4];
num7 = frameNo - spriteFrames_[num4];
break;
}
++num11;
num12 += 8;
}
pls::cs::Ref<Seb_WorkStaticValue> workStaticValue = Seb::GetWorkStaticValue();
IntArray array4 = ConvBufferToSprite(num4, require(workStaticValue)->getSprite_sp1);
IntArray array5 = ConvBufferToSprite(num5, require(workStaticValue)->getSprite_sp2);
array3[0] = frameNo;
array3[1] = array4[1];
if (array3[1] < 0) {
array3[2] = ([&]() -> pls::cs::Int32 { auto cs_left = array4[2]; auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = array5[2]; auto cs_right = array4[2]; return cs_left - cs_right; }())) * 4096 / num6 * num7 / 4096; return cs_left + cs_right; }());
array3[3] = ([&]() -> pls::cs::Int32 { auto cs_left = array4[3]; auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = array5[3]; auto cs_right = array4[3]; return cs_left - cs_right; }())) * 4096 / num6 * num7 / 4096; return cs_left + cs_right; }());
array3[4] = ([&]() -> pls::cs::Int32 { auto cs_left = array4[4]; auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = array5[4]; auto cs_right = array4[4]; return cs_left - cs_right; }())) * 4096 / num6 * num7 / 4096; return cs_left + cs_right; }());
array3[5] = ([&]() -> pls::cs::Int32 { auto cs_left = array4[5]; auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = array5[5]; auto cs_right = array4[5]; return cs_left - cs_right; }())) * 4096 / num6 * num7 / 4096; return cs_left + cs_right; }());
} else {
array3[2] = array4[2];
array3[3] = array4[3];
array3[4] = array4[4];
array3[5] = array4[5];
}
array3[6] = ([&]() -> pls::cs::Int32 { auto cs_left = array4[6]; auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = array5[6]; auto cs_right = array4[6]; return cs_left - cs_right; }())) * 4096 / num6 * num7 / 4096; return cs_left + cs_right; }());
array3[7] = ([&]() -> pls::cs::Int32 { auto cs_left = array4[7]; auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = array5[7]; auto cs_right = array4[7]; return cs_left - cs_right; }())) * 4096 / num6 * num7 / 4096; return cs_left + cs_right; }());
array3[8] = array4[8];
array3[9] = array4[9];
array3[2] = array4[2];
array3[3] = array4[3];
array3[4] = array4[4];
array3[5] = array4[5];
array3[10] = array4[10];
array3[11] = array4[11];
return array3;
}
}

// M:kairo.unity.ui.Seb.GetSpriteLocal(System.Int32,System.Int32)
IntArray Seb::GetSpriteLocal(pls::cs::Int32 frameNo,pls::cs::Int32 lineNo) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.GetSpriteLocal(System.Int32,System.Int32)",kairo);
{
pls::cs::Ref<Seb_WorkStaticValue> workStaticValue = Seb::GetWorkStaticValue();
if (layerHeads_.length() >= require(workStaticValue)->works_.length()) {
pls::cs::Int32 num = pls::cs::Int32(layerHeads_.length()) + 5;
{ auto cs_target = workStaticValue; auto cs_value = IntArray3::make(num); require(cs_target)->works_ = cs_value; }
for (pls::cs::Int32 i = 0; i < require(workStaticValue)->works_.length(); ++i) {
{ auto cs_target = require(workStaticValue)->works_; auto cs_index = i; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::JTool::MakeArray<IntArray2>(IntArray::from({i, 12}));});cs_target.set_Item(cs_index,cs_value);}
}
}
if ([&]() { auto cs_left = pls::cs::box(cache_); auto cs_right = pls::cs::box(IntArray3{}); return cs_left != cs_right; }()) {
for (pls::cs::Int32 j = 0; j < cache_.length(); ++j) {
pls::cs::Int32 num2 = cache_[j][lineNo][0];
if (num2 == -1) {
break;
}
if (num2 == frameNo) {
IntArray array = cache_[j][lineNo];
for (pls::cs::Int32 num3 = j - 1; num3 >= 0; --num3) {
cache_[num3 + 1][lineNo] = cache_[num3][lineNo];
}
cache_[0][lineNo] = array;
return cache_[0][lineNo];
}
}
IntArray array2 = cache_[pls::cs::Int32(cache_.length()) - 1][lineNo];
for (pls::cs::Int32 num4 = pls::cs::Int32(cache_.length()) - 1; num4 >= 1; --num4) {
cache_[num4][lineNo] = cache_[num4 - 1][lineNo];
}
cache_[0][lineNo] = array2;
}
IntArray array3 = ((([&]() { auto cs_left = pls::cs::box(cache_); auto cs_right = pls::cs::box(IntArray3{}); return cs_left != cs_right; }())) ? cache_[0][lineNo] : require(workStaticValue)->works_[layerHeads_.length()][lineNo]);
pls::cs::Int32 num5 = 0;
pls::cs::Int32 num6 = 0;
pls::cs::Int32 num7 = 0;
pls::cs::Int32 num8 = 0;
pls::cs::Int32 num9 = layerHeads_[lineNo];
pls::cs::Int32 num10 = pls::cs::Int32(spriteBuffer_.length()) / 8 - 1;
if (lineNo + 1 < layerHeads_.length()) {
num10 = layerHeads_[lineNo + 1] - 1;
}
if (num9 > num10) {
return IntArray{};
}
if ((frameNo < pls::cs::cast_integral<pls::cs::Int32>(spriteFrames_[num9])) || (frameNo > pls::cs::cast_integral<pls::cs::Int32>(spriteFrames_[num10]))) {
return IntArray{};
}
if (frameNo >= 2) {
while (true) {
pls::cs::Int32 num11 = num9 + (num10 - num9) / 2;
if (num11 == num9 || (pls::cs::cast_integral<pls::cs::Int32>(spriteFrames_[num11]) == frameNo)) {
break;
}
if (pls::cs::cast_integral<pls::cs::Int32>(spriteFrames_[num11]) < frameNo) {
num9 = num11;
} else {
num10 = num11;
}
}
}
for (pls::cs::Int32 num12 = num9, num13 = num9 * 8; num12 <= num10; ) {
if (frameNo == pls::cs::cast_integral<pls::cs::Int32>(spriteFrames_[num12])) {
ConvBufferToSprite(num12, array3);
return array3;
}
if (frameNo < pls::cs::cast_integral<pls::cs::Int32>(spriteFrames_[num12])) {
num5 = num12 - 1;
num6 = num12;
num7 = spriteFrames_[num6] - spriteFrames_[num5];
num8 = frameNo - spriteFrames_[num5];
break;
}
++num12;
num13 += 8;
}
IntArray array4 = ConvBufferToSprite(num5, require(workStaticValue)->getSprite_sp1);
IntArray array5 = ConvBufferToSprite(num6, require(workStaticValue)->getSprite_sp2);
array3[0] = frameNo;
array3[1] = array4[1];
if (array3[1] < 0) {
array3[2] = ([&]() -> pls::cs::Int32 { auto cs_left = array4[2]; auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = array5[2]; auto cs_right = array4[2]; return cs_left - cs_right; }())) * 4096 / num7 * num8 / 4096; return cs_left + cs_right; }());
array3[3] = ([&]() -> pls::cs::Int32 { auto cs_left = array4[3]; auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = array5[3]; auto cs_right = array4[3]; return cs_left - cs_right; }())) * 4096 / num7 * num8 / 4096; return cs_left + cs_right; }());
array3[4] = ([&]() -> pls::cs::Int32 { auto cs_left = array4[4]; auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = array5[4]; auto cs_right = array4[4]; return cs_left - cs_right; }())) * 4096 / num7 * num8 / 4096; return cs_left + cs_right; }());
array3[5] = ([&]() -> pls::cs::Int32 { auto cs_left = array4[5]; auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = array5[5]; auto cs_right = array4[5]; return cs_left - cs_right; }())) * 4096 / num7 * num8 / 4096; return cs_left + cs_right; }());
} else {
array3[2] = array4[2];
array3[3] = array4[3];
array3[4] = array4[4];
array3[5] = array4[5];
}
array3[6] = ([&]() -> pls::cs::Int32 { auto cs_left = array4[6]; auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = array5[6]; auto cs_right = array4[6]; return cs_left - cs_right; }())) * 4096 / num7 * num8 / 4096; return cs_left + cs_right; }());
array3[7] = ([&]() -> pls::cs::Int32 { auto cs_left = array4[7]; auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = array5[7]; auto cs_right = array4[7]; return cs_left - cs_right; }())) * 4096 / num7 * num8 / 4096; return cs_left + cs_right; }());
array3[8] = array4[8];
array3[9] = array4[9];
array3[2] = array4[2];
array3[3] = array4[3];
array3[4] = array4[4];
array3[5] = array4[5];
array3[10] = array4[10];
array3[11] = array4[11];
return array3;
}
}

// M:kairo.unity.ui.Seb.ConvBufferToSprite(System.Int32,System.Int32[])
IntArray Seb::ConvBufferToSprite(pls::cs::Int32 index,IntArray sprite) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.ConvBufferToSprite(System.Int32,System.Int32[])",kairo);
{
sprite[0] = pls::cs::cast_integral<pls::cs::Int32>(spriteFrames_[index]);
pls::cs::Int32 num = index * 8;
if (pls::cs::cast_integral<pls::cs::Int32>(spriteBuffer_[num + 0]) == pls::cs::cast_integral<pls::cs::Int32>(std::int8_t(-128) /* SByte.MinValue */)) {
sprite[11] = ([&]() -> pls::cs::Int32 { auto cs_left = ([&]() -> pls::cs::Int32 { auto cs_left = ([&]() -> pls::cs::Int32 { auto cs_left = ((spriteBuffer_[num + 2] & 0xFF) << 24); auto cs_right = ((spriteBuffer_[num + 3] & 0xFF) << 16); return cs_left | cs_right; }()); auto cs_right = ((spriteBuffer_[num + 4] & 0xFF) << 8); return cs_left | cs_right; }()); auto cs_right = (spriteBuffer_[num + 5] & 0xFF); return cs_left | cs_right; }());
pls::cs::Int32 num2 = (spriteBuffer_[num + 1] & 0xFF) * 7;
sprite[1] = pls::cs::cast_integral<pls::cs::Int32>(spritesBufferEx_[num2 + 0]);
sprite[6] = pls::cs::cast_integral<pls::cs::Int32>(spritesBufferEx_[num2 + 1]);
sprite[7] = pls::cs::cast_integral<pls::cs::Int32>(spritesBufferEx_[num2 + 2]);
sprite[2] = pls::cs::cast_integral<pls::cs::Int32>(spritesBufferEx_[num2 + 3]);
sprite[3] = pls::cs::cast_integral<pls::cs::Int32>(spritesBufferEx_[num2 + 4]);
sprite[4] = pls::cs::cast_integral<pls::cs::Int32>(spritesBufferEx_[num2 + 5]);
sprite[5] = pls::cs::cast_integral<pls::cs::Int32>(spritesBufferEx_[num2 + 6]);
} else {
sprite[1] = pls::cs::cast_integral<pls::cs::Int32>(spriteBuffer_[num + 0]);
sprite[6] = pls::cs::cast_integral<pls::cs::Int32>(spriteBuffer_[num + 1]);
sprite[7] = pls::cs::cast_integral<pls::cs::Int32>(spriteBuffer_[num + 2]);
sprite[2] = (spriteBuffer_[num + 3] & 0xFF);
sprite[3] = (spriteBuffer_[num + 4] & 0xFF);
sprite[4] = (spriteBuffer_[num + 5] & 0xFF);
sprite[5] = (spriteBuffer_[num + 6] & 0xFF);
}
sprite[10] = (spriteBuffer_[num + 7] & 0xF);
sprite[8] = ((pls::cs::Int32(spriteBuffer_[num + 7]) >> 6) & 1);
sprite[9] = ((pls::cs::Int32(spriteBuffer_[num + 7]) >> 5) & 1);
if ((flip_ & 2) != 0) {
sprite[8] = (sprite[8] + 1) % 2;
if (sprite[1] == -8) {
{ auto cs_target = sprite; auto cs_index = 6; auto cs_old = cs_target.at(cs_index); auto cs_rhs = -1; pls::cs::Int32 cs_value = cs_old * cs_rhs; cs_target.at(cs_index) = cs_value; }
{ auto cs_target = sprite; auto cs_index = 2; auto cs_old = cs_target.at(cs_index); auto cs_rhs = -1; pls::cs::Int32 cs_value = cs_old * cs_rhs; cs_target.at(cs_index) = cs_value; }
{ auto cs_target = sprite; auto cs_index = 4; auto cs_old = cs_target.at(cs_index); auto cs_rhs = -1; pls::cs::Int32 cs_value = cs_old * cs_rhs; cs_target.at(cs_index) = cs_value; }
} else {
sprite[6] = ([&]() -> pls::cs::Int32 { auto cs_left = (-sprite[4] / 2); auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = (-sprite[4] / 2); auto cs_right = sprite[6]; return cs_left - cs_right; }())); return cs_left + cs_right; }());
}
}
if ((flip_ & 1) != 0) {
sprite[9] = (sprite[9] + 1) % 2;
if (sprite[1] == -8) {
{ auto cs_target = sprite; auto cs_index = 7; auto cs_old = cs_target.at(cs_index); auto cs_rhs = -1; pls::cs::Int32 cs_value = cs_old * cs_rhs; cs_target.at(cs_index) = cs_value; }
{ auto cs_target = sprite; auto cs_index = 3; auto cs_old = cs_target.at(cs_index); auto cs_rhs = -1; pls::cs::Int32 cs_value = cs_old * cs_rhs; cs_target.at(cs_index) = cs_value; }
{ auto cs_target = sprite; auto cs_index = 5; auto cs_old = cs_target.at(cs_index); auto cs_rhs = -1; pls::cs::Int32 cs_value = cs_old * cs_rhs; cs_target.at(cs_index) = cs_value; }
} else {
sprite[7] = ([&]() -> pls::cs::Int32 { auto cs_left = (-sprite[5] / 2); auto cs_right = (([&]() -> pls::cs::Int32 { auto cs_left = (-sprite[5] / 2); auto cs_right = sprite[7]; return cs_left - cs_right; }())); return cs_left + cs_right; }());
}
}
return sprite;
}
}

// M:kairo.unity.ui.Seb.DrawFrame(kairo.unity.ui.Graphics,System.Single,System.Single,kairo.unity.ui.Image[],System.Int32,System.Int32)
void Seb::DrawFrame(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Single x,pls::cs::Single y,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> img,pls::cs::Int32 frame,pls::cs::Int32 lineNo) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.DrawFrame(kairo.unity.ui.Graphics,System.Single,System.Single,kairo.unity.ui.Image[],System.Int32,System.Int32)",kairo);
{
_draw(g, x, y, img, frame, lineNo);
}
}

// M:kairo.unity.ui.Seb.Draw(kairo.unity.ui.Graphics,System.Single,System.Single,kairo.unity.ui.Image[],System.Int32)
void Seb::Draw(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Single x,pls::cs::Single y,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> img,pls::cs::Int32 lineNo) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.Draw(kairo.unity.ui.Graphics,System.Single,System.Single,kairo.unity.ui.Image[],System.Int32)",kairo);
{
_draw(g, x, y, img, currentFrame_, lineNo);
}
}

// M:kairo.unity.ui.Seb._draw(kairo.unity.ui.Graphics,System.Single,System.Single,kairo.unity.ui.Image[],System.Int32,System.Int32)
void Seb::_draw(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Single x,pls::cs::Single y,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> img,pls::cs::Int32 frame,pls::cs::Int32 lineNo) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb._draw(kairo.unity.ui.Graphics,System.Single,System.Single,kairo.unity.ui.Image[],System.Int32,System.Int32)",kairo);
{
if (lineNo == -1) {
IntArray2 spritesLocal = GetSpritesLocal(frame);
if ([&]() { auto cs_left = pls::cs::box(spritesLocal); auto cs_right = pls::cs::box(IntArray2{}); return cs_left == cs_right; }()) {
return;
}
for (pls::cs::Int32 i = 0; i < layerHeads_.length(); ++i) {
DrawIntArray(g, x, y, img, spritesLocal[i]);
}
} else {
IntArray spriteLocal = GetSpriteLocal(frame, lineNo);
DrawIntArray(g, x, y, img, spriteLocal);
}
}
}

// M:kairo.unity.ui.Seb.Draw(kairo.unity.ui.Graphics,System.Single,System.Single,kairo.unity.ui.Image[],System.Int32[])
void Seb::DrawIntArray(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Single x,pls::cs::Single y,pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> img,IntArray sp) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.Draw(kairo.unity.ui.Graphics,System.Single,System.Single,kairo.unity.ui.Image[],System.Int32[])",kairo);
{
if ([&]() { auto cs_left = pls::cs::box(sp); auto cs_right = pls::cs::box(IntArray{}); return cs_left == cs_right; }()) {
return;
}
Seb::GetWorkStaticValue();
auto cs_left_28 = pls::cs::Single(sp[6]); auto cs_right_28 = offset_[0];
pls::cs::Single num = cs_left_28 + cs_right_28;
auto cs_left_29 = pls::cs::Single(sp[7]); auto cs_right_29 = offset_[1];
pls::cs::Single num2 = cs_left_29 + cs_right_29;
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->CheckLocalMatrix();})) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<Matrix> cs_arg0 = Matrix::TranslateTemporary(num, num2); PlsPortGeneratedBootstrap::Source::PushGraphicsMatrix(require(g), cs_arg0); }());});
} else {
x += num;
y += num2;
}
bool flag = false;
if (sp[10] != 0) {
flag = true;
}
if (flag) {
pls::cs::Int32 num3 = pls::cs::to_int32((((pls::cs::Int64(sp[11]) & pls::cs::Int64(0xFF000000u)) >> 24) & pls::cs::Int64(0xFF)));
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetRenderModeOperator();}) == 0 && pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetRenderModeSrcRatio();}) != 255) {
num3 = num3 * pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->GetRenderModeSrcRatio();}) / 255;
if (num3 > 255) {
num3 = 255;
}
}
if (sp[10] == 1) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PushRenderMode(1, num3, 255 - num3);});
} else if (sp[10] == 2) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PushRenderMode(1, num3, 255);});
} else if (sp[10] == 3) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PushRenderMode(2, num3, 255);});
}
}
if (sp[1] > -1) {
pls::cs::Int32 sx = sp[2];
pls::cs::Int32 sy = sp[3];
pls::cs::Int32 width = sp[4];
pls::cs::Int32 height = sp[5];
bool recoveredDrawRegion = true;
if (recoveredDrawRegion) {
pls::cs::Int32 num4 = sp[8] * 1 + sp[9] * 2;
if (num4 != 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetFlipMode(num4);});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<pls::kairo::Image> cs_arg0 = img.get_Item(sp[1]); require(g)->DrawImage(cs_arg0, x, y, sx, sy, width, height); }());});
if (num4 != 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetFlipMode(0);});
}
}
} else if (sp[1] == -2) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Int32 cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg0 = (((sp[11] & 0xFF0000) >> 16) & 0xFF); pls::cs::Int32 cs_arg1 = (((sp[11] & 0xFF00) >> 8) & 0xFF); pls::cs::Int32 cs_arg2 = (sp[11] & 0xFF & 0xFF); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0, cs_arg1, cs_arg2); }());}); require(g)->SetColor(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg2 = sp[4]; pls::cs::Single cs_arg3 = sp[5]; require(g)->FillRect(x, y, cs_arg2, cs_arg3); }());});
} else if (sp[1] == -3) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Int32 cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg0 = (((sp[11] & 0xFF0000) >> 16) & 0xFF); pls::cs::Int32 cs_arg1 = (((sp[11] & 0xFF00) >> 8) & 0xFF); pls::cs::Int32 cs_arg2 = (sp[11] & 0xFF & 0xFF); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0, cs_arg1, cs_arg2); }());}); require(g)->SetColor(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg2 = sp[4]; pls::cs::Single cs_arg3 = sp[5]; require(g)->DrawRect(x, y, cs_arg2, cs_arg3); }());});
} else if (sp[1] == -4) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Int32 cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> pls::cs::Int32 { pls::cs::Int32 cs_arg0 = (((sp[11] & 0xFF0000) >> 16) & 0xFF); pls::cs::Int32 cs_arg1 = (((sp[11] & 0xFF00) >> 8) & 0xFF); pls::cs::Int32 cs_arg2 = (sp[11] & 0xFF & 0xFF); return pls::kairo::Graphics::GetColorOfRGB(cs_arg0, cs_arg1, cs_arg2); }());}); require(g)->SetColor(cs_arg0); }());});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Single cs_arg2 = x + pls::cs::Single(sp[4]); pls::cs::Single cs_arg3 = y + pls::cs::Single(sp[5]); require(g)->DrawLine(x, y, cs_arg2, cs_arg3, 1.0f); }());});
}
if (flag) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopRenderMode();});
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->CheckLocalMatrix();})) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopMatrix();});
}
}
}

// M:kairo.unity.ui.Seb.GetLayersNum
pls::cs::Int32 Seb::GetLayersNum() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.GetLayersNum",kairo);
{
return layerHeads_.length();
}
}

// M:kairo.unity.ui.Seb.SetName(System.String)
void Seb::SetName(pls::cs::String name) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.SetName(System.String)",kairo);
{
name_ = name;
}
}

// M:kairo.unity.ui.Seb.ToString
pls::cs::String Seb::ToString() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.ToString",kairo);
{
{auto cs_left_315 = pls::cs::String::concat(pls::cs::String::concat(literal(u"["), name_), literal(u"] ")); auto cs_right_315 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver_315 = pls::cs::static_pointer_cast<pls::cs::Object>(this);return require(cs_receiver_315)->pls::cs::Object::ToString();}());});
return pls::cs::String::concat(cs_left_315,cs_right_315);}
}
}

// M:kairo.unity.ui.Seb.Reverse(System.Boolean,System.Boolean)
void Seb::Reverse(bool u,bool v) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.Reverse(System.Boolean,System.Boolean)",kairo);
{
if ([&]() { auto cs_left = pls::cs::box(cache_); auto cs_right = pls::cs::box(IntArray3{}); return cs_left != cs_right; }()) {
for (pls::cs::Int32 i = 0; i < cache_.length(); ++i) {
for (pls::cs::Int32 j = 0; j < cache_[i].length(); ++j) {
cache_[i][j][0] = -1;
}
}
}
flip_ = pls::cs::cast_integral<std::int8_t>(0);
if (u) {
flip_ = (flip_ | 2);
}
if (v) {
flip_ = (flip_ | 1);
}
}
}

// M:kairo.unity.ui.Seb.SetCacheSize(System.Int32)
void Seb::SetCacheSize(pls::cs::Int32 size) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.SetCacheSize(System.Int32)",kairo);
{
cache_ = IntArray3::make(size);
for (pls::cs::Int32 i = 0; i < cache_.length(); ++i) {
{ auto cs_target = cache_; auto cs_index = i; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::JTool::MakeArray<IntArray2>(IntArray::from({layerHeads_.length(), 12}));});cs_target.set_Item(cs_index,cs_value);}
for (pls::cs::Int32 j = 0; j < cache_[i].length(); ++j) {
cache_[i][j][0] = -1;
}
}
}
}

// M:kairo.unity.ui.Seb.GetHashCode
std::int32_t Seb::GetHashCode() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.Seb.GetHashCode",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(this));return require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
} // namespace kairo::unity::ui
}
