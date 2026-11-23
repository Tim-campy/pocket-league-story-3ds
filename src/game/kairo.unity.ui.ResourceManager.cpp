// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "generated/java.lang.JInteger.hpp"
#include "generated/java.lang.JSystem.hpp"
#include "generated/java.lang.StringEx.hpp"
#include "generated/java.util.JTool.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.JarInflater.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "generated/kairo.unity.util.StringUtil.hpp"
#include "kairo.unity.ui.Image.hpp"
#include "kairo.unity.ui.ResourceManager.JarCache.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "kairo.unity.ui.Seb.hpp"
#include "kairo.unity.util.JarInflater.hpp"
#include "kairo.unity.util.Language.hpp"
#include "kairo.unity.util.Log.hpp"
#include "generated/java.util.JTool_templates.hpp"

namespace kl_lang = pls::generated::java::lang;
namespace kl_java_util = pls::generated::java::util;
namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_unity_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;
using StringArray = pls::cs::Array<pls::cs::String>;
using StringArray2 = pls::cs::Array<pls::cs::Array<pls::cs::String>>;
using IntArray = pls::cs::Array<pls::cs::Int32>;
using IntArray2 = pls::cs::Array<pls::cs::Array<pls::cs::Int32>>;

namespace pls::game {
namespace kairo::unity::ui {

void ResourceManager::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(img,visitor);pls::cs::trace_value(seb,visitor);pls::cs::trace_value(sound,visitor);pls::cs::trace_value(list_,visitor);pls::cs::trace_value(directory_,visitor);}

static pls::cs::List<ResourceManager_JarCache> ResourceManager_jarCache__storage{};

static StringArray ResourceManager_LIST_FILE_storage{};

static StringArray ResourceManager_listFile__storage{};

static StringArray ResourceManager_SOUND_EXT_storage{};

static pls::cs::Int32 ResourceManager_yieldTime__storage{};

static PLS_NOINLINE void cs_init_b728593e3dcffe31_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(ResourceManager_jarCache__storage,visitor);pls::cs::trace_value(ResourceManager_LIST_FILE_storage,visitor);pls::cs::trace_value(ResourceManager_listFile__storage,visitor);pls::cs::trace_value(ResourceManager_SOUND_EXT_storage,visitor);pls::cs::trace_value(ResourceManager_yieldTime__storage,visitor);});static pls::cs::TypeInitState state;state.run("kairo.unity.ui.ResourceManager",flag,[](){
ResourceManager_SOUND_EXT_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.ui.ResourceManager.SOUND_EXT",[&](){return StringArray::from({literal(u"mld"), literal(u"mmf"), literal(u"spf"), literal(u"mid"), literal(u"wav"), literal(u"jet"), literal(u"ogg")});});
ResourceManager_LIST_FILE_storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.ui.ResourceManager.LIST_FILE",[&](){return StringArray::from({literal(u"img.inf"), literal(u"seb.inf"), literal(u"snd.inf"), literal(u"fig.inf"), literal(u"act.inf"), literal(u"tex.inf"), literal(u"grp.inf")});});
ResourceManager_jarCache__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.ui.ResourceManager.jarCache_",[&](){return pls::cs::List<ResourceManager_JarCache>::make();});
ResourceManager_yieldTime__storage = pls::cs::evaluate_type_initializer_field("F:kairo.unity.ui.ResourceManager.yieldTime_",[&](){return 150;});

});}

void ResourceManager::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_b728593e3dcffe31_slow(flag);}

pls::cs::List<ResourceManager_JarCache>& ResourceManager::jarCache_(){ResourceManager::ensure_initialized();return ResourceManager_jarCache__storage;}

StringArray& ResourceManager::LIST_FILE(){ResourceManager::ensure_initialized();return ResourceManager_LIST_FILE_storage;}

StringArray& ResourceManager::listFile_(){ResourceManager::ensure_initialized();return ResourceManager_listFile__storage;}

StringArray& ResourceManager::SOUND_EXT(){ResourceManager::ensure_initialized();return ResourceManager_SOUND_EXT_storage;}

pls::cs::Int32& ResourceManager::yieldTime_(){ResourceManager::ensure_initialized();return ResourceManager_yieldTime__storage;}

void ResourceManager::create_init(pls::cs::Ref<ResourceManager> self,pls::cs::String imgList,pls::cs::String sebList,pls::cs::String sndList,pls::cs::String figList,pls::cs::String actList,pls::cs::String texList,pls::cs::String grpList) {
ResourceManager::ensure_initialized();
self->rsId_ = -1;
self->rcId_ = -1;
self->recordNameBits_ = 255;
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.#ctor(System.String,System.String,System.String,System.String,System.String,System.String,System.String)",kairo);
{
ResourceManager::listFile_() = StringArray::make(ResourceManager::LIST_FILE().length());
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::Arraycopy(pls::cs::box(ResourceManager::LIST_FILE()), 0, pls::cs::box(ResourceManager::listFile_()), 0, ResourceManager::LIST_FILE().length());});
if (!is_null(imgList)) {
ResourceManager::listFile_()[0] = imgList;
}
if (!is_null(sebList)) {
ResourceManager::listFile_()[1] = sebList;
}
if (!is_null(sndList)) {
ResourceManager::listFile_()[2] = sndList;
}
if (!is_null(figList)) {
ResourceManager::listFile_()[3] = figList;
}
if (!is_null(actList)) {
ResourceManager::listFile_()[4] = actList;
}
if (!is_null(texList)) {
ResourceManager::listFile_()[5] = texList;
}
if (!is_null(grpList)) {
ResourceManager::listFile_()[6] = grpList;
}
self->_init();
}

}

// M:kairo.unity.ui.ResourceManager.get_YieldTime
pls::cs::Int32 ResourceManager::get_YieldTime() {
ResourceManager::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.get_YieldTime",kairo);
{
return ResourceManager::yieldTime_();
}

}

// M:kairo.unity.ui.ResourceManager.LoadImage(System.Byte[],kairo.unity.ui.Image.Format,kairo.unity.ui.Image.Filter)
pls::cs::Ref<pls::kairo::Image> ResourceManager::LoadImage(ByteArray src,pls::kairo::Image::Format format,pls::kairo::Image::Filter filterMode) {
ResourceManager::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.LoadImage(System.Byte[],kairo.unity.ui.Image.Format,kairo.unity.ui.Image.Filter)",kairo);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Image::Load(src, format, filterMode);});
}

}

// M:kairo.unity.ui.ResourceManager.LoadSeb(System.Byte[])
pls::cs::Ref<Seb> ResourceManager::LoadSeb(ByteArray src) {
ResourceManager::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.LoadSeb(System.Byte[])",kairo);
{
return Seb::create(src);
}

}

// M:kairo.unity.ui.ResourceManager.LoadSound(System.String,System.Int32)
pls::cs::Ref<pls::kairo::SoundBase> ResourceManager::LoadSound(pls::cs::String file,pls::cs::Int32 format) {
ResourceManager::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.LoadSound(System.String,System.Int32)",kairo);
{
file = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_cfg::Config::ConvertExtension(file);});
pls::cs::Ref<pls::kairo::SoundBase> result = pls::cs::Ref<pls::kairo::SoundBase>{};
if (format == 6) {
result = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::SoundOGG::Load(file);});
}
return result;
}

}

// M:kairo.unity.ui.ResourceManager.#ctor(System.String,System.String,System.String,System.String,System.String,System.String,System.String)
pls::cs::Ref<ResourceManager> ResourceManager::create(pls::cs::String imgList,pls::cs::String sebList,pls::cs::String sndList,pls::cs::String figList,pls::cs::String actList,pls::cs::String texList,pls::cs::String grpList) {
ResourceManager::ensure_initialized();
 auto self = pls::cs::make_ref<ResourceManager>(); ResourceManager::create_init(self,imgList,sebList,sndList,figList,actList,texList,grpList); return self; 
}

// M:kairo.unity.ui.ResourceManager._init
void ResourceManager::_init() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager._init",kairo);
{
_init(false);
}
}

// M:kairo.unity.ui.ResourceManager._init(System.Boolean)
void ResourceManager::_init(bool keepFileList) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager._init(System.Boolean)",kairo);
{
img = pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>::make(0);
seb = pls::cs::Array<pls::cs::Ref<Seb>>::make(0);
sound = pls::cs::Array<pls::cs::Ref<pls::kairo::SoundBase>>::make(0);
if (!keepFileList) {
list_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_java_util::JTool::MakeArray<StringArray2>(IntArray::from({ResourceManager::LIST_FILE().length(), 0}));});
}
loadCnt_ = 0;
loadNum_ = loadCnt_;
loaded_ = false;
}
}

// M:kairo.unity.ui.ResourceManager.Load(System.Byte[],System.Int32)
void ResourceManager::Load(ByteArray data,pls::cs::Int32 m3dVer) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.Load(System.Byte[],System.Int32)",kairo);
{
pls::cs::Ref<kl_unity_util::JarInflater> jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
pls::cs::run_finally([&]() {{
jarInflater = kl_unity_util::JarInflater::create(data);
LoadJarInflater(jarInflater, m3dVer);
}}, [&]() {
if (!is_null(jarInflater)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(jarInflater)->Close();});
}
jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
});
}
}

// M:kairo.unity.ui.ResourceManager.Load(kairo.unity.util.JarInflater,System.Int32)
void ResourceManager::LoadJarInflater(pls::cs::Ref<kl_unity_util::JarInflater> jar,pls::cs::Int32 m3dVer) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.Load(kairo.unity.util.JarInflater,System.Int32)",kairo);
{
LoadReady(jar);
LoadStart(jar, m3dVer);
}
}

// M:kairo.unity.ui.ResourceManager.Load(System.String,System.Int32)
void ResourceManager::LoadString(pls::cs::String directory,pls::cs::Int32 m3dVer) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.Load(System.String,System.Int32)",kairo);
{
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return last_index_char1(directory, u'.');});
if (num != -1) {
directory = kl_lang::StringEx::SubstringJ(directory, 0, num);
}
pls::cs::Ref<kl_unity_util::JarInflater> jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
pls::cs::run_finally([&]() {{
jarInflater = util::JarInflater::create(directory);
LoadReady(jarInflater);
LoadStart(jarInflater, m3dVer);
}}, [&]() {
if (!is_null(jarInflater)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(jarInflater)->Close();});
}
jarInflater = pls::cs::Ref<kl_unity_util::JarInflater>{};
});
}
}

// M:kairo.unity.ui.ResourceManager.LoadReady(kairo.unity.util.JarInflater)
void ResourceManager::LoadReady(pls::cs::Ref<kl_unity_util::JarInflater> jar) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.LoadReady(kairo.unity.util.JarInflater)",kairo);
{
if (loaded_) {
return;
}
Dispose();
if (!is_null(util::JarInflater::GetDirectory(require(jar)))) {
directory_ = pls::cs::String::concat(literal(u"Data/"), util::JarInflater::GetDirectory(require(jar)));
}
loadNum_ = 0;
for (pls::cs::Int32 i = 0; i < ResourceManager::listFile_().length(); ++i) {
if (kl_lang::StringEx::Length(ResourceManager::listFile_()[i]) != 0) {
StringArray array = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::LoadStringArray(jar, ResourceManager::listFile_()[i]);});
if ([&]() { auto cs_left = pls::cs::box(array); auto cs_right = pls::cs::box(StringArray{}); return cs_left != cs_right; }()) {
list_[i] = array;
}
for (pls::cs::Int32 j = 0; j < list_[i].length(); ++j) {
{ auto cs_target = list_[i]; auto cs_index = j; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(list_[i][j]);});cs_target.set_Item(cs_index,cs_value);}
}
loadNum_ = loadNum_ + list_[i].length();
}
}
}
}

// M:kairo.unity.ui.ResourceManager.LoadStart(kairo.unity.util.JarInflater,System.Int32)
void ResourceManager::LoadStart(pls::cs::Ref<kl_unity_util::JarInflater> jar,pls::cs::Int32 m3dVer) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.LoadStart(kairo.unity.util.JarInflater,System.Int32)",kairo);
{
pls::cs::Ref<pls::cs::Cell<pls::cs::Ref<kl_unity_util::JarInflater>>> jar_cell=pls::cs::make_ref<pls::cs::Cell<pls::cs::Ref<kl_unity_util::JarInflater>>>(jar);
{
IntArray2 array = IntArray2{};
if (!loaded_) {
loadCnt_ = 0;
array = IntArray2::make(list_.length());
for (pls::cs::Int32 i = 0; i < list_.length(); ++i) {
array[i] = IntArray::make(list_[i].length());
for (pls::cs::Int32 j = 0; j < list_[i].length(); ++j) {
array[i][j] = -1;
StringArray array2 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(list_[i][j], literal(u"\t"));});
if (array2.length() >= 2) {
{ auto cs_target = array[i]; auto cs_index = j; auto cs_value = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(array2[0]);});cs_target.set_Item(cs_index,cs_value);}
list_[i][j] = array2[1];
}
}
}
}
if (!loaded_) {
img = pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>::make(list_[0].length());
this->seb = pls::cs::Array<pls::cs::Ref<Seb>>::make(list_[1].length());
sound = pls::cs::Array<pls::cs::Ref<pls::kairo::SoundBase>>::make(list_[2].length());
}
pls::cs::Ref<pls::cs::Cell<IntArray2>> loadTask_cell = pls::cs::make_ref<pls::cs::Cell<IntArray2>>(IntArray2::from({IntArray::make(2), IntArray::from({1, 0}), IntArray::from({2, 0})}));
pls::cs::Ref<pls::cs::Cell<StringArray>> sebFileName_cell = pls::cs::make_ref<pls::cs::Cell<StringArray>>(StringArray::make(list_[1].length()));
while (true) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}); pls::cs::Delegate<void()> cs_arg0 = pls::cs::Delegate<void()>::from_closure(pls::cs::raw(loadTask_cell),std::string("M:kairo.unity.ui.ResourceManager.LoadStart(kairo.unity.util.JarInflater,System.Int32):7264")+std::to_string(reinterpret_cast<std::uintptr_t>(pls::cs::raw(jar_cell)))+std::to_string(reinterpret_cast<std::uintptr_t>(pls::cs::raw(sebFileName_cell))),[loadTask_cell,jar_cell,sebFileName_cell,self=this]() -> void {{
kl_cfg::Config::ensure_initialized();

pls::cs::Int64 num17 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::CurrentTimeMillis();});
for (pls::cs::Int32 k = 0; k < loadTask_cell->value.length(); ++k) {
pls::cs::Int32 num18 = loadTask_cell->value[k][0];
for (pls::cs::Int32 l = loadTask_cell->value[k][1]; l < self->list_[num18].length(); ++l,loadTask_cell->value[k][1]++,++self->loadCnt_) {
if (self->CheckFileEffective(self->list_[num18][l])) {
pls::cs::Int32 num19 = 0;
if ((num18 == 0)) {
{
pls::cs::String fileName2 = self->GetFileName(self->list_[0][l]);
StringArray array7 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(fileName2, literal(u","));});
fileName2 = array7[0];
bool flag3 = false;
bool flag4 = false;
pls::cs::String text3 = pls::cs::String{};
pls::kairo::Image::Filter filterMode = static_cast<pls::kairo::Image::Filter>(-1) /* Filter.Default */;
pls::kairo::Image::Format format = static_cast<pls::kairo::Image::Format>(-1) /* Format.Default */;
pls::cs::Int32 renderQueue_ = 0;
pls::cs::Int32 imageAtlasId_ = -1;
pls::cs::Int32 width = 0;
pls::cs::Int32 height = 0;
bool flag5 = false;
for (pls::cs::Int32 n = 1; n < array7.length(); ++n) {
pls::cs::String text4 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_to_lower(array7[n]);});
if (text4 == literal(u"bin")) {
flag3 = true;
} else if (text4 == literal(u"res")) {
flag4 = true;
} else if (text4 == literal(u"pt")) {
filterMode = static_cast<pls::kairo::Image::Filter>(0) /* Filter.Point */;
} else if (text4 == literal(u"bi")) {
filterMode = static_cast<pls::kairo::Image::Filter>(1) /* Filter.Bilinear */;
} else if (text4 == literal(u"tri")) {
filterMode = static_cast<pls::kairo::Image::Filter>(2) /* Filter.Trilinear */;
} else if (text4 == literal(u"24")) {
format = static_cast<pls::kairo::Image::Format>(3) /* Format.RGB24 */;
} else if (text4 == literal(u"565")) {
format = static_cast<pls::kairo::Image::Format>(7) /* Format.RGB565 */;
} else if (text4 == literal(u"32")) {
format = static_cast<pls::kairo::Image::Format>(5) /* Format.ARGB32 */;
} else if (text4 == literal(u"4444")) {
format = static_cast<pls::kairo::Image::Format>(2) /* Format.ARGB4444 */;
} else {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_ends_with(text4, literal(u".pal"));})) {
text3 = array7[n];
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_starts_with(text4, literal(u"q+"));}) || pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_starts_with(text4, literal(u"q-"));})) {
if (pls::cs::cast_integral<pls::cs::Int32>(text4.at(1)) == pls::cs::cast_integral<pls::cs::Int32>(u'+')) {
text4 = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(text4, 2);});
} else {
text4 = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(text4, 1);});
}
renderQueue_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(text4);});
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_starts_with(text4, literal(u"@"));})) {
if (text4.length() == 1) {
imageAtlasId_ = 0;
} else {
imageAtlasId_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(text4, 1);}));});
}
} else if (pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=text4;auto cs_char=u'x';return index_char1(cs_text,cs_char)!=-1;}());})) {
if ((pls::cs::cast_integral<pls::cs::Int32>(text4.at(0)) == pls::cs::cast_integral<pls::cs::Int32>(u'e')) || (pls::cs::cast_integral<pls::cs::Int32>(text4.at(0)) == pls::cs::cast_integral<pls::cs::Int32>(u'E'))) {
text4 = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(text4, 1);});
if (!util::Language::English()) {
continue;
}
}
StringArray array8 = pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_text=text4;auto cs_separators=pls::cs::Array<char16_t>::make(1);cs_separators.at(0)=u'x';return pls::cs::string_split(cs_text,cs_separators);}());});
width = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(array8[0]);});
height = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::int32_parse(array8[1]);});
} else {
flag5 = true;
}
}
}
if (kl_cfg::Config::PRINT() && flag5) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::Log::Info(pls::cs::String::concat(literal(u"ｲﾒｰｼﾞのｵﾌﾟｼｮﾝが[bin][res][pt][bi][tri][24][32][565][4444][*.pal][q][@]のどれにも当てはまりません:"), self->list_[0][l]), pls::cs::Ref<pls::cs::ExceptionObject>{});});
}
try {
if (self->rsId_ != -1) {
{ auto cs_target = self->img; auto cs_index = l; auto cs_value = pls::kairo::Image::FromRecord(self->rsId_, self->rcId_, fileName2, text3, format, filterMode);cs_target.set_Item(cs_index,cs_value);}
} else if (flag3) {
if (!self->loaded_ || util::JarInflater::Exist(require(jar_cell->value), fileName2)) {
ByteArray cs_arg0_30 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(jar_cell->value)->GetData(fileName2);}); ByteArray cs_arg1_30 = ((!is_null(text3)) ? pls::diagnostic::api_call([&]() -> decltype(auto) {return require(jar_cell->value)->GetData(text3);}) : ByteArray{});
ByteArray src = Image::OverwritePaletteData(cs_arg0_30, cs_arg1_30);
{ auto cs_target = self->img; auto cs_index = l; auto cs_value = pls::kairo::Image::FromBytes(src, format, filterMode);cs_target.set_Item(cs_index,cs_value);}
}
} else if (flag4) {
{ auto cs_target = self->img; auto cs_index = l; auto cs_value = pls::kairo::Image::FromFile(pls::cs::String::concat(util::JarInflater::GetDirectory(require(jar_cell->value)), fileName2), text3, format, filterMode);cs_target.set_Item(cs_index,cs_value);}
} else if (!self->loaded_ || util::JarInflater::Exist(require(jar_cell->value), fileName2)) {
ByteArray cs_arg0_31 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(jar_cell->value)->GetData(fileName2);}); ByteArray cs_arg1_31 = ((!is_null(text3)) ? pls::diagnostic::api_call([&]() -> decltype(auto) {return require(jar_cell->value)->GetData(text3);}) : ByteArray{});
ByteArray src2 = Image::OverwritePaletteData(cs_arg0_31, cs_arg1_31);
{ auto cs_target = self->img; auto cs_index = l; auto cs_value = ResourceManager::LoadImage(src2, format, filterMode);cs_target.set_Item(cs_index,cs_value);}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(self->img.get_Item(l))->SetStandardResolution(width, height);});
if (flag3 && !is_null(self->img.get_Item(l))) {
require(self->img.get_Item(l))->useBin_ = true;
}
if (!is_null(self->img.get_Item(l))) {
require(self->img.get_Item(l))->imageAtlasId_ = imageAtlasId_;
}
require(self->img.get_Item(l))->renderQueue_ = renderQueue_;
if ((self->recordNameBits_ & 1) != 0 && !is_null(self->img.get_Item(l))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(self->img.get_Item(l))->SetName(fileName2);});
}
++num19;
} catch(const pls::cs::Exception& cs_caught_62) {auto t2=pls::cs::capture_exception(cs_caught_62);
{
util::Log::Error(pls::cs::String::concat(literal(u"loadImageに失敗:"), fileName2), t2);
}}
}
} else if ((num18 == 1)) {
{
pls::cs::String fileName3 = self->GetFileName(self->list_[1][l]);
StringArray array9 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(fileName3, literal(u","));});
bool u = false;
bool v = false;
pls::cs::Int32 num21 = 0;
for (pls::cs::Int32 num22 = 1; num22 < array9.length(); ++num22) {
char16_t recoveredOptionChar = kl_lang::StringEx::CharAt(array9[num22], 0);
if (pls::cs::cast_integral<pls::cs::Int32>(recoveredOptionChar) == pls::cs::cast_integral<pls::cs::Int32>(u'u')) {
u = true;
} else if (pls::cs::cast_integral<pls::cs::Int32>(recoveredOptionChar) == pls::cs::cast_integral<pls::cs::Int32>(u'v')) {
v = true;
} else if (pls::cs::cast_integral<pls::cs::Int32>(recoveredOptionChar) == pls::cs::cast_integral<pls::cs::Int32>(u'c')) {
num21 = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JInteger::ParseInt(pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(array9[num22], 1);}));});
}
}
fileName3 = array9[0];
sebFileName_cell->value[l] = fileName3;
try {
pls::cs::Ref<Seb> seb = pls::cs::Ref<Seb>{};
for (pls::cs::Int32 num23 = 0; num23 < l; ++num23) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return string_equals(fileName3, sebFileName_cell->value[num23]);})) {
seb = self->seb.get_Item(num23);
break;
}
}
if (is_null(seb)) {
{ auto cs_target = self->seb; auto cs_index = l; auto cs_value = ResourceManager::LoadSeb(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(jar_cell->value)->GetData(fileName3);}));cs_target.set_Item(cs_index,cs_value);}
} else {
{ auto cs_target = self->seb; auto cs_index = l; auto cs_value = Seb::create_2(seb);cs_target.set_Item(cs_index,cs_value);}
}
if ((self->recordNameBits_ & 2) != 0) {
require(self->seb.get_Item(l))->SetName(fileName3);
}
require(self->seb.get_Item(l))->manager_ = self;
require(self->seb.get_Item(l))->Reverse(u, v);
if (num21 > 0) {
require(self->seb.get_Item(l))->SetCacheSize(num21);
}
++num19;
} catch(const pls::cs::Exception& cs_caught_63) {auto t3=pls::cs::capture_exception(cs_caught_63);
{
util::Log::Error(pls::cs::String::concat(literal(u"loadSebに失敗:"), fileName3), t3);
}}
}
} else if ((num18 == 2)) {
{
pls::cs::String text = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_cfg::Config::ConvertExtension(kl_lang::StringEx::ToLowerCase(self->list_[2][l]));});
pls::cs::Int32 num20 = -1;
for (pls::cs::Int32 m = 0; m < ResourceManager::SOUND_EXT().length(); ++m) {
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_ends_with(text, ResourceManager::SOUND_EXT()[m]);})) {
num20 = m;
break;
}
}
if (num20 == -1) {
continue;
}
try {
pls::cs::String text2 = ((is_null(self->directory_)) ? literal(u"") : self->directory_);
{ auto cs_target = self->sound; auto cs_index = l; auto cs_value = ResourceManager::LoadSound(pls::cs::String::concat(text2, text), num20);cs_target.set_Item(cs_index,cs_value);}
if ((self->recordNameBits_ & 4) != 0) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(self->sound.get_Item(l))->SetName(text);});
}
++num19;
} catch(const pls::cs::Exception& cs_caught_64) {auto t=pls::cs::capture_exception(cs_caught_64);
{
util::Log::Error(pls::cs::String::concat(literal(u"loadSoundに失敗:"), text), t);
}}
}
}
if (num19 > 0 && ([&]() -> bool { auto cs_left = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_lang::JSystem::CurrentTimeMillis();}) - num17; auto cs_right = pls::cs::cast_integral<pls::cs::Int64>(ResourceManager::get_YieldTime()); return cs_left >= cs_right; }())) {
return;
}
}
}
}

}},loadTask_cell,jar_cell,sebFileName_cell,this); require(cs_receiver)->RunOnUiThread(cs_arg0, true); }());});
bool flag = true;
for (pls::cs::Int32 num = 0; num < loadTask_cell->value.length(); ++num) {
if ([&]() -> bool { auto cs_left = loadTask_cell->value[num][1]; auto cs_right = list_[loadTask_cell->value[num][0]].length(); return cs_left < cs_right; }()) {
flag = false;
}
}
if (flag) {
break;
}
}
if (!loaded_) {
for (pls::cs::Int32 num2 = 0; num2 < array.length(); ++num2) {
pls::cs::Int32 num3 = array[num2].length();
for (pls::cs::Int32 num4 = 0; num4 < array[num2].length(); ++num4) {
if (array[num2][num4] + 1 > num3) {
num3 = array[num2][num4] + 1;
}
}
for (pls::cs::Int32 num5 = 0; num5 < array[num2].length(); ++num5) {
pls::cs::Int32 num6 = 0;
while (array[num2][num5] == -1) {
bool flag2 = false;
for (pls::cs::Int32 num7 = 0; num7 < array[num2].length(); ++num7) {
if (array[num2][num7] == num6) {
flag2 = true;
}
}
if (!flag2) {
array[num2][num5] = num6;
}
++num6;
}
}
StringArray array3 = StringArray::make(num3);
for (pls::cs::Int32 num8 = 0; num8 < list_[num2].length(); ++num8) {
{ auto cs_target = array3; auto cs_index = array[num2][num8]; auto cs_value = list_[num2][num8];cs_target.set_Item(cs_index,cs_value);}
}
list_[num2] = array3;
if ((num2 == 0)) {
{
pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> array6 = pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>::make(num3);
for (pls::cs::Int32 num11 = 0; num11 < img.length(); ++num11) {
{ auto cs_target = array6; auto cs_index = array[num2][num11]; auto cs_value = img.get_Item(num11);cs_target.set_Item(cs_index,cs_value);}
}
img = array6;
}
} else if ((num2 == 1)) {
{
pls::cs::Array<pls::cs::Ref<Seb>> array5 = pls::cs::Array<pls::cs::Ref<Seb>>::make(num3);
for (pls::cs::Int32 num10 = 0; num10 < this->seb.length(); ++num10) {
{ auto cs_target = array5; auto cs_index = array[num2][num10]; auto cs_value = this->seb.get_Item(num10);cs_target.set_Item(cs_index,cs_value);}
}
this->seb = array5;
}
} else if ((num2 == 2)) {
{
pls::cs::Array<pls::cs::Ref<pls::kairo::SoundBase>> array4 = pls::cs::Array<pls::cs::Ref<pls::kairo::SoundBase>>::make(num3);
for (pls::cs::Int32 num9 = 0; num9 < sound.length(); ++num9) {
{ auto cs_target = array4; auto cs_index = array[num2][num9]; auto cs_value = sound.get_Item(num9);cs_target.set_Item(cs_index,cs_value);}
}
sound = array4;
}
}
}
}
if ([&]() { auto cs_left = pls::cs::box(img); auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::Ref<pls::kairo::Image>>{}); return cs_left != cs_right; }()) {
for (pls::cs::Int32 num12 = 0; num12 < img.length(); ++num12) {
if (!is_null(img.get_Item(num12))) {
pls::cs::String fileName = GetFileName(list_[0][num12]);
fileName = pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_unity_util::StringUtil::Split(fileName, literal(u","));})[0];
fileName = pls::cs::String::concat(pls::diagnostic::api_call([&]() -> decltype(auto) {return substring2(fileName, 0, kl_lang::StringEx::Length(fileName) - 3);}), literal(u"opt"));
if (util::JarInflater::Exist(require(jar_cell->value), fileName)) {
{ auto cs_receiver = img.get_Item(num12); ByteArray cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(jar_cell->value)->GetData(fileName);}); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg1 = img; Image::LoadOptimizeByteArray(require(cs_receiver), cs_arg0, cs_arg1); }
}
}
}
}
pls::cs::Ref<pls::cs::Cell<pls::cs::List<IntArray>>> atlasIamges_cell = pls::cs::make_ref<pls::cs::Cell<pls::cs::List<IntArray>>>(pls::cs::List<IntArray>::make());
for (pls::cs::Int32 num13 = 0; num13 < img.length(); ++num13) {
if (!is_null(img.get_Item(num13)) && require(img.get_Item(num13))->imageAtlasId_ != -1) {
auto cs_left_32 = pls::cs::Int32(pls::diagnostic::api_call([&]() -> decltype(auto) {return require(img.get_Item(num13))->GetHeight();})) * 100; auto cs_right_32 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(img.get_Item(num13))->GetWidth();});
pls::cs::Int32 num14 = cs_left_32 + cs_right_32;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = atlasIamges_cell->value; auto cs_arg0 = IntArray::from({num13, num14}); cs_receiver.Add(cs_arg0); }());});
}
}
for (pls::cs::Int32 num15 = 0; num15 < pls::cs::Int32(atlasIamges_cell->value.get_Count()) - 1; ++num15) {
for (pls::cs::Int32 num16 = pls::cs::Int32(atlasIamges_cell->value.get_Count()) - 1; num16 > num15; --num16) {
if ([&]() -> bool { auto cs_left = atlasIamges_cell->value.get_Item(num16 - 1)[1]; auto cs_right = atlasIamges_cell->value.get_Item(num16)[1]; return cs_left < cs_right; }()) {
IntArray value = atlasIamges_cell->value.get_Item(num16);
{ auto cs_target = atlasIamges_cell->value; auto cs_index = num16; auto cs_value = atlasIamges_cell->value.get_Item(num16 - 1); cs_target.set_Item(cs_index,cs_value); }
{ auto cs_target = atlasIamges_cell->value; auto cs_index = num16 - 1; auto cs_value = value; cs_target.set_Item(cs_index,cs_value); }
}
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}); pls::cs::Delegate<void()> cs_arg0 = pls::cs::Delegate<void()>::from_closure(pls::cs::raw(atlasIamges_cell),std::string("M:kairo.unity.ui.ResourceManager.LoadStart(kairo.unity.util.JarInflater,System.Int32):17075"),[atlasIamges_cell,self=this]() -> void {{
for (pls::cs::Int32 k_2 = 0; k_2 < atlasIamges_cell->value.get_Count(); ++k_2) {
auto cs_array_33 = self->img; auto cs_index_33 = atlasIamges_cell->value.get_Item(k_2)[0];
pls::cs::Ref<pls::kairo::Image> obj = cs_array_33.get_Item(cs_index_33);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(obj)->SetImageAtlasId(require(obj)->imageAtlasId_);});
}
}},atlasIamges_cell,this); require(cs_receiver)->RunOnUiThread(cs_arg0, true); }());});
loaded_ = true;
}
}
}

// M:kairo.unity.ui.ResourceManager.CheckFileEffective(System.String)
bool ResourceManager::CheckFileEffective(pls::cs::String file) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.CheckFileEffective(System.String)",kairo);
{
if (is_null(file) || kl_lang::StringEx::Length(file) == 0) {
return false;
}
if (pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_index_of(file, literal(u"\\"));}) == -1 && pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::culture_index_of(file, literal(u"/"));}) == -1) {
return !loaded_;
}
return loaded_;
}
}

// M:kairo.unity.ui.ResourceManager.GetFileName(System.String)
pls::cs::String ResourceManager::GetFileName(pls::cs::String file) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.GetFileName(System.String)",kairo);
{
pls::cs::Int32 num = pls::diagnostic::api_call([&]() -> decltype(auto) {return last_index_char1(file, u'\\');});
if (num != -1) {
file = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(file, num + 1);});
}
num = pls::diagnostic::api_call([&]() -> decltype(auto) {return last_index_char1(file, u'/');});
if (num != -1) {
file = pls::diagnostic::api_call([&]() -> decltype(auto) {return substring1(file, num + 1);});
}
return pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::cs::string_trim(file);});
}
}

// M:kairo.unity.ui.ResourceManager.Dispose
void ResourceManager::Dispose() {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.Dispose",kairo);
{
Dispose(false);
}
}

// M:kairo.unity.ui.ResourceManager.Dispose(System.Boolean)
void ResourceManager::Dispose(bool keepFileList) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.Dispose(System.Boolean)",kairo);
{
for (pls::cs::Int32 num = pls::cs::Int32(sound.length()) - 1; num >= 0; --num) {
if (!is_null(sound.get_Item(num))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(sound.get_Item(num))->Dispose();});
}
sound.set_Item(num, pls::cs::Ref<pls::kairo::SoundBase>{});
}
for (pls::cs::Int32 num2 = pls::cs::Int32(seb.length()) - 1; num2 >= 0; --num2) {
if (!is_null(seb.get_Item(num2))) {
require(seb.get_Item(num2))->Dispose();
}
seb.set_Item(num2, pls::cs::Ref<Seb>{});
}
for (pls::cs::Int32 num3 = pls::cs::Int32(img.length()) - 1; num3 >= 0; --num3) {
if (!is_null(img.get_Item(num3))) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(img.get_Item(num3))->Dispose();});
}
img.set_Item(num3, pls::cs::Ref<pls::kairo::Image>{});
}
_init(keepFileList);
}
}

// M:kairo.unity.ui.ResourceManager.DrawSeb(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)
void ResourceManager::DrawSeb(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 seb) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.DrawSeb(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32)",kairo);
{
{ auto cs_receiver = this->seb.get_Item(seb); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = img; require(cs_receiver)->Draw(g, x, y, cs_arg3, -1); }
}
}

// M:kairo.unity.ui.ResourceManager.DrawSeb(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32,System.Int32)
void ResourceManager::DrawSeb(pls::cs::Ref<pls::kairo::Graphics> g,pls::cs::Single x,pls::cs::Single y,pls::cs::Int32 seb,pls::cs::Int32 frame) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.DrawSeb(kairo.unity.ui.Graphics,System.Single,System.Single,System.Int32,System.Int32)",kairo);
{
frame %= require(this->seb.get_Item(seb))->GetMaxFrame();
{ auto cs_receiver = this->seb.get_Item(seb); pls::cs::Array<pls::cs::Ref<pls::kairo::Image>> cs_arg3 = img; require(cs_receiver)->DrawFrame(g, x, y, cs_arg3, frame, -1); }
}
}

// M:kairo.unity.ui.ResourceManager.SetRecordNameBits(System.Int32)
pls::cs::Ref<ResourceManager> ResourceManager::SetRecordNameBits(pls::cs::Int32 bits) {PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.SetRecordNameBits(System.Int32)",kairo);
{
recordNameBits_ = bits;
return this;
}
}

// M:kairo.unity.ui.ResourceManager.OpenJarCache(System.Int32,System.Int32)
pls::cs::Ref<kl_unity_util::JarInflater> ResourceManager::OpenJarCache(pls::cs::Int32 rsId,pls::cs::Int32 rcId) {
ResourceManager::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.OpenJarCache(System.Int32,System.Int32)",kairo);
{
{auto cs_list_enum188=ResourceManager::jarCache_().GetEnumerator();struct cs_list_scope188{decltype(cs_list_enum188)&e;~cs_list_scope188(){e.Dispose();}} cs_scope188{cs_list_enum188};while(cs_list_enum188.MoveNext()){ ResourceManager_JarCache item=cs_list_enum188.get_Current();{
if ((item.RsId == rsId) && (item.RcId == rcId)) {
return item.Jar;
}
}}}
pls::cs::Ref<kl_unity_util::JarInflater> jarInflater = kl_unity_util::JarInflater::create(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::RecordStore::ReadRecord(rsId, rcId);}));
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { auto cs_receiver = ResourceManager::jarCache_(); auto cs_arg0 = ResourceManager_JarCache::create(rsId, rcId, jarInflater); cs_receiver.Add(cs_arg0); }());});
return jarInflater;
}

}

// M:kairo.unity.ui.ResourceManager.CloseJarCache
void ResourceManager::CloseJarCache() {
ResourceManager::ensure_initialized();
PLS_METHOD_SCOPE("KairoLibrary","M:kairo.unity.ui.ResourceManager.CloseJarCache",kairo);
{
if (ResourceManager::jarCache_().get_Count() == 0) {
return;
}
for (pls::cs::Int32 num = pls::cs::Int32(ResourceManager::jarCache_().get_Count()) - 1; num >= 0; --num) {
if (!is_null(ResourceManager::jarCache_().get_Item(num).Jar)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(ResourceManager::jarCache_().get_Item(num).Jar)->Close();});
}
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return ResourceManager::jarCache_().Clear();});
}

}
} // namespace kairo::unity::ui
}
