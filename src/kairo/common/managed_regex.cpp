#include "managed_regex.hpp"
#include <regex>
#include <deque>
namespace pls::cs {
namespace {
std::wstring widen(const String&s){std::wstring r;for(auto c:s.code_units())r.push_back(wchar_t(c));return r;}
std::wstring whitespace(){
    std::wstring r;for(wchar_t c:{wchar_t(9),wchar_t(10),wchar_t(11),wchar_t(12),wchar_t(13),wchar_t(0x85),wchar_t(0xa0),wchar_t(0x1680)})r+=c;
    r+=L"\x2000-\x200a\x2028\x2029\x202f\x205f\x3000 ";if(runtime_profile==RuntimeProfile::UnityMono265)r+=wchar_t(0x200b);return r;
}
std::wstring adapt(const String&pattern){
    auto text=widen(pattern);std::wstring out;bool bracket=false;
    for(std::size_t i=0;i<text.size();++i){auto c=text[i];
        if(c==L'\\'){
            if(++i==text.size())throw ArgumentException("Trailing regex escape");auto escaped=text[i];
            if(escaped==L's'){if(!bracket)out+=L'[';out+=whitespace();if(!bracket)out+=L']';}
            else if(escaped==L'S'){if(bracket)throw NotSupportedException("Nested Unicode inverse whitespace class");out+=L"[^"+whitespace()+L"]";}
            else if(escaped==L'w'||escaped==L'W'||escaped==L'd'||escaped==L'D'||escaped==L'p'||escaped==L'P'||escaped==L'b'||escaped==L'B')throw NotSupportedException("Regex Unicode category/word-boundary subset has not been implemented");
            else{out+=L'\\';out+=escaped;}continue;
        }
        if(c==L'[')bracket=true;else if(c==L']')bracket=false;
        if(!bracket&&c==L'.')out+=L"[^\n]";
        else if(!bracket&&c==L'$')out+=L"(?=\n?$)";
        else out+=c;
    }
    return out;
}
std::shared_ptr<const std::wregex>compile(const String&pattern){
    if(pattern.is_null())throw ArgumentNullException();
    struct Entry {std::u16string pattern;RuntimeProfile profile;std::shared_ptr<const std::wregex> compiled;};
    static std::mutex mutex;static std::deque<Entry> cache;
    {std::lock_guard<std::mutex>lock(mutex);for(const auto&e:cache)if(e.profile==runtime_profile&&e.pattern==pattern.code_units())return e.compiled;}
    std::shared_ptr<const std::wregex> result;
    try{result=std::make_shared<const std::wregex>(adapt(pattern),std::regex_constants::ECMAScript);}
    catch(const std::regex_error&){throw ArgumentException("Invalid regular expression");}
    {std::lock_guard<std::mutex>lock(mutex);if(cache.size()==32)cache.pop_front();cache.push_back({pattern.code_units(),runtime_profile,result});}return result;
}
Ref<RegexMatch>empty_match(){std::vector<Ref<RegexGroup>>g{make_ref<RegexGroup>()};return make_ref<RegexMatch>(String(u""),0,0,false,make_ref<RegexGroupCollection>(std::move(g)));}
std::vector<Ref<RegexMatch>>find(const String&input,const String&pattern,bool first){
    if(input.is_null())throw ArgumentNullException();auto expression=compile(pattern);auto source=widen(input);
    std::vector<Ref<RegexMatch>>result;std::size_t start=0;
    while(start<=source.size()){
        std::match_results<std::wstring::const_iterator> found;auto flags=std::regex_constants::match_default;
        if(start)flags|=std::regex_constants::match_prev_avail;
        if(!std::regex_search(source.cbegin()+std::ptrdiff_t(start),source.cend(),found,*expression,flags))break;
        std::vector<Ref<RegexGroup>>groups;
        for(std::size_t i=0;i<found.size();++i){auto index=found[i].matched?std::int32_t(start+std::size_t(found.position(i))):0;auto length=std::int32_t(found.length(i));groups.push_back(make_ref<RegexGroup>(input.substring(index,length),index,length,found[i].matched));}
        auto index=groups[0]->get_Index(),length=groups[0]->get_Length();
        auto value=groups[0]->get_Value();auto group_collection=make_ref<RegexGroupCollection>(std::move(groups));
        result.push_back(make_ref<RegexMatch>(std::move(value),index,length,true,std::move(group_collection)));
        if(first)break;start=std::size_t(index)+std::size_t(length);if(!length)++start;
    }
    return result;
}
String expand(const String&replacement,const String&input,const Ref<RegexMatch>&match){
    std::u16string out;const auto&t=replacement.code_units();
    for(std::size_t i=0;i<t.size();++i){auto c=t[i];if(c!=u'$'||i+1==t.size()){out+=c;continue;}auto next=t[i+1];
        if(next==u'$'){out+=u'$';++i;}
        else if(next==u'&'){out+=match->get_Value().code_units();++i;}
        else if(next==u'`'){out+=input.substring(0,match->get_Index()).code_units();++i;}
        else if(next==u'\''){auto end=match->get_Index()+match->get_Length();out+=input.substring(end,input.length()-end).code_units();++i;}
        else if(next>=u'0'&&next<=u'9'){
            std::size_t end=i+1;std::uint64_t number=0;while(end<t.size()&&t[end]>=u'0'&&t[end]<=u'9'){number=number*10+std::uint64_t(t[end]-u'0');if(number>INT32_MAX)break;++end;}
            if(number<std::uint64_t(match->get_Groups()->get_Count())){out+=match->get_Groups()->get_Item(std::int32_t(number))->get_Value().code_units();i=end-1;}else out+=u'$';
        }else if(next==u'{')throw NotSupportedException("Named regex replacement not implemented");else out+=u'$';
    }return String(std::move(out));
}
}
Ref<RegexGroup> RegexGroupCollection::get_Item(std::int32_t index)const{if(index<0||std::size_t(index)>=groups_.size())return make_ref<RegexGroup>();return groups_[std::size_t(index)];}
Ref<RegexMatch> RegexMatchCollection::get_Item(std::int32_t index)const{if(index<0||std::size_t(index)>=matches_.size())throw ArgumentOutOfRangeException();return matches_[std::size_t(index)];}
Ref<RegexMatchCollection> RuntimeRegex::Matches(const String&i,const String&p){return make_ref<RegexMatchCollection>(find(i,p,false));}
Ref<RegexMatch> RuntimeRegex::Match(const String&i,const String&p){auto values=find(i,p,true);return values.empty()?empty_match():values[0];}
bool RuntimeRegex::IsMatch(const String&i,const String&p){return Match(i,p)->get_Success();}
String RuntimeRegex::Replace(const String&input,const String&pattern,const String&replacement){
    if(replacement.is_null())throw ArgumentNullException();auto matches=Matches(input,pattern);std::u16string out;std::int32_t start=0;
    for(std::int32_t i=0;i<matches->get_Count();++i){auto m=matches->get_Item(i);out+=input.substring(start,m->get_Index()-start).code_units();out+=expand(replacement,input,m).code_units();start=m->get_Index()+m->get_Length();}
    out+=input.substring(start,input.length()-start).code_units();return String(std::move(out));
}
}
