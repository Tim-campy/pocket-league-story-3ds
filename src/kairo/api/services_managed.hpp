#pragma once
#include "services.hpp"
#include "semantic_runtime.hpp"
namespace pls::services::managed {
// The translator calls this only after evaluating the original arguments and
// ensuring the source declaring type's initialization. This is the byte-array
// adapter for the explicit offline registration policy, not a second AppData.
inline cs::Array<std::uint8_t> register_local(){
    try{
        const auto bytes=services::register_local_wire();
        if(bytes.size()>static_cast<std::size_t>(std::numeric_limits<std::int32_t>::max()))throw cs::OutOfMemoryException();
        auto result=cs::Array<std::uint8_t>::make(static_cast<std::int32_t>(bytes.size()));
        for(std::int32_t i=0;i<result.length();++i)result.at(i)=bytes[static_cast<std::size_t>(i)];
        return result;
    }catch(const PersistenceError& error){throw cs::IOException(error.what());}
     catch(const std::logic_error& error){throw cs::InvalidOperationException(error.what());}
}
}
