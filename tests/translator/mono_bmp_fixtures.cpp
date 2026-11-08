#include "managed_collation.hpp"
#include <iostream>
#include <string>
using namespace pls::cs;
namespace {
template<class F>void row(const std::string&id,F&&map){constexpr char hex[]="0123456789abcdef";std::string result;result.reserve(65536*4);for(int cp=0;cp<65536;++cp){const auto value=static_cast<std::uint16_t>(map(static_cast<char16_t>(cp)));for(int shift=12;shift>=0;shift-=4)result.push_back(hex[(value>>shift)&15]);}std::cout<<id<<'\t'<<result<<'\n';}
}
int main(){install_mono_collation_character_data();const CollationCulture cultures[]={{127,{},"",false},{1033,{9},"en",false},{1055,{31},"tr",true}};for(int c=0;c<3;++c){set_current_collation_culture(cultures[c]);row("c"+std::to_string(c)+"lower",culture_char_to_lower);row("c"+std::to_string(c)+"upper",culture_char_to_upper);}row("invlower",invariant_char_to_lower);row("invupper",invariant_char_to_upper);std::string flags;flags.reserve(65536);for(int cp=0;cp<65536;++cp)flags.push_back(mono_character_is_unassigned(static_cast<char16_t>(cp))?'1':'0');std::cout<<"unassigned\t"<<flags<<'\n';}
