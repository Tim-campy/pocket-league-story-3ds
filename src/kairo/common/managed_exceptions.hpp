#pragma once
#include "semantic_runtime.hpp"
#include "managed_type_init.hpp"

namespace pls::cs {
class ExceptionObject;
using ExceptionRef=Ref<ExceptionObject>;
[[noreturn]] void throw_exception(const ExceptionRef& exception);

// Managed exception identity/data live separately from C++ unwinding objects.
// Native exception copies share ExceptionIdentity; rethrowing cannot manufacture
// a new managed reference while an earlier catch still retains that exception.
class ExceptionObject : public Object {
    std::string full_name_="System.Exception",builtin_base_="System.Exception";
    String message_;
    ExceptionRef inner_{};
    std::exception_ptr native_;
    std::shared_ptr<ExceptionIdentity> identity_;
    friend ExceptionRef capture_exception(const Exception&,std::exception_ptr);
    friend void throw_exception(const ExceptionRef&);
public:
    ExceptionObject()=default;
    explicit ExceptionObject(std::string name):full_name_(std::move(name)),builtin_base_(full_name_){}
    std::string managed_type_name()const override{return full_name_;}
    const std::string& builtin_exception_base()const noexcept{return builtin_base_;}
    void source_ctor(const std::string& base);
    void source_ctor(const std::string& base,String message,ExceptionRef inner={});
    String get_Message()const;
    ExceptionRef get_InnerException()const{return inner_;}
    ExceptionRef GetBaseException();
    String source_ToString();
    String ToString()override{return source_ToString();}
    void trace_edges(const EdgeVisitor& visitor)const override;
    void release_edges()override;
};
ExceptionRef make_exception(const std::string& name);
ExceptionRef make_exception(const std::string& name,String message,ExceptionRef inner={});
ExceptionRef capture_exception(const Exception& exception,std::exception_ptr native=std::current_exception());
bool exception_is(const ExceptionRef& exception,const std::string& builtin_or_exact_type);
} // namespace pls::cs
