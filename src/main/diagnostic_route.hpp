#pragma once
// Diagnostic builds only: condition-driven input routes for coverage runs.
// Pure state machine over a read-only UI snapshot; no game logic, no managed
// allocation, no clock reads. The host captures UiState from platform
// accessors (form stack, ids, modes, soft labels) and sends the returned key.
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <iterator>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
#include <vector>
namespace pls::pc::route {
struct FormRow {std::string type;std::int32_t id{-1},mode{-1};std::string left,right;};
// Management map facts read by the host from game fields (never by calling game
// methods). Kept out of to_line/signature so UI-only routes log exactly as before.
struct TenantRow {std::int32_t id{},state{},x{},y{},data{};};
struct GameState {
    bool valid{}; // a GameForm with camera and user data exists
    std::int32_t window{-1},map_state{-1},scale{-1},selected{-1},cursor_ax{},cursor_ay{};
    float cursor_x{},cursor_y{},camera_x{},camera_y{};bool cursor_hidden{};
    std::int64_t money{};std::vector<TenantRow> tenants;
    const TenantRow* tenant(std::int32_t id)const{for(const auto& t:tenants)if(t.id==id)return &t;return nullptr;}
};
struct UiState {
    std::uint64_t frame{};std::vector<FormRow> stack;std::string main_window,soft_left,soft_right;
    bool loading{},dialog{},text_panel{};GameState game;
    const FormRow* top()const{return stack.empty()?nullptr:&stack.back();}
};
inline bool is_sub_window(const std::string& type){
    for(const char* name:{"form.SubForm","system.form.BillingForm","system.form.HttpForm","system.form.LanguageForm","system.form.LineupForm"})if(type==name)return true;
    return false;
}
// Derived flags: game dialogs are SubForms (id 4) on top; loading is BootForm
// (id 0) on top or a form between push and Init (mode 0) or finishing (mode 4).
inline void derive(UiState& state){
    state.main_window.clear();state.loading=false;
    for(const auto& row:state.stack){if(row.mode==0||row.mode==4)state.loading=true;if(state.main_window.empty()&&!is_sub_window(row.type)&&row.mode!=4)state.main_window=row.type;}
    const auto* top=state.top();state.dialog=top&&top->id==4;if(top&&top->id==0)state.loading=true;
}
inline std::string json_escape(const std::string& text){std::string out;for(unsigned char c:text){if(c=='"'||c=='\\'){out+='\\';out+=char(c);}else if(c<0x20){char buffer[8];std::snprintf(buffer,sizeof buffer,"\\u%04x",c);out+=buffer;}else out+=char(c);}return out;}
inline std::string to_line(const UiState& s){
    std::ostringstream o;o<<"{\"frame\":"<<s.frame<<",\"main\":\""<<json_escape(s.main_window)<<"\",\"soft\":[\""<<json_escape(s.soft_left)<<"\",\""<<json_escape(s.soft_right)<<"\"],\"loading\":"<<(s.loading?"true":"false")<<",\"dialog\":"<<(s.dialog?"true":"false")<<",\"text_panel\":"<<(s.text_panel?"true":"false")<<",\"stack\":[";
    for(std::size_t i=0;i<s.stack.size();++i){const auto& r=s.stack[i];o<<(i?",":"")<<"{\"type\":\""<<json_escape(r.type)<<"\",\"id\":"<<r.id<<",\"mode\":"<<r.mode<<",\"left\":\""<<json_escape(r.left)<<"\",\"right\":\""<<json_escape(r.right)<<"\"}";}
    o<<"]}";return o.str();
}
// Same comparison as the change log: frame excluded.
inline std::string signature(const UiState& s){auto copy=s;copy.frame=0;return to_line(copy);}
inline std::string game_line(const GameState& g){
    std::ostringstream o;o<<"{\"valid\":"<<(g.valid?"true":"false");
    if(g.valid){o<<",\"window\":"<<g.window<<",\"map_state\":"<<g.map_state<<",\"scale\":"<<g.scale<<",\"cursor\":["<<g.cursor_x<<','<<g.cursor_y<<"],\"address\":["<<g.cursor_ax<<','<<g.cursor_ay
        <<"],\"camera\":["<<g.camera_x<<','<<g.camera_y<<"],\"hidden\":"<<(g.cursor_hidden?"true":"false")<<",\"selected\":"<<g.selected<<",\"money\":"<<g.money<<",\"tenants\":[";
        for(std::size_t i=0;i<g.tenants.size();++i){const auto& t=g.tenants[i];o<<(i?",":"")<<'['<<t.id<<','<<t.state<<','<<t.x<<','<<t.y<<','<<t.data<<']';}
        o<<']';}
    o<<'}';return o.str();
}
// Arrow key that brings the cursor's address cell into the tenant's cells
// (x..x+1, y-1..y, as game.Camera.Collision tests them); empty when inside.
// Measured on the map (save 50): RIGHT raises address x and y, UP raises y and
// lowers x, so a cell step (dx,dy) is RIGHT/LEFT along dx+dy, UP/DOWN along dy-dx.
inline std::string steer_key(const GameState& g,const TenantRow& t,bool prefer_vertical){
    const int dx=g.cursor_ax<t.x?t.x-g.cursor_ax:g.cursor_ax>t.x+1?t.x+1-g.cursor_ax:0;
    const int dy=g.cursor_ay<t.y-1?t.y-1-g.cursor_ay:g.cursor_ay>t.y?t.y-g.cursor_ay:0;
    const int h=dx+dy,v=dy-dx;if(!h&&!v)return {};
    const bool vertical=v&&(!h||std::abs(v)>std::abs(h)||(std::abs(v)==std::abs(h)&&prefer_vertical));
    return vertical?(v>0?"UP":"DOWN"):(h>0?"RIGHT":"LEFT");
}

enum class Op {anchor,key,wait_form,wait_not_loading,wait_not_dialog,wait_frames,expect_form,dismiss_until,when_key,pointer,focus,type_text,accept_text,raw_key,cursor_to,hold,mark,watchdog,end};
struct Step {
    Op op{};std::string text;int line{};
    std::string key;int repeat{1},gap{1};
    std::string form;std::int32_t id{-1},mode{-1};int label_right{-1};std::string label_text; // label_right: -1 any, 0 empty, 1 non-empty, 2 exact text
    int frames{0},stable{1},timeout{600},depth{-1};bool optional{false};
    // Game conditions (-1/-2/empty: not given). selected: -1 none, -2 not given.
    std::int32_t scale{-1},map_state{-1},window{-1},selected{-2},tenant{-1},tenant_state{-1};std::string money; // money: less|more|same|changed, against the last mark
    int hold_direction{0}; // hold L|R: -1 or 1
    std::string stick,cursor,camera,selection;int axis_x{},axis_y{},hidden{-1},max_pan{-1};
    bool game_conditions()const{return window>=0||scale>=0||map_state>=0||selected!=-2||tenant>=0||!money.empty()||!cursor.empty()||!camera.empty()||!selection.empty()||hidden>=0;}
    int pointer_kind{-1},x{0},y{0};bool focus_on{true}; // pointer_kind: 0 down, 1 up, 2 move
    std::string typed; // type: text for the host text panel (one token, no spaces)
    std::string raw; bool raw_down{true}; // keydown/keyup: physical host key (HASH, STAR, KP1, ESCAPE)
};
inline const char* key_names[]={"SELECT","UP","DOWN","LEFT","RIGHT","SOFT1","SOFT2"};
inline bool valid_key(const std::string& k){for(auto* n:key_names)if(k==n)return true;return false;}
inline int parse_int(const std::string& value,int line){
    if(value.empty())throw std::invalid_argument("route line "+std::to_string(line)+": empty number");
    std::size_t used=0;int result=0;
    try{result=std::stoi(value,&used);}catch(const std::exception&){throw std::invalid_argument("route line "+std::to_string(line)+": bad number "+value);}
    if(used!=value.size())throw std::invalid_argument("route line "+std::to_string(line)+": bad number "+value);
    return result;
}
inline void parse_conditions(Step& step,std::istringstream& words){
    std::string word;
    while(words>>word){
        if(word=="optional"){step.optional=true;continue;}
        const auto eq=word.find('=');if(eq==std::string::npos)throw std::invalid_argument("route line "+std::to_string(step.line)+": expected name=value, got "+word);
        const auto name=word.substr(0,eq),value=word.substr(eq+1);
        if(name=="form")step.form=value;
        else if(name=="id")step.id=parse_int(value,step.line);
        else if(name=="mode")step.mode=parse_int(value,step.line);
        else if(name=="depth")step.depth=parse_int(value,step.line);
        else if(name=="label_right"){if(value=="*")step.label_right=1;else if(value=="-")step.label_right=0;else{step.label_right=2;step.label_text=value;}}
        else if(name=="timeout")step.timeout=parse_int(value,step.line);
        else if(name=="stable")step.stable=parse_int(value,step.line);
        else if(name=="frames")step.frames=parse_int(value,step.line);
        else if(name=="repeat")step.repeat=parse_int(value,step.line);
        else if(name=="gap")step.gap=parse_int(value,step.line);
        else if(name=="scale")step.scale=parse_int(value,step.line);
        else if(name=="map_state")step.map_state=parse_int(value,step.line);
        else if(name=="window")step.window=parse_int(value,step.line);
        else if(name=="selected"){if(value=="same"||value=="changed")step.selection=value;else step.selected=value=="-"?-1:parse_int(value,step.line);}
        else if(name=="cursor"||name=="camera"){if(value!="same"&&value!="changed")throw std::invalid_argument("route: cursor/camera needs same|changed");(name=="cursor"?step.cursor:step.camera)=value;}
        else if(name=="hidden"){if(value!="true"&&value!="false")throw std::invalid_argument("route: hidden needs true|false");step.hidden=value=="true"?1:0;}
        else if(name=="max_pan"){step.max_pan=parse_int(value,step.line);if(step.max_pan<0)throw std::invalid_argument("route: max_pan must be nonnegative");}
        else if(name=="x")step.axis_x=parse_int(value,step.line);
        else if(name=="y")step.axis_y=parse_int(value,step.line);
        else if(name=="tenant")step.tenant=parse_int(value,step.line);
        else if(name=="tenant_state")step.tenant_state=parse_int(value,step.line);
        else if(name=="money"){if(value!="less"&&value!="more"&&value!="same"&&value!="changed")throw std::invalid_argument("route line "+std::to_string(step.line)+": money=less|more|same|changed");step.money=value;}
        else throw std::invalid_argument("route line "+std::to_string(step.line)+": unknown condition "+name);
    }
    if(step.timeout<1||step.stable<1||step.repeat<1||step.gap<1||step.frames<0)throw std::invalid_argument("route line "+std::to_string(step.line)+": values must be positive");
    if(step.tenant_state>=0&&step.tenant<0)throw std::invalid_argument("route line "+std::to_string(step.line)+": tenant_state needs tenant=N");
}
inline std::vector<Step> parse(std::istream& input){
    std::vector<Step> steps;std::string raw;int line=0;
    while(std::getline(input,raw)){
        ++line;const auto hash=raw.find('#');if(hash!=std::string::npos)raw.resize(hash);
        std::istringstream words(raw);std::string verb;if(!(words>>verb))continue;
        Step step;step.line=line;step.text=raw;
        if(verb=="anchor"){step.op=Op::anchor;parse_conditions(step,words);}
        else if(verb=="end")step.op=Op::end;
        else if(verb=="press"||verb=="release"||verb=="move"){
            // Touch on the logical 240x280 screen; tap X Y expands to press, wait, release.
            step.op=Op::pointer;step.pointer_kind=verb=="press"?0:verb=="release"?1:2;
            std::string xs,ys;if(!(words>>xs>>ys))throw std::invalid_argument("route line "+std::to_string(line)+": "+verb+" X Y");
            step.x=parse_int(xs,line);step.y=parse_int(ys,line);
        }
        else if(verb=="tap"){
            std::string xs,ys;if(!(words>>xs>>ys))throw std::invalid_argument("route line "+std::to_string(line)+": tap X Y");
            Step down=step;down.op=Op::pointer;down.pointer_kind=0;down.x=parse_int(xs,line);down.y=parse_int(ys,line);
            Step hold=step;hold.op=Op::wait_frames;hold.frames=1;
            Step up=down;up.pointer_kind=1;
            steps.push_back(down);steps.push_back(hold);steps.push_back(up);continue;
        }
        else if(verb=="type"){words>>step.typed;if(step.typed.empty())throw std::invalid_argument("route line "+std::to_string(line)+": type <text>");step.op=Op::type_text;}
        else if(verb=="accept"){step.op=Op::accept_text;}
        else if(verb=="keydown"||verb=="keyup"){words>>step.raw;if(step.raw!="HASH"&&step.raw!="STAR"&&step.raw!="KP1"&&step.raw!="ESCAPE")throw std::invalid_argument("route line "+std::to_string(line)+": keydown|keyup HASH|STAR|KP1|ESCAPE");step.op=Op::raw_key;step.raw_down=verb=="keydown";}
        else if(verb=="focus"){std::string v;words>>v;if(v!="on"&&v!="off")throw std::invalid_argument("route line "+std::to_string(line)+": focus on|off");step.op=Op::focus;step.focus_on=v=="on";}
        else if(verb=="key"){step.op=Op::key;if(!(words>>step.key)||!valid_key(step.key))throw std::invalid_argument("route line "+std::to_string(line)+": unknown key");parse_conditions(step,words);}
        else if(verb=="wait"){
            std::string first;if(!(words>>first))throw std::invalid_argument("route line "+std::to_string(line)+": wait needs a condition");
            if(first=="not"){std::string what;words>>what;if(what=="loading")step.op=Op::wait_not_loading;else if(what=="dialog")step.op=Op::wait_not_dialog;else throw std::invalid_argument("route line "+std::to_string(line)+": wait not loading|dialog");parse_conditions(step,words);}
            else{std::istringstream rest(first+" "+std::string(std::istreambuf_iterator<char>(words),{}));parse_conditions(step,rest);
                step.op=step.frames>0&&step.form.empty()&&step.id<0?Op::wait_frames:Op::wait_form;
                if(step.op==Op::wait_form&&step.form.empty()&&step.id<0&&step.mode<0&&step.label_right<0&&step.depth<0&&!step.game_conditions())throw std::invalid_argument("route line "+std::to_string(line)+": wait needs form/id/mode/label_right or frames");}
        }
        else if(verb=="expect"){step.op=Op::expect_form;parse_conditions(step,words);}
        else if(verb=="when"){
            // when <conditions> key <KEY>: press only if the conditions hold now; never waits.
            std::string word,rest;std::vector<std::string> conditions;
            while(words>>word){if(word=="key"){words>>step.key;break;}conditions.push_back(word);}
            if(!valid_key(step.key))throw std::invalid_argument("route line "+std::to_string(line)+": when needs key <KEY>");
            for(const auto& c:conditions)rest+=c+" ";std::istringstream cond(rest);parse_conditions(step,cond);step.op=Op::when_key;
        }
        // cursor to tenant=N: steer the management cursor with arrow keys until the game selects N.
        else if(verb=="cursor"){std::string to;words>>to;if(to!="to")throw std::invalid_argument("route line "+std::to_string(line)+": cursor to tenant=N");parse_conditions(step,words);
            if(step.tenant<0)throw std::invalid_argument("route line "+std::to_string(line)+": cursor to needs tenant=N");step.op=Op::cursor_to;}
        // hold L|R frames=N: hold the 3DS zoom button for N frames, then release it.
        else if(verb=="hold"){std::string b;words>>b;
            if(b!="L"&&b!="R"&&b!="CP"&&b!="CS"&&!valid_key(b))throw std::invalid_argument("route line "+std::to_string(line)+": hold L|R|CP|CS|KEY frames=N");parse_conditions(step,words);
            if(step.frames<1||std::abs(std::int64_t(step.axis_x))>32767||std::abs(std::int64_t(step.axis_y))>32767)throw std::invalid_argument("route line "+std::to_string(line)+": invalid hold frames/axes");
            step.op=Op::hold;if(b=="CP"||b=="CS")step.stick=b;else if(b=="L"||b=="R")step.hold_direction=b=="R"?1:-1;else step.key=b;}
        else if(verb=="mark"){step.op=Op::mark;}
        // watchdog frames=N: fail a waiting step when neither UI nor game state changed for N frames (0: off).
        else if(verb=="watchdog"){parse_conditions(step,words);step.op=Op::watchdog;}
        else if(verb=="dismiss"){std::string until;words>>until;if(until!="until")throw std::invalid_argument("route line "+std::to_string(line)+": dismiss until <condition>");step.op=Op::dismiss_until;parse_conditions(step,words);}
        else throw std::invalid_argument("route line "+std::to_string(line)+": unknown verb "+verb);
        steps.push_back(step);
    }
    if(steps.empty()||steps.back().op!=Op::end)throw std::invalid_argument("route must finish with end");
    return steps;
}
inline bool ends_with(const std::string& text,const std::string& suffix){return text.size()>=suffix.size()&&text.compare(text.size()-suffix.size(),suffix.size(),suffix)==0;}
// Condition on the top form (form matches the type or its last dotted suffix).
// Game conditions (scale, map_state, selected, tenant, money) need a valid GameState;
// money compares with the value stored by the last `mark`.
inline bool matches(const Step& step,const UiState& state,std::int64_t marked_money=0,const GameState* marked=nullptr){
    if(step.depth>=0&&std::int32_t(state.stack.size())!=step.depth)return false;
    const auto* top=state.top();if(!top)return false;
    if(!step.form.empty()&&!(top->type==step.form||ends_with(top->type,"."+step.form)))return false;
    if(step.id>=0&&top->id!=step.id)return false;
    if(step.mode>=0&&top->mode!=step.mode)return false;
    if(step.label_right==0&&!top->right.empty())return false;
    if(step.label_right==1&&top->right.empty())return false;
    if(step.label_right==2&&top->right!=step.label_text)return false;
    if(!step.game_conditions())return true;
    const auto& g=state.game;if(!g.valid)return false;
    if(step.hidden>=0&&g.cursor_hidden!=(step.hidden==1))return false;
    if(!step.cursor.empty()){if(!marked||!marked->valid)return false;const bool same=g.cursor_x==marked->cursor_x&&g.cursor_y==marked->cursor_y;if(same!=(step.cursor=="same"))return false;}
    if(!step.camera.empty()){if(!marked||!marked->valid)return false;const bool same=g.camera_x==marked->camera_x&&g.camera_y==marked->camera_y;if(same!=(step.camera=="same"))return false;}
    if(!step.selection.empty()){if(!marked||!marked->valid)return false;if((g.selected==marked->selected)!=(step.selection=="same"))return false;}
    if(step.scale>=0&&g.scale!=step.scale)return false;
    if(step.map_state>=0&&g.map_state!=step.map_state)return false;
    if(step.window>=0&&g.window!=step.window)return false;
    if(step.selected!=-2&&g.selected!=step.selected)return false;
    if(step.tenant>=0){const auto* t=g.tenant(step.tenant);if(!t||(step.tenant_state>=0&&t->state!=step.tenant_state))return false;}
    if(step.money=="less"&&!(g.money<marked_money))return false;
    if(step.money=="more"&&!(g.money>marked_money))return false;
    if(step.money=="same"&&g.money!=marked_money)return false;
    if(step.money=="changed"&&g.money==marked_money)return false;
    return true;
}
// zoom: -1/1 hold L/R this frame, 2 release; 0 nothing.
struct Action {std::string key;bool anchor{};bool done{};bool timed_out{};int step{-1};std::string note;int pointer_kind{-1},x{0},y{0};int focus{-1};std::string text;bool accept{};std::string raw;bool raw_down{};int zoom{0};std::string stick;int axis_x{},axis_y{};};
// One call per frame with the state captured at the end of the previous frame.
// At most one key per frame. Waits keep the step until the predicate holds.
class Runner {
public:
    explicit Runner(std::vector<Step> steps):steps_(std::move(steps)){}
    bool finished()const{return index_>=steps_.size();}
    std::size_t index()const{return index_;}
    const std::vector<Step>& steps()const{return steps_;}
    // True when the route reads game state (the host then logs PLS_GAME_STATE changes).
    bool uses_game()const{for(const auto& s:steps_)if(s.game_conditions()||s.op==Op::cursor_to||s.op==Op::hold||s.op==Op::mark||s.op==Op::watchdog)return true;return false;}
    Action step(const UiState& state){
        Action action;
        if(watchdog_>0){auto digest=signature(state)+game_line(state.game);if(digest!=digest_){digest_=std::move(digest);changed_=std::int64_t(state.frame);}}
        while(!finished()){
            auto& s=steps_[index_];action.step=int(index_);
            if(started_<0)started_=std::int64_t(state.frame);
            const auto waited=std::int64_t(state.frame)-started_;
            auto advance=[&]{++index_;started_=-1;stable_=0;issued_=0;};
            // optional: a timeout logs a note and moves on instead of ending the route.
            auto timeout=[&]{action.note="timeout at line "+std::to_string(s.line)+": "+s.text;if(s.optional){advance();return action;}action.timed_out=true;index_=steps_.size();return action;};
            auto fail=[&](const std::string& why){action.timed_out=true;action.note=why+" at line "+std::to_string(s.line)+": "+s.text;index_=steps_.size();return action;};
            // Game-condition waits and cursor steering close game popups with the dismiss rule
            // (unlabeled SubForm -> SELECT, labeled -> SOFT2, every 18 frames): events may pop up at any time.
            auto popup=[&]{if(state.dialog&&waited%18==0){const auto* top=state.top();action.key=top->right.empty()?"SELECT":"SOFT2";}return action;};
            const bool waiting=s.op==Op::anchor||s.op==Op::wait_form||s.op==Op::wait_not_loading||s.op==Op::wait_not_dialog||s.op==Op::dismiss_until||s.op==Op::cursor_to;
            if(waiting&&watchdog_>0&&changed_>=0&&std::int64_t(state.frame)-changed_>=watchdog_)return fail("stalled "+std::to_string(watchdog_)+" frames without a UI or game change");
            switch(s.op){
            case Op::end:action.done=true;index_=steps_.size();return action;
            case Op::anchor:
                if(state.top()&&state.top()->id==1){action.anchor=true;advance();return action;}
                if(waited>s.timeout)return timeout();return action;
            case Op::key:
                if(issued_>0&&waited<std::int64_t(s.gap)*issued_)return action;
                action.key=s.key;++issued_;if(issued_>=s.repeat)advance();return action;
            case Op::wait_frames:if(waited>=s.frames){advance();continue;}return action;
            case Op::wait_form:
                if(matches(s,state,marked_,&marked_game_)){if(++stable_>=s.stable){advance();continue;}}else stable_=0;
                if(waited>s.timeout)return timeout();return s.game_conditions()?popup():action;
            case Op::wait_not_loading:
                if(!state.loading){if(++stable_>=s.stable){advance();continue;}}else stable_=0;
                if(waited>s.timeout)return timeout();return action;
            case Op::wait_not_dialog:
                if(!state.dialog){if(++stable_>=s.stable){advance();continue;}}else stable_=0;
                if(waited>s.timeout)return timeout();return action;
            case Op::pointer:action.pointer_kind=s.pointer_kind;action.x=s.x;action.y=s.y;advance();return action;
            case Op::focus:action.focus=s.focus_on?1:0;advance();return action;
            case Op::type_text:action.text=s.typed;advance();return action;
            case Op::accept_text:action.accept=true;advance();return action;
            case Op::raw_key:action.raw=s.raw;action.raw_down=s.raw_down;advance();return action;
            case Op::when_key:
                if(matches(s,state,marked_,&marked_game_)){action.key=s.key;advance();return action;}
                advance();continue;
            case Op::expect_form:
                if(matches(s,state,marked_,&marked_game_)){advance();continue;}
                return fail("expect failed");
            case Op::mark:marked_=state.game.money;marked_game_=state.game;advance();continue;
            case Op::watchdog:watchdog_=s.frames;changed_=-1;digest_.clear();advance();continue;
            case Op::hold:
                if(s.game_conditions()&&!matches(s,state,marked_,&marked_game_))return fail("held input condition failed");
                if(s.max_pan>=0){
                    if(!state.game.valid)return fail("held input needs a valid map");
                    if(waited>0&&(std::fabs(state.game.camera_x-hold_camera_x_)>s.max_pan+0.001f||std::fabs(state.game.camera_y-hold_camera_y_)>s.max_pan+0.001f))return fail("camera moved faster than max_pan");
                    hold_camera_x_=state.game.camera_x;hold_camera_y_=state.game.camera_y;
                }
                if(waited<s.frames){action.zoom=s.hold_direction;action.key=s.key;action.stick=s.stick;action.axis_x=s.axis_x;action.axis_y=s.axis_y;return action;}
                if(s.hold_direction)action.zoom=2;action.stick=s.stick;advance();return action;
            case Op::cursor_to:{
                const auto& g=state.game;
                if(g.valid&&g.selected==s.tenant&&!g.cursor_hidden){advance();continue;}
                if(waited>s.timeout)return fail("cursor did not reach tenant "+std::to_string(s.tenant));
                if(state.dialog)return popup();
                if(!g.valid||state.loading)return action;
                const auto* t=g.tenant(s.tenant);if(!t)return fail("unknown tenant "+std::to_string(s.tenant));
                // Inside the cells without a selection: wait (the timeout or watchdog decides).
                action.key=steer_key(g,*t,waited%2==1);return action;}
            case Op::dismiss_until:
                if(matches(s,state,marked_,&marked_game_)){advance();continue;}
                if(waited>s.timeout)return timeout();
                // Same rule as the frame-based dismissal: unlabeled SubForm -> SELECT, labeled -> SOFT2; every 18 frames.
                if(state.dialog&&waited%18==0){const auto* top=state.top();action.key=top->right.empty()?"SELECT":"SOFT2";}
                // A match screen (SoccerForm main, no dialog) waits for SELECT on its first
                // item (kickoff) and on result pages; SELECT never moves its cursor.
                else if(!state.dialog&&waited%18==0&&state.main_window.size()>=10&&state.main_window.compare(state.main_window.size()-10,10,"SoccerForm")==0)action.key="SELECT";
                return action;
            }
        }
        action.done=true;return action;
    }
private:
    std::vector<Step> steps_;std::size_t index_{0};std::int64_t started_{-1};int stable_{0};int issued_{0};
    float hold_camera_x_{},hold_camera_y_{};GameState marked_game_;std::int64_t marked_{0},changed_{-1};int watchdog_{0};std::string digest_;
};
inline std::vector<Step> load(const std::string& path){std::ifstream in(path,std::ios::binary);if(!in)throw std::invalid_argument("route file not readable: "+path);return parse(in);}
}
