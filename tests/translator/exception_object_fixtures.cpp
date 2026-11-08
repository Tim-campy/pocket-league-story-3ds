#include "managed_exceptions.hpp"
#include "managed_thread.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
using namespace pls::cs;
class SourceWithCode:public ExceptionObject {
public:int Code{};
    SourceWithCode(String message,ExceptionRef inner,int code):Code(code){source_ctor("System.IO.IOException",std::move(message),std::move(inner));}
    std::string managed_type_name()const override{return "SourceWithCode";}
};
std::string encode(const String& value){if(value.is_null())return "null";std::ostringstream out;out<<std::hex<<std::setfill('0');for(char16_t c:value.code_units())if(c!=u'\r')out<<std::setw(4)<<static_cast<unsigned>(c);return out.str();}
const char* boolean(bool b){return b?"True":"False";}
int main(int argc,char**argv){
    runtime_profile=argc>1&&std::string(argv[1])=="dotnet"?RuntimeProfile::DotNet:RuntimeProfile::UnityMono265;
    std::vector<ExceptionRef> samples={make_exception("System.Exception"),make_exception("System.Exception",{}),make_exception("System.Exception",String(u"")),make_exception("System.Exception",String(u"own")),make_exception("System.SystemException"),make_exception("System.IO.IOException"),make_exception("System.IO.EndOfStreamException"),make_exception("System.InvalidOperationException"),make_exception("System.NullReferenceException"),make_exception("System.ArgumentException"),make_exception("System.ArgumentNullException"),make_exception("System.ArgumentOutOfRangeException"),make_exception("System.FormatException"),make_exception("System.ArrayTypeMismatchException")};
    for(const auto* name:{"System.ArithmeticException","System.DivideByZeroException","System.OverflowException","System.IndexOutOfRangeException","System.InvalidCastException","System.NotSupportedException","System.NotImplementedException","System.OutOfMemoryException","System.UnauthorizedAccessException","System.Collections.Generic.KeyNotFoundException","System.ObjectDisposedException","System.Threading.ThreadStateException","System.Threading.ThreadInterruptedException"})samples.push_back(make_exception(name));
    for(std::size_t i=0;i<samples.size();++i){auto e=samples[i];std::cout<<"sample"<<i<<"="<<e->managed_type_name()<<","<<encode(e->get_Message())<<","<<boolean(!e->get_InnerException())<<"\n";}
    std::cout<<"plainString="<<encode(make_exception("System.Exception",String(u"own"))->ToString())<<"\n";
    auto inner=make_exception("System.InvalidOperationException",String(u"inner"));auto outer=make_exception("System.Exception",String(u"outer"),inner);
    std::cout<<"innerIdentity="<<boolean(outer->get_InnerException()==inner)<<"\nbaseIdentity="<<boolean(outer->GetBaseException()==inner)<<"\ninnerString="<<encode(outer->ToString())<<"\n";
    auto custom=make_ref<SourceWithCode>(String(u"custom"),inner,37);ExceptionRef saved;
    try{throw_exception(custom);}catch(const IOException& raw){saved=capture_exception(raw);auto derived=std::dynamic_pointer_cast<SourceWithCode>(saved);std::cout<<"custom="<<boolean(saved==custom)<<","<<derived->Code<<","<<saved->managed_type_name()<<"\n";}
    try{throw_exception(saved);}catch(const Exception& raw){auto e=capture_exception(raw);std::cout<<"rethrowRef="<<boolean(e==saved)<<","<<boolean(exception_is(e,"System.IO.IOException"))<<","<<boolean(exception_is(e,"System.SystemException"))<<","<<boolean(exception_is(e,"System.ArgumentException"))<<"\n";}
    try{throw_exception({});}catch(const Exception& raw){std::cout<<"throwNull="<<capture_exception(raw)->managed_type_name()<<"\n";}
    ExceptionRef native1,native2;
    try{Array<int>::make(0).at(1);}catch(const Exception& raw){native1=capture_exception(raw);try{throw;}catch(const Exception& next){native2=capture_exception(next);}}
    std::cout<<"nativeRethrow="<<boolean(native1==native2)<<","<<native1->managed_type_name()<<"\n";
    auto unicode=make_exception("System.Exception",String(std::u16string{char16_t(0xd800),0,u'x'}));try{throw_exception(unicode);}catch(const Exception& raw){auto e=capture_exception(raw);std::cout<<"unicode="<<encode(e->get_Message())<<","<<boolean(e==unicode)<<"\n";}
    auto thread_error=make_exception("System.Threading.ThreadStateException");try{throw_exception(thread_error);}catch(const SystemException& raw){auto object=capture_exception(raw);std::cout<<"threadType="<<boolean(dynamic_cast<const ThreadStateException*>(&raw)!=nullptr)<<","<<boolean(object==thread_error)<<"\n";}
}
