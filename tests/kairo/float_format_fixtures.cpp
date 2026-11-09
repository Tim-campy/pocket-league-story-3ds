#include "managed_float_format.hpp"
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
using namespace pls;
namespace pls::cs {String modern_number_probe(float,const FloatingNumberFormat&);String modern_number_probe(double,const FloatingNumberFormat&);}
int main(int argc,char**argv){
 if(argc!=3)return 2;
 cs::runtime_profile=std::string(argv[2])=="mono"?cs::RuntimeProfile::UnityMono265:cs::RuntimeProfile::DotNet;
 const bool probe=std::string(argv[2])=="dotnet-prototype";
 if(cs::runtime_profile==cs::RuntimeProfile::DotNet&&!probe){try{(void)cs::floating_to_string(1.0f);}catch(const cs::NotSupportedException&){std::cout<<"unsupported-modern-profile\n";return 0;}return 3;}
 std::ifstream input(argv[1]);std::vector<std::string>cases;for(std::string line;std::getline(input,line);)cases.push_back(line);
 for(int mode=0;mode<2;++mode){cs::FloatingNumberFormat format;
  if(mode==1){format.decimal_separator=cs::String(std::u16string{0x66b,0});format.positive_sign=cs::String(u"up");format.negative_sign=cs::String(u"dn");format.nan=cs::String(std::u16string{u'o',u'w',u'n',0xd800,0});format.positive_infinity=cs::String(u"own\u2603+");format.negative_infinity=cs::String(u"own\u2603-");}
  for(const auto&line:cases){const auto tab=line.find('\t');const auto bits=line.substr(tab+1);const auto value=std::stoull(bits,nullptr,16);
   cs::String text;
   if(line[0]=='S'){auto number=cs::bit_copy<float>(static_cast<std::uint32_t>(value));text=probe?cs::modern_number_probe(number,format):cs::floating_to_string(number,format);}
   else{auto number=cs::bit_copy<double>(static_cast<std::uint64_t>(value));text=probe?cs::modern_number_probe(number,format):cs::floating_to_string(number,format);}
   std::ostringstream hex;hex<<std::hex<<std::setfill('0');for(char16_t c:text.code_units())hex<<std::setw(4)<<static_cast<unsigned>(c);
   std::cout<<mode<<'|'<<line[0]<<'|'<<bits<<'|'<<hex.str()<<'\n';
  }
 }
}
