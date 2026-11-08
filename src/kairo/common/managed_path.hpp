#pragma once
#include "semantic_runtime.hpp"
namespace pls::cs {
enum class PathPlatform {Unix,Windows};
// Logical paths follow the target Mono platform, independently of filesystem
// APIs used to open the user's local asset catalog. Android uses Unix rules.
inline PathPlatform managed_path_platform=PathPlatform::Unix;
class RuntimePath {
    static void validate(const String&path){
        auto&text=path.code_units();
        if(runtime_profile==RuntimeProfile::UnityMono265)for(auto c:text){
            const bool invalid=managed_path_platform==PathPlatform::Windows?(c<32||c==u'"'||c==u'<'||c==u'>'||c==u'|'):c==0;
            if(invalid)throw ArgumentException("Illegal characters in path.");
        }
    }
    static std::size_t extension_index(const String&path){
        auto&text=path.code_units();
        auto dot=text.find_last_of(u'.');
        auto separator=text.find_last_of(managed_path_platform==PathPlatform::Windows?(runtime_profile==RuntimeProfile::UnityMono265?u"/\\:":u"/\\"):u"/");
        return separator!=std::u16string::npos&&dot<separator?std::u16string::npos:dot;
    }
public:
    static String GetExtension(const String&path){
        if(path.is_null())return {};validate(path);const auto&text=path.code_units();auto dot=extension_index(path);
        if(dot==std::u16string::npos||dot+1==text.size())return String(u"");
        return String(text.substr(dot));
    }
    static String ChangeExtension(const String&path,const String&extension){
        if(path.is_null())return {};validate(path);const auto&text=path.code_units();auto dot=extension_index(path);
        if(runtime_profile==RuntimeProfile::DotNet&&text.empty())return String(u"");
        if(extension.is_null())return dot==std::u16string::npos?path:String(text.substr(0,dot));
        if(extension.length()==0)return String(dot==std::u16string::npos?text+u'.':text.substr(0,dot+1));
        auto ext=text.empty()?String(u""):extension.at(0)==u'.'?extension:String::concat(u".",extension);
        return String::concat(dot==std::u16string::npos?path:String(text.substr(0,dot)),ext);
    }
    static String GetFileName(const String&path){
        if(path.is_null())return {};validate(path);const auto&text=path.code_units();
        const auto separator=text.find_last_of(managed_path_platform==PathPlatform::Windows?(runtime_profile==RuntimeProfile::UnityMono265?u"/\\:":u"/\\"):u"/");
        if(separator!=std::u16string::npos)return String(text.substr(separator+1));
        if(managed_path_platform==PathPlatform::Windows&&runtime_profile==RuntimeProfile::DotNet&&text.size()>=2&&text[1]==u':')return String(text.substr(2));
        return path;
    }
    static String GetFileNameWithoutExtension(const String&path){return ChangeExtension(GetFileName(path),{});}
};
}
