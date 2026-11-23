// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "form.FormManager.hpp"
#include "form.MyFormBase.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "main.AppData.hpp"
#include "surface.GameView.hpp"
#include "system.form.ConnectForm.hpp"

namespace kl_util = pls::generated::kairo::unity::util;

using ByteArray = pls::cs::Array<std::uint8_t>;

namespace pls::game {
namespace system::form {

void ConnectForm::trace_edges(const pls::cs::EdgeVisitor&visitor)const {MyFormBase::trace_edges(visitor);}

static bool ConnectForm_close__storage{};

static pls::cs::Ref<ConnectForm> ConnectForm_form__storage{};

static pls::cs::Int32 ConnectForm_FORMID_CONNECT_storage{};

static pls::cs::Int32 ConnectForm_frame__storage{};

static pls::cs::Ref<kairo::unity::ui::ResourceManager> ConnectForm_resConnect__storage{};

static PLS_NOINLINE void cs_init_f52c904bea265acc_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(ConnectForm_close__storage,visitor);pls::cs::trace_value(ConnectForm_form__storage,visitor);pls::cs::trace_value(ConnectForm_FORMID_CONNECT_storage,visitor);pls::cs::trace_value(ConnectForm_frame__storage,visitor);pls::cs::trace_value(ConnectForm_resConnect__storage,visitor);});static pls::cs::TypeInitState state;state.run("system.form.ConnectForm",flag,[](){
ConnectForm_FORMID_CONNECT_storage = pls::cs::evaluate_type_initializer_field("F:system.form.ConnectForm.FORMID_CONNECT",[&](){return 902;});

});}

void ConnectForm::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_f52c904bea265acc_slow(flag);}

bool& ConnectForm::close_(){ConnectForm::ensure_initialized();return ConnectForm_close__storage;}

pls::cs::Ref<ConnectForm>& ConnectForm::form_(){ConnectForm::ensure_initialized();return ConnectForm_form__storage;}

pls::cs::Int32& ConnectForm::FORMID_CONNECT(){ConnectForm::ensure_initialized();return ConnectForm_FORMID_CONNECT_storage;}

pls::cs::Int32& ConnectForm::frame_(){ConnectForm::ensure_initialized();return ConnectForm_frame__storage;}

pls::cs::Ref<kairo::unity::ui::ResourceManager>& ConnectForm::resConnect_(){ConnectForm::ensure_initialized();return ConnectForm_resConnect__storage;}

void ConnectForm::create_init(pls::cs::Ref<ConnectForm> self) {
ConnectForm::ensure_initialized();
MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), ConnectForm::FORMID_CONNECT());
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.ConnectForm.#ctor",game);
{

}

}

// M:system.form.ConnectForm.#ctor
pls::cs::Ref<ConnectForm> ConnectForm::create() {
ConnectForm::ensure_initialized();
 auto self = pls::cs::make_ref<ConnectForm>(); ConnectForm::create_init(self); return self; 
}

// M:system.form.ConnectForm.ToString
pls::cs::String ConnectForm::ToString() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.ConnectForm.ToString",game);
{
return literal(u"ConnectForm");
}
}

// M:system.form.ConnectForm.Init
bool ConnectForm::Init() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.ConnectForm.Init",game);
{
MyFormBase::Init();
apdat_ = main::AppData::GetInstance();
canvas_ = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Canvas::GetInstance();});
formMan_ = pls::game::form::FormManager::GetInstance();
if (is_null(ConnectForm::resConnect_())) {
ConnectForm::resConnect_() = require(kairo::unity::ui::ResourceManager::create(pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}, pls::cs::String{}))->SetRecordNameBits(0);
{ auto cs_receiver = ConnectForm::resConnect_(); ByteArray cs_arg0 = pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::Storage::Read(3, false, literal(u"connect.dat"));}); require(cs_receiver)->Load(cs_arg0, 3); }
}
ConnectForm::frame_() = 0;
ConnectForm::close_() = false;
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = pls::cs::String(u""); pls::cs::String cs_arg1 = pls::cs::String(u""); this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{}); }());});
return true;
}
}

// M:system.form.ConnectForm.Update
bool ConnectForm::Update() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.ConnectForm.Update",game);
{
MyFormBase::Update();
ConnectForm::frame_() = ((ConnectForm::frame_() + 1) % 2147483647 /* Int32.MaxValue */);
if (ConnectForm::close_()) {
return pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
}
try {
java::lang::JThread::Yield();
java::lang::JThread::Sleep(50ll);
} catch(const pls::cs::Exception& cs_caught_234) {pls::cs::capture_exception(cs_caught_234);
{

}}
return true;
}
}

// M:system.form.ConnectForm.Draw(kairo.unity.ui.Graphics)
void ConnectForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.ConnectForm.Draw(kairo.unity.ui.Graphics)",game);
{
MyFormBase::Draw(g);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Int32 cs_arg0 = (require(view_)->GetGameWidth() - 240) / 2; pls::cs::Int32 cs_arg1 = (require(view_)->GetGameHeight() - 240) / 2 + 13; require(g)->SetOrigin(cs_arg0, cs_arg1); }());});
pls::cs::run_finally([&]() {{
_draw(g);
}}, [&]() {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetOrigin(0, 0);});
});
}
}

// M:system.form.ConnectForm._draw(kairo.unity.ui.Graphics)
void ConnectForm::_draw(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.ConnectForm._draw(kairo.unity.ui.Graphics)",game);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Log::Info(literal(u"ConnectForm._draw()"), pls::cs::Ref<pls::cs::ExceptionObject>{});});
}
}

// M:system.form.ConnectForm.DrawConnect(kairo.unity.ui.Graphics)
void ConnectForm::DrawConnect(pls::cs::Ref<pls::kairo::Graphics> g) {
ConnectForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.ConnectForm.DrawConnect(kairo.unity.ui.Graphics)",game);
{
try {
if (is_null(ConnectForm::form_())) {
ConnectForm::form_() = ConnectForm::create();
require(ConnectForm::form_())->Init();
}
require(ConnectForm::form_())->Draw(g);
require(ConnectForm::form_())->Update();
} catch(const pls::cs::Exception& cs_caught_233) {pls::cs::capture_exception(cs_caught_233);
{

}}
}

}

// M:system.form.ConnectForm.Resume
bool ConnectForm::Resume() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.ConnectForm.Resume",game);
{
return MyFormBase::Resume();
}
}

// M:system.form.ConnectForm.Finish
bool ConnectForm::Finish() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.ConnectForm.Finish",game);
{
return MyFormBase::Finish();
}
}

// M:system.form.ConnectForm.GetHashCode
std::int32_t ConnectForm::GetHashCode() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.ConnectForm.GetHashCode",game);
{
return pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&](){auto cs_receiver=pls::cs::box(pls::cs::static_pointer_cast<MyFormBase>(this));return require(cs_receiver)->pls::cs::Object::GetHashCode();}());});
}
}
} // namespace system::form
}
