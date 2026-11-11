#pragma once
#include "semantic_runtime.hpp"
namespace pls::cs {
class RegexGroup:public Object {
    String value_=String(u"");std::int32_t index_{},length_{};bool success_{};
public:
    RegexGroup()=default;
    RegexGroup(String value,std::int32_t index,std::int32_t length,bool success):value_(std::move(value)),index_(index),length_(length),success_(success){}
    String get_Value()const{return value_;}
    std::int32_t get_Index()const{return index_;}
    std::int32_t get_Length()const{return length_;}
    bool get_Success()const{return success_;}
    void trace_edges(const EdgeVisitor&v)const override{trace_value(value_,v);}
    void release_edges()override{release_value(value_);}
};
class RegexGroupCollection:public Object {
    std::vector<Ref<RegexGroup>> groups_{};
public:
    explicit RegexGroupCollection(std::vector<Ref<RegexGroup>> groups):groups_(std::move(groups)){}
    std::int32_t get_Count()const{return std::int32_t(groups_.size());}
    Ref<RegexGroup>get_Item(std::int32_t index)const;
    void trace_edges(const EdgeVisitor&v)const override{for(auto&g:groups_)trace_value(g,v);}
    void release_edges()override{groups_.clear();}
};
class RegexMatch:public RegexGroup {
    Ref<RegexGroupCollection> groups_{};
public:
    RegexMatch(String value,std::int32_t index,std::int32_t length,bool success,Ref<RegexGroupCollection> groups):RegexGroup(std::move(value),index,length,success),groups_(std::move(groups)){}
    Ref<RegexGroupCollection>get_Groups()const{return groups_;}
    void trace_edges(const EdgeVisitor&v)const override{RegexGroup::trace_edges(v);trace_value(groups_,v);}
    void release_edges()override{RegexGroup::release_edges();clear_ref(groups_);}
};
class RegexMatchCollection:public Object {
    std::vector<Ref<RegexMatch>> matches_{};
public:
    explicit RegexMatchCollection(std::vector<Ref<RegexMatch>> matches):matches_(std::move(matches)){}
    std::int32_t get_Count()const{return std::int32_t(matches_.size());}
    Ref<RegexMatch>get_Item(std::int32_t index)const;
    void trace_edges(const EdgeVisitor&v)const override{for(auto&m:matches_)trace_value(m,v);}
    void release_edges()override{matches_.clear();}
};
// Measured default-options subset: UTF-16 literals/ranges, groups, alternation,
// greedy quantifiers, anchors, dot and Unicode whitespace. No culture folding.
class RuntimeRegex {
public:
    static Ref<RegexMatchCollection>Matches(const String&input,const String&pattern);
    static Ref<RegexMatch>Match(const String&input,const String&pattern);
    static bool IsMatch(const String&input,const String&pattern);
    static String Replace(const String&input,const String&pattern,const String&replacement);
};
}
