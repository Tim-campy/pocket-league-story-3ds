#pragma once
#include <cstdint>
namespace pls::kairo {
// C# interface kairo.unity.surface.TouchValueAccessor. This polymorphic slot
// table has no Object base: implementing classes retain one managed identity.
class TouchValueAccessor {
public:
    virtual ~TouchValueAccessor()=default;
    virtual std::int32_t GetTouchValue(std::int32_t type,std::int32_t index)=0;
    virtual void SetTouchValue(std::int32_t type,std::int32_t value)=0;
};
}
