#pragma once
#include <cstdint>
#include <string>
#include <vector>

namespace pls::platform {
struct Color { std::uint8_t r,g,b,a; };
struct Rect { int x,y,w,h; };
struct Input { enum class Kind { quit,pointer_down,pointer_up,pointer_move,key_down,key_up }; Kind kind; int x{},y{},key{}; };
struct Memory { std::uint64_t texture_payload_bytes{},audio_ring_bytes{}; };
class Drawing {
public:
    virtual ~Drawing()=default;
    virtual void clear(Color)=0;
    virtual void fill(Rect,Color)=0;
    virtual void line(int,int,int,int,Color)=0;
    virtual void clip(const Rect*)=0;
    virtual std::vector<Input> events()=0;
    virtual void present()=0;
    virtual Memory memory() const=0;
};
}
