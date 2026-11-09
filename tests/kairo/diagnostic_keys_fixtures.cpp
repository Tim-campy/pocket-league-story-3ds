#include "../../src/main/diagnostic_keys.hpp"
#include <iostream>
int main(){
    int checks=0;auto check=[&](bool yes){++checks;if(!yes)throw std::runtime_error("Diagnostic key parser invariant failed");};
    check(pls::pc::popup_dismiss_key(2,false,false).empty());
    check(pls::pc::popup_dismiss_key(4,false,false)=="SELECT");
    check(pls::pc::popup_dismiss_key(4,false,true)=="SELECT");
    check(pls::pc::popup_dismiss_key(4,true,false)=="SOFT2");
    check(pls::pc::popup_dismiss_key(4,true,true).empty());
    check(pls::pc::parse_scripted_keys("").empty());
    auto keys=pls::pc::parse_scripted_keys("1:SELECT,2:UP,3:DOWN,4:LEFT,5:RIGHT,6:SOFT1,12000:SOFT2");
    check(keys.size()==7);check(keys.front().frame==1&&keys.front().name=="SELECT");check(keys.back().frame==12000&&keys.back().name=="SOFT2");
    for(const auto& invalid:{"0:DOWN","12001:DOWN","-1:DOWN","+1:DOWN","1:UNKNOWN","1:",":DOWN","1:DOWN,","1:DOWN,1:UP","2:UP,1:DOWN","1:DOWN:UP","1.0:DOWN","1:down"," 1:DOWN","9999999999999999999999:DOWN"}){
        bool failed=false;try{(void)pls::pc::parse_scripted_keys(invalid);}catch(const std::exception&){failed=true;}check(failed);
    }
    std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<checks<<"}\n";
}
