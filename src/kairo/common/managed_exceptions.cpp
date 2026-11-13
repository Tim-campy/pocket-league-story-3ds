#include "managed_exceptions.hpp"
#include "managed_thread.hpp"
#include <unordered_map>

namespace pls::cs {
namespace {
String default_message(const std::string& name){
    if(runtime_profile==RuntimeProfile::UnityMono265){
        static const std::unordered_map<std::string,const char16_t*> historical={
            {"System.SystemException",u"A system exception has occurred."},
            {"System.IO.IOException",u"I/O Error"},
            {"System.IO.EndOfStreamException",u"Failed to read past end of stream."},
            {"System.InvalidOperationException",u"Operation is not valid due to the current state of the object"},
            {"System.NullReferenceException",u"A null value was found where an object instance was required."},
            {"System.ArgumentNullException",u"Argument cannot be null."},
            {"System.ArgumentOutOfRangeException",u"Argument is out of range."},
            {"System.FormatException",u"Invalid format."},
            {"System.ArrayTypeMismatchException",u"Source array type cannot be assigned to destination array type."},
            {"System.DivideByZeroException",u"Division by zero"},
            {"System.OverflowException",u"Number overflow."},
            {"System.IndexOutOfRangeException",u"Array index is out of range."},
            {"System.InvalidCastException",u"Cannot cast from source type to destination type."},
            {"System.NotSupportedException",u"Operation is not supported."},
            {"System.NotImplementedException",u"The requested feature is not implemented."},
            {"System.OutOfMemoryException",u"Out of memory."},
            {"System.UnauthorizedAccessException",u"Access to the requested resource is not authorized."},
            {"System.ObjectDisposedException",u"The object was used after being disposed."},
            {"System.Threading.ThreadStateException",u"Thread State Error"},
            {"System.Threading.ThreadInterruptedException",u"Thread interrupted"},
        };
        auto found=historical.find(name);if(found!=historical.end())return String(found->second);
    }
    static const std::unordered_map<std::string,const char16_t*> messages={
        {"System.SystemException",u"System error."},
        {"System.ArithmeticException",u"Overflow or underflow in the arithmetic operation."},
        {"System.DivideByZeroException",u"Attempted to divide by zero."},
        {"System.OverflowException",u"Arithmetic operation resulted in an overflow."},
        {"System.NullReferenceException",u"Object reference not set to an instance of an object."},
        {"System.IndexOutOfRangeException",u"Index was outside the bounds of the array."},
        {"System.InvalidCastException",u"Specified cast is not valid."},
        {"System.ArrayTypeMismatchException",u"Attempted to access an element as a type incompatible with the array."},
        {"System.InvalidOperationException",u"Operation is not valid due to the current state of the object."},
        {"System.NotSupportedException",u"Specified method is not supported."},
        {"System.NotImplementedException",u"The method or operation is not implemented."},
        {"System.ArgumentException",u"Value does not fall within the expected range."},
        {"System.ArgumentNullException",u"Value cannot be null."},
        {"System.ArgumentOutOfRangeException",u"Specified argument was out of the range of valid values."},
        {"System.FormatException",u"One of the identified items was in an invalid format."},
        {"System.OutOfMemoryException",u"Insufficient memory to continue the execution of the program."},
        {"System.UnauthorizedAccessException",u"Attempted to perform an unauthorized operation."},
        {"System.IO.IOException",u"I/O error occurred."},
        {"System.IO.EndOfStreamException",u"Attempted to read past the end of the stream."},
        {"System.Collections.Generic.KeyNotFoundException",u"The given key was not present in the dictionary."},
        {"System.ObjectDisposedException",u"Cannot access a disposed object."},
        {"System.Threading.ThreadStateException",u"Thread was in an invalid state for the operation being executed."},
        {"System.Threading.ThreadInterruptedException",u"Thread was interrupted from a waiting state."},
    };
    auto found=messages.find(name);return found==messages.end()?String():String(found->second);
}
std::string parent(const std::string& name){
    if(name=="System.UriFormatException")return "System.FormatException";
    if(name=="System.Exception")return {};
    if(name=="System.SystemException"||name=="System.TimeZoneNotFoundException"||name=="System.InvalidTimeZoneException")return "System.Exception";
    if(name=="System.ArgumentNullException"||name=="System.ArgumentOutOfRangeException")return "System.ArgumentException";
    if(name=="System.DivideByZeroException"||name=="System.OverflowException")return "System.ArithmeticException";
    if(name=="System.ObjectDisposedException")return "System.InvalidOperationException";
    if(name=="System.IO.EndOfStreamException")return "System.IO.IOException";
    return "System.SystemException";
}
template<class Native>class ManagedUnwind final:public Native {
    ExceptionRef object_;std::string name_;
#if PLS_TRACING_GC
    GcRootProvider roots_;
#endif
public:
    explicit ManagedUnwind(ExceptionRef object):Native(object->get_Message().utf8()),object_(std::move(object)),name_(object_->managed_type_name())
#if PLS_TRACING_GC
        ,roots_([this](const EdgeVisitor&visitor){trace_value(object_,visitor);})
#endif
    {
        this->identity_token()->managed_view=object_;
    }
#if PLS_TRACING_GC
    ManagedUnwind(const ManagedUnwind&other):Native(other),object_(other.object_),name_(other.name_),
        roots_([this](const EdgeVisitor&visitor){trace_value(object_,visitor);}){}
#endif
    const char* type_name()const noexcept override{return name_.c_str();}
};
template<class Native>[[noreturn]]void unwind(const ExceptionRef& object){throw ManagedUnwind<Native>(object);}
}
void ExceptionObject::source_ctor(const std::string& base){builtin_base_=base;message_=default_message(base);clear_ref(inner_);native_={};}
void ExceptionObject::source_ctor(const std::string& base,String message,ExceptionRef inner){builtin_base_=base;message_=std::move(message);inner_=std::move(inner);native_={};}
String ExceptionObject::get_Message()const{
    if(!message_.is_null())return message_;
    return String::from_utf8("Exception of type '"+managed_type_name()+"' was thrown.");
}
ExceptionRef ExceptionObject::GetBaseException(){auto current=pls::cs::dynamic_pointer_cast<ExceptionObject>(shared_from_this());while(current->inner_)current=current->inner_;return current;}
String ExceptionObject::source_ToString(){
    auto value=String::from_utf8(managed_type_name());auto message=get_Message();
    if(!message.is_null()&&message.length()!=0)value=String::concat(String::concat(value,String(u": ")),message);
    if(inner_){
        value=String::concat(String::concat(value,String(runtime_profile==RuntimeProfile::UnityMono265?u" ---> ":u"\n ---> ")),inner_->ToString());
        value=String::concat(value,String(runtime_profile==RuntimeProfile::UnityMono265?u"\n  --- End of inner exception stack trace ---":u"\n   --- End of inner exception stack trace ---"));
    }
    return value;
}
void ExceptionObject::trace_edges(const EdgeVisitor& visitor)const{trace_value(message_,visitor);trace_value(inner_,visitor);}
void ExceptionObject::release_edges(){release_value(message_);clear_ref(inner_);native_={};pls::cs::clear_ref(identity_);}
ExceptionRef make_exception(const std::string& name){auto object=make_ref<ExceptionObject>(name);object->source_ctor(name);return object;}
ExceptionRef make_exception(const std::string& name,String message,ExceptionRef inner){auto object=make_ref<ExceptionObject>(name);object->source_ctor(name,std::move(message),std::move(inner));return object;}
ExceptionRef capture_exception(const Exception& exception,std::exception_ptr native){
    record_captured_exception(std::string(exception.type_name())+": "+exception.what());
    std::lock_guard<std::mutex> guard(exception.identity_token()->mutex);
    if(auto cached=pls::cs::dynamic_pointer_cast<ExceptionObject>(exception.identity_token()->managed_view.lock()))return cached;
    auto object=exception.uses_default_message()?make_exception(exception.type_name()):make_exception(exception.type_name(),String::from_utf8(exception.what()));
    object->identity_=exception.identity_token();object->native_=std::move(native);exception.identity_token()->managed_view=object;
    if(const auto* initialization=dynamic_cast<const TypeInitializationException*>(&exception)){
        if(initialization->inner_exception())try{std::rethrow_exception(initialization->inner_exception());}catch(const Exception& inner){object->inner_=capture_exception(inner,std::current_exception());}
    }
    return object;
}
bool exception_is(const ExceptionRef& object,const std::string& target){
    if(!object)return false;if(object->managed_type_name()==target)return true;
    for(auto type=object->builtin_exception_base();!type.empty();type=parent(type))if(type==target)return true;
    return false;
}
[[noreturn]]void throw_exception(const ExceptionRef& object){
    if(!object)throw NullReferenceException();
    if(object->native_)std::rethrow_exception(object->native_);
    const auto& base=object->builtin_exception_base();
    #define PLS_UNWIND_TYPE(type,name) if(base==name)unwind<type>(object)
    PLS_UNWIND_TYPE(Exception,"System.Exception");PLS_UNWIND_TYPE(SystemException,"System.SystemException");
    PLS_UNWIND_TYPE(ArithmeticException,"System.ArithmeticException");PLS_UNWIND_TYPE(DivideByZeroException,"System.DivideByZeroException");
    PLS_UNWIND_TYPE(OverflowException,"System.OverflowException");PLS_UNWIND_TYPE(NullReferenceException,"System.NullReferenceException");
    PLS_UNWIND_TYPE(IndexOutOfRangeException,"System.IndexOutOfRangeException");PLS_UNWIND_TYPE(InvalidCastException,"System.InvalidCastException");
    PLS_UNWIND_TYPE(ArrayTypeMismatchException,"System.ArrayTypeMismatchException");PLS_UNWIND_TYPE(InvalidOperationException,"System.InvalidOperationException");
    PLS_UNWIND_TYPE(ObjectDisposedException,"System.ObjectDisposedException");PLS_UNWIND_TYPE(NotSupportedException,"System.NotSupportedException");
    PLS_UNWIND_TYPE(NotImplementedException,"System.NotImplementedException");PLS_UNWIND_TYPE(FormatException,"System.FormatException");PLS_UNWIND_TYPE(UriFormatException,"System.UriFormatException");
    PLS_UNWIND_TYPE(OutOfMemoryException,"System.OutOfMemoryException");PLS_UNWIND_TYPE(UnauthorizedAccessException,"System.UnauthorizedAccessException");
    PLS_UNWIND_TYPE(ArgumentException,"System.ArgumentException");PLS_UNWIND_TYPE(ArgumentNullException,"System.ArgumentNullException");
    PLS_UNWIND_TYPE(ArgumentOutOfRangeException,"System.ArgumentOutOfRangeException");PLS_UNWIND_TYPE(IOException,"System.IO.IOException");
    PLS_UNWIND_TYPE(EndOfStreamException,"System.IO.EndOfStreamException");
    PLS_UNWIND_TYPE(ThreadStateException,"System.Threading.ThreadStateException");
    PLS_UNWIND_TYPE(ThreadInterruptedException,"System.Threading.ThreadInterruptedException");
    #undef PLS_UNWIND_TYPE
    throw NotSupportedException("Unknown native exception base; register a faithful unwind bridge");
}
} // namespace pls::cs
