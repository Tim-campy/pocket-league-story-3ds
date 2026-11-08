#include "../../src/kairo/platform/sdl/globalization.hpp"
#include <iostream>
#include <string>
using namespace pls;
namespace {
int assertions=0;
void check(bool value){++assertions;if(!value)throw cs::Exception("Globalization contract fixture failed");}
template<class E,class F>void throws(F&&body){bool caught=false;try{body();}catch(const E&){caught=true;}check(caught);}
}
int main(int argc,char**argv){
    if(argc>1 && std::string(argv[1])=="native-only"){
        throws<cs::NotSupportedException>([]{kairo::native_timezone_id();});
        throws<cs::NotSupportedException>([]{kairo::native_timezone_raw_offset(cs::String(u"x"));});
        throws<cs::NotSupportedException>([]{kairo::native_locale();});
        throws<cs::ArgumentException>([]{kairo::install_globalization_provider({});});
        cs::String requested;
        kairo::install_globalization_provider({[]{return cs::String(u"synthetic/default");},[&](const cs::String&id){requested=id;return 1234;},[]{return cs::Array<cs::String>::from({cs::String(u"synthetic"),cs::String(u"XY")});}});
        check(kairo::native_timezone_id()==cs::String(u"synthetic/default"));
        const cs::String embedded(u"a\0b",3);check(kairo::native_timezone_raw_offset(embedded)==1234 && requested==embedded);
        const auto locale=kairo::native_locale();check(locale.length()==2 && locale[0]==cs::String(u"synthetic") && locale[1]==cs::String(u"XY"));
        kairo::install_globalization_provider({[]{return cs::String(u"x");},[](const cs::String&){return 0;},[]{return cs::Array<cs::String>::make(1);}});
        throws<cs::InvalidOperationException>([]{kairo::native_locale();});
        kairo::install_globalization_provider({[]{return cs::String(u"x");},[](const cs::String&){return 0;},[]{return cs::Array<cs::String>::make(2);}});
        throws<cs::InvalidOperationException>([]{kairo::native_locale();});
        kairo::install_globalization_provider({[]()->cs::String{throw cs::SystemException();},[](const cs::String&){return 0;},[]{return cs::Array<cs::String>::from({cs::String(u""),cs::String(u"")});}});
        throws<cs::SystemException>([]{kairo::native_timezone_id();});
        sdl::install_globalization_backend();throws<cs::ArgumentNullException>([]{kairo::native_timezone_raw_offset(cs::String());});
        throws<cs::NotSupportedException>([]{kairo::native_timezone_raw_offset(cs::String(u"Asia/Tokyo"));});
        std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<assertions<<"}\n";return 0;
    }
    sdl::install_globalization_backend();
    if(argc>1 && std::string(argv[1])=="live"){
        auto locale=kairo::native_locale();auto id=kairo::native_timezone_id();
        std::cout<<"language\t"<<locale[0].utf8()<<'\n'<<"country\t"<<locale[1].utf8()<<'\n'<<"timezone_id\t"<<id.utf8()<<'\n'<<"raw_offset\t"<<kairo::native_timezone_raw_offset(id)<<'\n';return 0;
    }
    const char16_t*ids[]={u"UTC",u"GMT",u"Etc/UTC",u"Etc/GMT",u"GMT+9",u"GMT-9",u"GMT+09",u"GMT+0900",u"GMT+930",u"GMT+9:30",u"GMT-03:30",u"GMT+00:01",u"GMT-00:01",u"GMT+23:59",u"GMT+24:00",u"GMT+5:6",u"GMT+5:060",u"GMT+000",u"GMT+005",u"GMT-0000",u"GMT+2400",u"gmt+9",u"",u"not-a-real-zone"};
    for(std::size_t i=0;i<sizeof(ids)/sizeof(ids[0]);++i)std::cout<<"zone-"<<i<<'\t'<<kairo::native_timezone_raw_offset(cs::String(ids[i]))<<'\n';
    const char16_t*languages[]={u"he",u"iw",u"id",u"in",u"yi",u"ji",u"PT",u"zh",u"fil",u"",u"xx",u"En"};
    for(std::size_t i=0;i<sizeof(languages)/sizeof(languages[0]);++i)std::cout<<"language-"<<i<<'\t'<<kairo::java_legacy_language(cs::String(languages[i])).utf8()<<'\n';
}
