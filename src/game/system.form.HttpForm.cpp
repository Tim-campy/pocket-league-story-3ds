// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "PlsPortGeneratedBootstrap.Source.hpp"
#include "form.MyFormBase.hpp"
#include "form.SubForm.hpp"
#include "generated/kairo.common.cfg.Config.hpp"
#include "generated/kairo.unity.util.Log.hpp"
#include "java.lang.JRunnable.hpp"
#include "java.lang.JThread.hpp"
#include "kairo.unity.io.Http.hpp"
#include "kairo.unity.surface.SurfaceBase.hpp"
#include "kairo.unity.ui.Matrix.hpp"
#include "kairo.unity.ui.ResourceManager.hpp"
#include "surface.GameView.hpp"
#include "system.form.HttpForm.ResultData.hpp"
#include "system.form.HttpForm.hpp"

namespace kl_cfg = pls::generated::kairo::common::cfg;
namespace kl_util = pls::generated::kairo::unity::util;

namespace pls::game {
namespace system::form {

void HttpForm::trace_edges(const pls::cs::EdgeVisitor&visitor)const {MyFormBase::trace_edges(visitor);pls::cs::trace_value(connectMethod_,visitor);pls::cs::trace_value(resultMethod_,visitor);pls::cs::trace_value(thread_,visitor);pls::cs::trace_value(resultData_,visitor);pls::cs::trace_value(commonData_,visitor);}

static pls::cs::Int32 HttpForm_THSTATE_FAILURE_storage{};

static pls::cs::Int32 HttpForm_THSTATE_NONE_storage{};

static pls::cs::Int32 HttpForm_THSTATE_RUN_storage{};

static pls::cs::Int32 HttpForm_THSTATE_SUCCESS_storage{};

static PLS_NOINLINE void cs_init_5dc998c2cffb18c8_slow(pls::cs::TypeInitFlag& flag){static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor){pls::cs::trace_value(HttpForm_THSTATE_FAILURE_storage,visitor);pls::cs::trace_value(HttpForm_THSTATE_NONE_storage,visitor);pls::cs::trace_value(HttpForm_THSTATE_RUN_storage,visitor);pls::cs::trace_value(HttpForm_THSTATE_SUCCESS_storage,visitor);});static pls::cs::TypeInitState state;state.run("system.form.HttpForm",flag,[](){
HttpForm_THSTATE_RUN_storage = pls::cs::evaluate_type_initializer_field("F:system.form.HttpForm.THSTATE_RUN",[&](){return 1;});
HttpForm_THSTATE_SUCCESS_storage = pls::cs::evaluate_type_initializer_field("F:system.form.HttpForm.THSTATE_SUCCESS",[&](){return 2;});
HttpForm_THSTATE_FAILURE_storage = pls::cs::evaluate_type_initializer_field("F:system.form.HttpForm.THSTATE_FAILURE",[&](){return 3;});

});}

void HttpForm::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_5dc998c2cffb18c8_slow(flag);}

pls::cs::Int32& HttpForm::THSTATE_FAILURE(){HttpForm::ensure_initialized();return HttpForm_THSTATE_FAILURE_storage;}

pls::cs::Int32& HttpForm::THSTATE_NONE(){HttpForm::ensure_initialized();return HttpForm_THSTATE_NONE_storage;}

pls::cs::Int32& HttpForm::THSTATE_RUN(){HttpForm::ensure_initialized();return HttpForm_THSTATE_RUN_storage;}

pls::cs::Int32& HttpForm::THSTATE_SUCCESS(){HttpForm::ensure_initialized();return HttpForm_THSTATE_SUCCESS_storage;}

void HttpForm::create_init(pls::cs::Ref<HttpForm> self,pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)> connectMethod,pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)> resultMethod) {
HttpForm::ensure_initialized();
self->commonData_ = pls::cs::Dictionary<pls::cs::String,pls::cs::Ref<pls::cs::Object>>::make();
MyFormBase::create_init(pls::cs::static_pointer_cast<MyFormBase>(self), 909);
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.#ctor(system.form.HttpForm.HttpMethod,system.form.HttpForm.HttpMethod)",game);
{
self->connectMethod_ = connectMethod;
self->resultMethod_ = resultMethod;
HttpForm::set_ProcessError(self,true);
}

}

// M:system.form.HttpForm.#ctor(system.form.HttpForm.HttpMethod,system.form.HttpForm.HttpMethod)
pls::cs::Ref<HttpForm> HttpForm::create(pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)> connectMethod,pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)> resultMethod) {
HttpForm::ensure_initialized();
 auto self = pls::cs::make_ref<HttpForm>(); HttpForm::create_init(self,connectMethod,resultMethod); return self; 
}

// M:system.form.HttpForm.ToString
pls::cs::String HttpForm::ToString() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.ToString",game);
{
return literal(u"HttpForm");
}
}

// M:system.form.HttpForm.get_ProcessError
bool HttpForm::get_ProcessError(pls::cs::Ref<HttpForm> self) {
require(self);
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.get_ProcessError",game);
{return self->m_ProcessError_k__BackingField;}

}

// M:system.form.HttpForm.set_ProcessError(System.Boolean)
void HttpForm::set_ProcessError(pls::cs::Ref<HttpForm> self,bool value) {
require(self);
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.set_ProcessError(System.Boolean)",game);
{self->m_ProcessError_k__BackingField=value;}

}

// M:system.form.HttpForm.get_IsCancelable
bool HttpForm::get_IsCancelable(pls::cs::Ref<HttpForm> self) {
require(self);
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.get_IsCancelable",game);
{return self->m_IsCancelable_k__BackingField;}

}

// M:system.form.HttpForm.set_IsCancelable(System.Boolean)
void HttpForm::set_IsCancelable(pls::cs::Ref<HttpForm> self,bool value) {
require(self);
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.set_IsCancelable(System.Boolean)",game);
{self->m_IsCancelable_k__BackingField=value;}

}

// M:system.form.HttpForm.SetConnectMethod(system.form.HttpForm.HttpMethod)
void HttpForm::SetConnectMethod(pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)> method) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.SetConnectMethod(system.form.HttpForm.HttpMethod)",game);
{
connectMethod_ = method;
}
}

// M:system.form.HttpForm.SetResultMethod(system.form.HttpForm.HttpMethod)
void HttpForm::SetResultMethod(pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)> method) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.SetResultMethod(system.form.HttpForm.HttpMethod)",game);
{
resultMethod_ = method;
}
}

// M:system.form.HttpForm.Init
bool HttpForm::Init() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.Init",game);
{
MyFormBase::Init();
threadState_ = HttpForm::THSTATE_RUN();
resultData_ = HttpForm_ResultData::create();
thread_ = java::lang::JThread::create(this);
require(thread_)->Start();
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::String cs_arg0 = pls::cs::String(u""); pls::cs::String cs_arg1 = pls::cs::String(u""); this->SetSoftLabel(cs_arg0, cs_arg1, pls::cs::String{}, pls::cs::String{}); }());});
return true;
}
}

// M:system.form.HttpForm.Draw(kairo.unity.ui.Graphics)
void HttpForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.Draw(kairo.unity.ui.Graphics)",game);
{
MyFormBase::Draw(g);
if (threadState_ != HttpForm::THSTATE_NONE()) {
HttpForm::DrawConnect(g);
}
}
}

// M:system.form.HttpForm.DrawConnect(kairo.unity.ui.Graphics)
void HttpForm::DrawConnect(pls::cs::Ref<pls::kairo::Graphics> g) {
HttpForm::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.DrawConnect(kairo.unity.ui.Graphics)",game);
{
try {
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PushOrigin(0, 0, false);});
pls::cs::Ref<pls::game::surface::GameView> instance = pls::game::surface::GameView::GetInstance();
pls::cs::Int32 num = require(instance)->GetGameWidth() / 2;
pls::cs::Int32 num2 = require(instance)->GetGameHeight() / 2;
pls::cs::Int32 totalFrames = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();}))->GetTotalFrames();});
pls::cs::Ref<kairo::unity::ui::ResourceManager> resource = pls::diagnostic::api_call([&]() -> decltype(auto) {return PlsPortGeneratedBootstrap::Source::GetApplicationResource(require(pls::diagnostic::api_call([&]() -> decltype(auto) {return pls::kairo::IApplication::GetCurrentApp();})));});
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kairo::unity::ui::Matrix> cs_arg0 = kairo::unity::ui::Matrix::ScaleTemporary(0.5f, 0.5f, 0.0f, 0.0f); PlsPortGeneratedBootstrap::Source::PushGraphicsMatrix(require(g), cs_arg0); }());});
require(resource)->DrawSeb(g, num, num2, 1);
pls::diagnostic::api_call([&]() -> decltype(auto) {return ([&]() -> void { pls::cs::Ref<kairo::unity::ui::Matrix> cs_arg0 = kairo::unity::ui::Matrix::RotateTemporary(totalFrames / 2 * 30, 0.0f, 0.0f); PlsPortGeneratedBootstrap::Source::PushGraphicsMatrix(require(g), cs_arg0); }());});
require(resource)->DrawSeb(g, num, num2, 2);
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopMatrix();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopMatrix();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PushFont(10);});
pls::cs::String text = literal(u"Transmission");
pls::cs::Int32 num3 = pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->StringWidth(text);});
for (pls::cs::Int32 i = 0; i < totalFrames / 4 % 4; ++i) {
text = pls::cs::String::concat(text,literal(u"."));
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->SetColor(255, 255, 255);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->DrawString(text, num - num3 / 2 - 7, num2 - 42);});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopFont();});
pls::diagnostic::api_call([&]() -> decltype(auto) {return require(g)->PopOrigin();});
} catch(const pls::cs::Exception& cs_caught_264) {pls::cs::capture_exception(cs_caught_264);
{

}}
}

}

// M:system.form.HttpForm.Update
bool HttpForm::Update() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.Update",game);
{
kl_cfg::Config::ensure_initialized();

MyFormBase::Update();
if (threadState_ != HttpForm::THSTATE_NONE()) {
if (threadState_ == HttpForm::THSTATE_RUN()) {
return true;
}
if (threadState_ == HttpForm::THSTATE_SUCCESS()) {
threadState_ = HttpForm::THSTATE_NONE();
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
if ([&](){auto cs_left=resultMethod_;auto cs_right=pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)>{};return cs_left!=cs_right;}()) {
{auto cs_delegate=resultMethod_;auto cs_arg0=this;auto cs_arg1=resultData_;cs_delegate(cs_arg0,cs_arg1);}
}
return true;
}
if (threadState_ == HttpForm::THSTATE_FAILURE()) {
threadState_ = HttpForm::THSTATE_NONE();
if (kl_cfg::Config::PRINT()) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Log::Info(HttpForm_ResultData::get_Error(resultData_), pls::cs::Ref<pls::cs::ExceptionObject>{});});
}
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Pop();});
if (HttpForm::get_ProcessError(this)) {
pls::diagnostic::api_call([&]() -> decltype(auto) {return static_cast<pls::cs::Ref<pls::kairo::FormBase>>(this)->Push(pls::game::form::SubForm::MakeDialog(HttpForm_ResultData::get_Error(resultData_)));});
} else if ([&](){auto cs_left=resultMethod_;auto cs_right=pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)>{};return cs_left!=cs_right;}()) {
{auto cs_delegate=resultMethod_;auto cs_arg0=this;auto cs_arg1=resultData_;cs_delegate(cs_arg0,cs_arg1);}
}
return true;
}
}
return true;

}
}

// M:system.form.HttpForm.Finish
bool HttpForm::Finish() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.Finish",game);
{
MyFormBase::Finish();
return true;
}
}

// M:system.form.HttpForm.CheckMainWindow
bool HttpForm::CheckMainWindow() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.CheckMainWindow",game);
{
return false;
}
}

// M:system.form.HttpForm.Run
void HttpForm::Run() {PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.HttpForm.Run",game);
{
pls::cs::run_finally([&]() {try {
if ([&](){auto cs_left=connectMethod_;auto cs_right=pls::cs::Delegate<void(pls::cs::Ref<HttpForm>,pls::cs::Ref<HttpForm_ResultData>)>{};return cs_left!=cs_right;}()) {
{auto cs_delegate=connectMethod_;auto cs_arg0=this;auto cs_arg1=resultData_;cs_delegate(cs_arg0,cs_arg1);}
}
HttpForm_ResultData::set_Succeed(resultData_,true);
threadState_ = HttpForm::THSTATE_SUCCESS();
} catch(const pls::cs::Exception& cs_caught_265) {auto ex=pls::cs::capture_exception(cs_caught_265);
{
pls::diagnostic::api_call([&]() -> decltype(auto) {return kl_util::Log::Info(pls::cs::String::concat(pls::cs::String(u""), object_string(pls::cs::box(ex))), pls::cs::Ref<pls::cs::ExceptionObject>{});});
{ auto cs_receiver = resultData_; auto cs_rhs = kairo::unity::io::Http::PopErrorText(); auto cs_value = cs_rhs; HttpForm_ResultData::set_Error(cs_receiver,cs_value); }
HttpForm_ResultData::set_Exception(resultData_,ex);
HttpForm_ResultData::set_Succeed(resultData_,false);
threadState_ = HttpForm::THSTATE_FAILURE();
}}}, [&]() {
thread_ = pls::cs::Ref<java::lang::JThread>{};
});
}
}
} // namespace system::form
}
