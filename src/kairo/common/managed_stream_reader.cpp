#include "managed_stream_reader.hpp"
#include <utility>

namespace pls::cs {
RuntimeStreamReader::RuntimeStreamReader(Ref<Stream> stream,Ref<RuntimeEncoding> encoding):stream_(std::move(stream)),encoding_(std::move(encoding)),kind_(EncodingKind::Utf8){
    if(!stream_)throw ArgumentNullException();if(!encoding_){if(runtime_profile==RuntimeProfile::UnityMono265)throw ArgumentNullException();encoding_=RuntimeEncoding::get_UTF8();}if(!stream_->get_CanRead())throw ArgumentException();
    switch(encoding_->kind()){
    case RuntimeEncoding::Kind::Utf8:kind_=EncodingKind::Utf8;original_preamble_={0xef,0xbb,0xbf};break;
    case RuntimeEncoding::Kind::Utf16LE:kind_=EncodingKind::Utf16LE;original_preamble_={0xff,0xfe};break;
    case RuntimeEncoding::Kind::Utf16BE:kind_=EncodingKind::Utf16BE;original_preamble_={0xfe,0xff};break;
    case RuntimeEncoding::Kind::Ascii:kind_=EncodingKind::Ascii;break;
    }
    preamble_check_=!original_preamble_.empty();input_=Array<std::uint8_t>::make(1024);
}
void RuntimeStreamReader::require_open()const{if(!stream_)throw ObjectDisposedException();}
std::size_t RuntimeStreamReader::detect(std::vector<std::uint8_t>& bytes){
    const bool mono=runtime_profile==RuntimeProfile::UnityMono265;
    if(mono){
        if(!checks_)return 0;checks_=false;
        if(bytes.size()>=original_preamble_.size() && !original_preamble_.empty() && std::equal(original_preamble_.begin(),original_preamble_.end(),bytes.begin()))return original_preamble_.size();
    }
    if(bytes.size()>=2 && bytes[0]==0xfe && bytes[1]==0xff){kind_=EncodingKind::Utf16BE;checks_=false;return 2;}
    if(bytes.size()>=3 && bytes[0]==0xef && bytes[1]==0xbb && bytes[2]==0xbf){kind_=EncodingKind::Utf8;checks_=false;return 3;}
    if(bytes.size()>=4 && bytes[0]==0 && bytes[1]==0 && bytes[2]==0xfe && bytes[3]==0xff){kind_=EncodingKind::Utf32BE;checks_=false;return 4;}
    if(bytes.size()>=2 && bytes[0]==0xff && bytes[1]==0xfe){
        if(bytes.size()>=4 && bytes[2]==0 && bytes[3]==0){kind_=EncodingKind::Utf32LE;checks_=false;return 4;}
        if(!mono || bytes.size()>=4 || (bytes.size()==3 && bytes[2]!=0)){kind_=EncodingKind::Utf16LE;checks_=false;return 2;}
    }
    if(!mono && bytes.size()>=2)checks_=bytes.size()==2;
    return 0;
}
std::u16string RuntimeStreamReader::decode(const std::vector<std::uint8_t>& bytes,bool eof){
    std::vector<std::uint8_t> data=std::move(pending_);pending_.clear();data.insert(data.end(),bytes.begin(),bytes.end());
    const bool mono=runtime_profile==RuntimeProfile::UnityMono265;
    if(kind_==EncodingKind::Ascii){std::u16string text;for(auto b:data)text.push_back(b<128?char16_t(b):u'?');return text;}
    if(kind_==EncodingKind::Utf8){
        std::size_t cut=data.size();
        if(!eof && !data.empty()){
            std::size_t start=data.size()-1;while(start>0 && (data[start]&0xc0)==0x80)--start;
            const auto lead=data[start];const int expected=lead>=0xc2&&lead<=0xdf?2:lead>=0xe0&&lead<=0xef?3:lead>=0xf0&&lead<=0xf4?4:0;
            bool prefix=expected>0 && data.size()-start<static_cast<std::size_t>(expected);
            for(std::size_t i=start+1;i<data.size();++i)if((data[i]&0xc0)!=0x80)prefix=false;
            if(!mono && prefix && data.size()>start+1){const auto b=data[start+1];if((lead==0xe0&&b<0xa0)||(lead==0xed&&b>0x9f)||(lead==0xf0&&b<0x90)||(lead==0xf4&&b>0x8f))prefix=false;}
            if(prefix)cut=start;
        }
        pending_.assign(data.begin()+static_cast<std::ptrdiff_t>(cut),data.end());
        std::string text;for(std::size_t i=0;i<cut;++i)text.push_back(static_cast<char>(data[i]));
        return String::from_utf8(text).code_units();
    }
    const bool utf32=kind_==EncodingKind::Utf32LE || kind_==EncodingKind::Utf32BE;
    const bool big=kind_==EncodingKind::Utf16BE || kind_==EncodingKind::Utf32BE;
    const std::size_t width=utf32?4:2;
    std::size_t cut=data.size()/width*width;
    if(!utf32 && !mono && !eof && cut>=2){const auto c=big?std::uint16_t((data[cut-2]<<8)|data[cut-1]):std::uint16_t(data[cut-2]|(data[cut-1]<<8));if(c>=0xd800 && c<=0xdbff)cut-=2;}
    pending_.assign(data.begin()+static_cast<std::ptrdiff_t>(cut),data.end());
    std::u16string text;
    for(std::size_t i=0;i<cut;i+=width){
        std::uint32_t value=0;for(std::size_t j=0;j<width;++j)value|=std::uint32_t(data[i+j])<<static_cast<unsigned>((big?width-1-j:j)*8);
        if(utf32){if(value>0x10ffff || (value>=0xd800&&value<=0xdfff))text.push_back(0xfffd);else if(value<=0xffff)text.push_back(static_cast<char16_t>(value));else{value-=0x10000;text.push_back(static_cast<char16_t>(0xd800+(value>>10)));text.push_back(static_cast<char16_t>(0xdc00+(value&1023)));}}
        else if(mono)text.push_back(static_cast<char16_t>(value));
        else if(value>=0xd800&&value<=0xdbff){
            if(i+2<cut){const auto low=big?std::uint16_t((data[i+2]<<8)|data[i+3]):std::uint16_t(data[i+2]|(data[i+3]<<8));if(low>=0xdc00&&low<=0xdfff){text.push_back(static_cast<char16_t>(value));text.push_back(static_cast<char16_t>(low));i+=2;continue;}}
            text.push_back(0xfffd);
        }else text.push_back(value>=0xdc00&&value<=0xdfff?char16_t(0xfffd):static_cast<char16_t>(value));
    }
    if(eof && !mono && !pending_.empty()){text.push_back(0xfffd);pending_.clear();}
    return text;
}
bool RuntimeStreamReader::fill(){
    require_open();position_=0;decoded_.clear();
    for(;;){
        gc_safepoint();const auto count=stream_->Read(input_,0,1024);if(count<0 || count>1024)throw IOException("Invalid Stream.Read result");
        if(count==0){if(runtime_profile!=RuntimeProfile::UnityMono265){if(!preamble_bytes_.empty()){auto bytes=std::move(preamble_bytes_);preamble_bytes_.clear();decoded_=decode(bytes,true);}else decoded_=decode({},true);}return !decoded_.empty();}
        last_read_full_=count==1024;
        std::vector<std::uint8_t> bytes;bytes.reserve(static_cast<std::size_t>(count));for(std::int32_t i=0;i<count;++i)bytes.push_back(input_[i]);
        if(runtime_profile!=RuntimeProfile::UnityMono265 && preamble_check_){
            preamble_bytes_.insert(preamble_bytes_.end(),bytes.begin(),bytes.end());
            const auto size=std::min(preamble_bytes_.size(),original_preamble_.size());
            const bool prefix=std::equal(preamble_bytes_.begin(),preamble_bytes_.begin()+static_cast<std::ptrdiff_t>(size),original_preamble_.begin());
            if(prefix && preamble_bytes_.size()<original_preamble_.size())continue;
            bytes=std::move(preamble_bytes_);preamble_bytes_.clear();preamble_check_=false;
            if(prefix){bytes.erase(bytes.begin(),bytes.begin()+static_cast<std::ptrdiff_t>(original_preamble_.size()));checks_=false;}
        }
        const auto skipped=checks_?detect(bytes):0;
        if(skipped)bytes.erase(bytes.begin(),bytes.begin()+static_cast<std::ptrdiff_t>(skipped));
        decoded_=decode(bytes,false);if(!decoded_.empty())return true;
    }
}
int RuntimeStreamReader::peek_char(){require_open();if(position_==decoded_.size() && !fill())return -1;return decoded_[position_];}
int RuntimeStreamReader::read_char(){const auto value=peek_char();if(value>=0)++position_;return value;}
String RuntimeStreamReader::ReadLine(){
    require_open();std::u16string result;int value=read_char();if(value<0)return String();
    while(value>=0){if(value=='\n')break;if(value=='\r'){if(peek_char()=='\n')read_char();break;}result.push_back(static_cast<char16_t>(value));value=read_char();}
    return String(std::move(result));
}
String RuntimeStreamReader::ReadToEnd(){
    require_open();std::u16string result;
    for(;;){
        if(position_<decoded_.size()){result.append(decoded_,position_,decoded_.size()-position_);position_=decoded_.size();}
        if(fill())continue;
        // The historical Read(char[]) call returns its partial character count
        // after an EOF reached following a full byte block. ReadToEnd calls it
        // once more, unlike the modern direct-buffer implementation.
        if(runtime_profile==RuntimeProfile::UnityMono265 && !result.empty() && last_read_full_ && fill())continue;
        break;
    }
    return String(std::move(result));
}
void RuntimeStreamReader::Close(){if(stream_)stream_->Close();clear_ref(stream_);clear_ref(encoding_);input_=Array<std::uint8_t>();pending_.clear();preamble_bytes_.clear();decoded_.clear();position_=0;}
void RuntimeStreamReader::trace_edges(const EdgeVisitor&visitor)const{trace_value(stream_,visitor);trace_value(encoding_,visitor);trace_value(input_,visitor);}
void RuntimeStreamReader::release_edges(){clear_ref(stream_);clear_ref(encoding_);input_=Array<std::uint8_t>();pending_.clear();preamble_bytes_.clear();decoded_.clear();}
} // namespace pls::cs
