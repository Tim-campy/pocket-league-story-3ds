// Translated from the reconstructed C# (reference/, tag v1.0.0-csharp-reconstruction)
// by translator/Translator.cs on 2026-11-23; maintained by hand since then.
// Rules: docs/maintaining-game-code.md
#include "system.form.MatchForm.UserRecord.hpp"
namespace pls::game {
namespace system::form {

void MatchForm_UserRecord::trace_edges(const pls::cs::EdgeVisitor&visitor)const {pls::cs::Object::trace_edges(visitor);pls::cs::trace_value(innName_,visitor);pls::cs::trace_value(country_,visitor);pls::cs::trace_value(name_,visitor);pls::cs::trace_value(image_,visitor);}

static PLS_NOINLINE void cs_init_3855bfc5096e5e16_slow(pls::cs::TypeInitFlag& flag){static pls::cs::TypeInitState state;state.run("system.form.MatchForm.UserRecord",flag,[](){

});}

void MatchForm_UserRecord::ensure_initialized(){static pls::cs::TypeInitFlag flag;if(flag.ready())return;cs_init_3855bfc5096e5e16_slow(flag);}

void MatchForm_UserRecord::create_init(pls::cs::Ref<MatchForm_UserRecord> self) {
MatchForm_UserRecord::ensure_initialized();
PLS_METHOD_SCOPE("Assembly-CSharp","M:system.form.MatchForm.UserRecord.#ctor",game);
{}

}

// M:system.form.MatchForm.UserRecord.#ctor
pls::cs::Ref<MatchForm_UserRecord> MatchForm_UserRecord::create() {
MatchForm_UserRecord::ensure_initialized();
 auto self = pls::cs::make_ref<MatchForm_UserRecord>(); MatchForm_UserRecord::create_init(self); return self; 
}
} // namespace system::form
}
