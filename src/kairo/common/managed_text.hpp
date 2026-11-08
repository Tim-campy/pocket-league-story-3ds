#pragma once
#include "semantic_runtime.hpp"

namespace pls::cs {
class StringBuilder : public Object {
    std::u16string text_;
    mutable std::int32_t capacity_=16;
    mutable bool cached_=false,cached_same_=false;
    bool historical_=runtime_profile==RuntimeProfile::UnityMono265;
    std::vector<std::int32_t>chunk_offsets_{0};
    void grow(std::int64_t size){
        if(size>std::numeric_limits<std::int32_t>::max())throw OutOfMemoryException();
        if(size>capacity_){
            if(historical_){const auto base=cached_same_&&capacity_<16?16:capacity_;const auto doubled=static_cast<std::int64_t>(base)*2;capacity_=static_cast<std::int32_t>(std::min<std::int64_t>(std::numeric_limits<std::int32_t>::max(),std::max(size,doubled)));}
            else {const auto old_capacity=capacity_;const auto next_size=std::max<std::int64_t>(size-old_capacity,std::min(old_capacity,8000));chunk_offsets_.push_back(old_capacity);capacity_=static_cast<std::int32_t>(old_capacity+next_size);}
        }
        cached_=cached_same_=false;
    }
    template<class F>static auto allocate(F action)->decltype(action()){try{return action();}catch(const std::bad_alloc&){throw OutOfMemoryException();}}
public:
    StringBuilder(){if(historical_){capacity_=0;cached_=cached_same_=true;}}
    explicit StringBuilder(std::int32_t capacity){if(capacity<0)throw ArgumentOutOfRangeException();capacity_=capacity?capacity:16;}
    explicit StringBuilder(const String&value){if(!value.is_null())text_=value.code_units();if(historical_){capacity_=get_Length();cached_=cached_same_=true;}else capacity_=std::max<std::int32_t>(16,get_Length());}
    StringBuilder(const String&value,std::int32_t capacity):StringBuilder(capacity){if(!value.is_null()){text_=value.code_units();capacity_=std::max(capacity_,value.length());}}
    std::int32_t get_Length()const{return static_cast<std::int32_t>(text_.size());}
    void set_Length(std::int32_t size){
        if(size<0)throw ArgumentOutOfRangeException();if(size==get_Length())return;
        if(!historical_&&size<get_Length()&&size<chunk_offsets_.back()){
            const auto preserve=std::min<std::int64_t>(capacity_,std::max<std::int64_t>(static_cast<std::int64_t>(get_Length())*6/5,capacity_-chunk_offsets_.back()));
            while(chunk_offsets_.size()>1&&chunk_offsets_.back()>size)chunk_offsets_.pop_back();capacity_=static_cast<std::int32_t>(preserve);
        }
        grow(size);allocate([&]{text_.resize(static_cast<std::size_t>(size),char16_t(0));});
    }
    std::int32_t get_Capacity()const{return historical_&&capacity_==0?16:capacity_;}
    void set_Capacity(std::int32_t size){if(size<get_Length()){if(historical_)throw ArgumentException();throw ArgumentOutOfRangeException();}if(size<0)throw ArgumentOutOfRangeException();if(historical_)grow(size);else capacity_=size;}
    std::int32_t EnsureCapacity(std::int32_t capacity){if(capacity<0)throw ArgumentOutOfRangeException();if(capacity<=capacity_)return capacity_;if(historical_)grow(capacity);else capacity_=capacity;return capacity_;}
    char16_t get_Chars(std::int32_t index)const{if(index<0||index>=get_Length())throw IndexOutOfRangeException();return text_[static_cast<std::size_t>(index)];}
    void set_Chars(std::int32_t index,char16_t value){if(index<0||index>=get_Length()){if(historical_)throw IndexOutOfRangeException();throw ArgumentOutOfRangeException();}if(cached_)grow(get_Length());text_[static_cast<std::size_t>(index)]=value;}
    Ref<StringBuilder> Append(const String&value){if(!value.is_null()){
        if(historical_&&get_Length()==0&&value.length()>capacity_){text_=value.code_units();capacity_=value.length();cached_=cached_same_=true;}
        else{grow(static_cast<std::int64_t>(get_Length())+value.length());allocate([&]{text_+=value.code_units();});}
    }return std::static_pointer_cast<StringBuilder>(shared_from_this());}
    Ref<StringBuilder> Append(char16_t value){grow(static_cast<std::int64_t>(get_Length())+1);allocate([&]{text_.push_back(value);});return std::static_pointer_cast<StringBuilder>(shared_from_this());}
    Ref<StringBuilder> Append(char16_t value,std::int32_t repeat){if(repeat<0)throw ArgumentOutOfRangeException();grow(static_cast<std::int64_t>(get_Length())+repeat);allocate([&]{text_.append(static_cast<std::size_t>(repeat),value);});return std::static_pointer_cast<StringBuilder>(shared_from_this());}
    Ref<StringBuilder> Append(const String&value,std::int32_t start,std::int32_t count){
        if(historical_&&value.is_null()){if(start&&count)throw ArgumentNullException();return std::static_pointer_cast<StringBuilder>(shared_from_this());}
        if(start<0||count<0)throw ArgumentOutOfRangeException();
        if(value.is_null()){if(start||count)throw ArgumentNullException();return std::static_pointer_cast<StringBuilder>(shared_from_this());}
        if(static_cast<std::int64_t>(start)+count>value.length())throw ArgumentOutOfRangeException();return Append(value.substring(start,count));
    }
    String ToString()const{if(historical_&&!cached_&&!text_.empty()){cached_=true;if(get_Length()>=(capacity_>>1)){capacity_=get_Length();cached_same_=true;}}return String(text_);}
    String ToString(std::int32_t start,std::int32_t count)const{if(start<0||count<0||static_cast<std::int64_t>(start)+count>get_Length())throw ArgumentOutOfRangeException();return String(text_.substr(static_cast<std::size_t>(start),static_cast<std::size_t>(count)));}
};
} // namespace pls::cs
