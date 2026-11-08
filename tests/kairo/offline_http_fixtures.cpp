#include "offline_http.hpp"
#include <iostream>
using namespace pls::kairo;
int main(){unsigned int n=0;auto check=[&](bool value){if(!value)throw std::runtime_error("Offline WWW leaf assertion failed");++n;};
 for(bool post:{false,true}){
  auto value=post?pls::cs::make_ref<OfflineWebRequest>(pls::cs::String(u"https://synthetic.invalid/fixture"),pls::cs::Array<std::uint8_t>::from({0,1,255})):pls::cs::make_ref<OfflineWebRequest>(pls::cs::String(u"https://synthetic.invalid/fixture"));
  check(value->get_isDone());check(!value->get_error().is_null()&&value->get_error().length()>0);check(value->get_bytes().length()==0);check(!value->native_disposed());value->Dispose();value->Dispose();check(value->native_disposed());
 }
 check(native_install_referrer().is_null());check(native_install_referrer(pls::cs::String(u"synthetic-key")).is_null());
 std::cout<<"{\"assertions\":"<<n<<",\"transport_attempts\":0,\"success_response\":false,\"generated_HttpObject_executed\":false,\"game_boot\":false}\n";
}
