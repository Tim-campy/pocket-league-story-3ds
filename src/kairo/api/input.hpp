#pragma once
#include "semantic_runtime.hpp"
#include "platform.hpp"
#include <array>
#include <functional>
#include <set>

namespace pls::kairo {
class MotionEvent : public cs::Object {
    std::int32_t action_;
    cs::Array<std::int32_t> ids_;
    cs::Array<float> positions_,deltas_;
    bool mouse_;
public:
    static constexpr std::int32_t ACTION_DOWN=0,ACTION_UP=1,ACTION_MOVE=2,ACTION_CANCEL=3,ACTION_OUTSIDE=4,ACTION_POINTER_DOWN=5,ACTION_POINTER_UP=6;
    static constexpr std::int32_t ACTION_POINTER_1_DOWN=5,ACTION_POINTER_2_DOWN=261,ACTION_POINTER_3_DOWN=517,ACTION_POINTER_1_UP=6,ACTION_POINTER_2_UP=262,ACTION_POINTER_3_UP=518;
    MotionEvent(std::int32_t action,cs::Array<std::int32_t> ids,cs::Array<float> positions,cs::Array<float> deltas,bool mouse=false)
        :action_(action),ids_(ids),positions_(positions),deltas_(deltas),mouse_(mouse){}
    void trace_edges(const cs::EdgeVisitor& v)const override{cs::trace_value(ids_,v);cs::trace_value(positions_,v);cs::trace_value(deltas_,v);}
    void release_edges()override{cs::release_value(ids_);cs::release_value(positions_);cs::release_value(deltas_);}
    std::int32_t GetAction(){return action_;}
    float GetX(){return positions_.at(0);}float GetY(){return positions_.at(1);}
    float GetX(std::int32_t i){return positions_.at(cs::mul_i32(i,2));}
    float GetY(std::int32_t i){return positions_.at(cs::add_i32(cs::mul_i32(i,2),1));}
    float GetDeltaX(){return GetDeltaX(0);}float GetDeltaY(){return GetDeltaY(0);}float GetDeltaTime(){return GetDeltaTime(0);}
    float GetDeltaX(std::int32_t i){return deltas_.is_null()?0.0f:deltas_.at(cs::mul_i32(i,3));}
    float GetDeltaY(std::int32_t i){return deltas_.is_null()?0.0f:deltas_.at(cs::add_i32(cs::mul_i32(i,3),1));}
    float GetDeltaTime(std::int32_t i){return deltas_.is_null()?0.0f:deltas_.at(cs::add_i32(cs::mul_i32(i,3),2));}
    bool IsMousePointer(){return mouse_;}
    std::int32_t GetPointerCount(){return ids_.length();}
    std::int32_t GetPointerId(std::int32_t i){return ids_.at(i);}
};
class KeyEvent : public cs::Object {
    std::int32_t action_,key_;
public:
    static constexpr std::int32_t ACTION_DOWN=0,ACTION_UP=1;
    static constexpr std::int32_t KEYCODE_HOME=278,KEYCODE_BACK=27,KEYCODE_FOCUS=311;
    KeyEvent(std::int32_t action,std::int32_t key):action_(action),key_(key){}
    std::int32_t GetAction(){return action_;}std::int32_t GetKeyCode(){return key_;}std::int32_t GetRepeatCount(){return 0;}
};
class CanvasKeyState {
    cs::Array<std::int32_t> history_=cs::Array<std::int32_t>::make(60);
    std::int32_t work_{},event_{},state_{},pulse_{},invalid_pulse_{},index_{},disabled_{};
    std::int32_t repeat_{10},double_{4};
    bool invalid_touch_{};
    std::int32_t history(std::int32_t offset);
public:
    static constexpr std::int32_t KEY_LEFT=65536,KEY_UP=131072,KEY_RIGHT=262144,KEY_DOWN=524288,KEY_SELECT=1048576,KEY_SOFT1=2097152,KEY_SOFT2=4194304;
    std::function<void(std::int32_t)> on_key_down,on_key_up;
    std::int32_t GetKeyState(){return state_;}std::int32_t GetKeypadState(){return work_;}
    bool CheckKeyState(std::int32_t key){return (state_&key)!=0;}
    bool CheckKeyPulse(std::int32_t);
    bool CheckKeyRepeat(std::int32_t key){return CheckKeyRepeat(key,repeat_);}
    bool CheckKeyRepeat(std::int32_t,std::int32_t);
    bool CheckKeyDouble(std::int32_t key){return CheckKeyDouble(key,double_);}
    bool CheckKeyDouble(std::int32_t,std::int32_t);
    void SetKeyRepeatInterval(std::int32_t frame){repeat_=frame;}std::int32_t GetKeyRepeatInterval(){return repeat_;}
    void SetKeyDoubleInterval(std::int32_t frame){double_=frame;}std::int32_t GetKeyDoubleInterval(){return double_;}
    void SetDisableKeyBits(std::int32_t bits){disabled_=bits;}
    void KeyDown(std::int32_t,bool pulse=true);void KeyUp(std::int32_t);void KeyClick(std::int32_t);
    void PhysicalDown(std::int32_t key_code,bool debug=false);void PhysicalUp(std::int32_t key_code,bool debug=false);
    static std::int32_t GetKeyID(std::int32_t key_code,bool debug=false);
    void DecideKeyState(std::int32_t active_touches=0);
    void ClearKeyBuffer();bool touch_invalid()const{return invalid_touch_;}
};
// PC adapter: matches the original non-mobile Canvas mouse/VALID_KEYS path.
// It consumes Backend events; it never polls SDL separately or steals events.
class PcInputAdapter {
    CanvasKeyState& state_;
    std::set<std::int32_t> held_;
    std::array<bool,23> groups_{};
    bool mouse_down_{},previous_mouse_down_{},right_down_{},previous_right_down_{};
    int x_{},y_{},previous_x_{},previous_y_{};
public:
    std::function<void(cs::Ref<MotionEvent>)> on_touch;
    // Installed handlers own the Canvas.OnKeyDown/Up route, including physical
    // state mutation. Without a handler the adapter updates state directly.
    std::function<void(std::int32_t,cs::Ref<KeyEvent>)> on_key_down,on_key_up;
    explicit PcInputAdapter(CanvasKeyState& state):state_(state){}
    void feed(const platform::Input&);
    void decide_frame();
};
}
