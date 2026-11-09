#pragma once
#include <algorithm>
#include <cstdint>
#include <stdexcept>
#include <string>
#include <vector>
namespace pls::pc {
inline constexpr std::uint64_t max_scripted_key_frame=12000;
struct ScriptedKey {std::uint64_t frame;std::string name;};
inline std::string popup_dismiss_key(std::int32_t form_id,bool has_right_label,bool only_unlabeled){
    if(form_id!=4||(has_right_label&&only_unlabeled))return {};
    return has_right_label?"SOFT2":"SELECT";
}
inline std::vector<ScriptedKey> parse_scripted_keys(const std::string& text){
    std::vector<ScriptedKey> result;if(text.empty())return result;
    std::size_t start=0;
    for(;;){
        auto end=text.find(',',start);auto token=text.substr(start,end==std::string::npos?end:end-start);auto colon=token.find(':');
        if(colon==std::string::npos||colon==0||colon+1==token.size())throw std::invalid_argument("Expected FRAME:KEY");
        auto digits=token.substr(0,colon),name=token.substr(colon+1);
        if(!std::all_of(digits.begin(),digits.end(),[](char c){return c>='0'&&c<='9';}))throw std::invalid_argument("Frame must be decimal digits");
        auto frame=std::stoull(digits);
        if(frame<1||frame>max_scripted_key_frame||(!result.empty()&&frame<=result.back().frame))throw std::invalid_argument("Frames must increase within1..12000");
        if(name!="SELECT"&&name!="UP"&&name!="DOWN"&&name!="LEFT"&&name!="RIGHT"&&name!="SOFT1"&&name!="SOFT2")throw std::invalid_argument("Unknown source Canvas key");
        result.push_back({frame,name});if(end==std::string::npos)break;start=end+1;
    }
    return result;
}
}
