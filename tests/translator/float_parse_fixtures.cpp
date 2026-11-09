#include "managed_string_ops.hpp"
#include <iostream>
#include <iomanip>
using namespace pls::cs;
#include "float_values.inc"
void row(const std::string& key,const String& value){std::cout<<key<<'\t';try{auto bits=bit_copy<std::uint32_t>(single_parse_legacy(value));std::cout<<std::hex<<std::uppercase<<std::setfill('0')<<std::setw(8)<<bits<<std::dec;}catch(const Exception& e){std::cout<<e.type_name();}std::cout<<'\n';}
int main(){for(const std::string culture:{"","en-US"}){auto values=own_values();for(std::size_t i=0;i<values.size();++i)row(culture+"edge-"+std::to_string(i),values[i]);for(int i=0;i<65536;++i)row(culture+"white-"+std::to_string(i),String(std::u16string{char16_t(i),u'1',char16_t(i)}));}}
