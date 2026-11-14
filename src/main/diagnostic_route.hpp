#pragma once
// Diagnostic builds only: condition-driven input routes for coverage runs.
// Pure state machine over a read-only UI snapshot; no game logic, no managed
// allocation, no clock reads. The host captures UiState from platform
// accessors (form stack, ids, modes, soft labels) and sends the returned key.
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
struct UiState {
    std::uint64_t frame{};std::vector<FormRow> stack;std::string main_window,soft_left,soft_right;
    bool loading{},dialog{},text_panel{};
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

enum class Op {anchor,key,wait_form,wait_not_loading,wait_not_dialog,wait_frames,expect_form,dismiss_until,end};
struct Step {
    Op op{};std::string text;int line{};
    std::string key;int repeat{1},gap{1};
    std::string form;std::int32_t id{-1},mode{-1};int label_right{-1};std::string label_text; // label_right: -1 any, 0 empty, 1 non-empty, 2 exact text
    int frames{0},stable{1},timeout{600},depth{-1};bool optional{false};
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
        else throw std::invalid_argument("route line "+std::to_string(step.line)+": unknown condition "+name);
    }
    if(step.timeout<1||step.stable<1||step.repeat<1||step.gap<1||step.frames<0)throw std::invalid_argument("route line "+std::to_string(step.line)+": values must be positive");
}
inline std::vector<Step> parse(std::istream& input){
    std::vector<Step> steps;std::string raw;int line=0;
    while(std::getline(input,raw)){
        ++line;const auto hash=raw.find('#');if(hash!=std::string::npos)raw.resize(hash);
        std::istringstream words(raw);std::string verb;if(!(words>>verb))continue;
        Step step;step.line=line;step.text=raw;
        if(verb=="anchor"){step.op=Op::anchor;parse_conditions(step,words);}
        else if(verb=="end")step.op=Op::end;
        else if(verb=="key"){step.op=Op::key;if(!(words>>step.key)||!valid_key(step.key))throw std::invalid_argument("route line "+std::to_string(line)+": unknown key");parse_conditions(step,words);}
        else if(verb=="wait"){
            std::string first;if(!(words>>first))throw std::invalid_argument("route line "+std::to_string(line)+": wait needs a condition");
            if(first=="not"){std::string what;words>>what;if(what=="loading")step.op=Op::wait_not_loading;else if(what=="dialog")step.op=Op::wait_not_dialog;else throw std::invalid_argument("route line "+std::to_string(line)+": wait not loading|dialog");parse_conditions(step,words);}
            else{std::istringstream rest(first+" "+std::string(std::istreambuf_iterator<char>(words),{}));parse_conditions(step,rest);
                step.op=step.frames>0&&step.form.empty()&&step.id<0?Op::wait_frames:Op::wait_form;
                if(step.op==Op::wait_form&&step.form.empty()&&step.id<0&&step.mode<0&&step.label_right<0&&step.depth<0)throw std::invalid_argument("route line "+std::to_string(line)+": wait needs form/id/mode/label_right or frames");}
        }
        else if(verb=="expect"){step.op=Op::expect_form;parse_conditions(step,words);}
        else if(verb=="dismiss"){std::string until;words>>until;if(until!="until")throw std::invalid_argument("route line "+std::to_string(line)+": dismiss until <condition>");step.op=Op::dismiss_until;parse_conditions(step,words);}
        else throw std::invalid_argument("route line "+std::to_string(line)+": unknown verb "+verb);
        steps.push_back(step);
    }
    if(steps.empty()||steps.back().op!=Op::end)throw std::invalid_argument("route must finish with end");
    return steps;
}
inline bool ends_with(const std::string& text,const std::string& suffix){return text.size()>=suffix.size()&&text.compare(text.size()-suffix.size(),suffix.size(),suffix)==0;}
// Condition on the top form (form matches the type or its last dotted suffix).
inline bool matches(const Step& step,const UiState& state){
    if(step.depth>=0&&std::int32_t(state.stack.size())!=step.depth)return false;
    const auto* top=state.top();if(!top)return false;
    if(!step.form.empty()&&!(top->type==step.form||ends_with(top->type,"."+step.form)))return false;
    if(step.id>=0&&top->id!=step.id)return false;
    if(step.mode>=0&&top->mode!=step.mode)return false;
    if(step.label_right==0&&!top->right.empty())return false;
    if(step.label_right==1&&top->right.empty())return false;
    if(step.label_right==2&&top->right!=step.label_text)return false;
    return true;
}
struct Action {std::string key;bool anchor{};bool done{};bool timed_out{};int step{-1};std::string note;};
// One call per frame with the state captured at the end of the previous frame.
// At most one key per frame. Waits keep the step until the predicate holds.
class Runner {
public:
    explicit Runner(std::vector<Step> steps):steps_(std::move(steps)){}
    bool finished()const{return index_>=steps_.size();}
    std::size_t index()const{return index_;}
    const std::vector<Step>& steps()const{return steps_;}
    Action step(const UiState& state){
        Action action;
        while(!finished()){
            auto& s=steps_[index_];action.step=int(index_);
            if(started_<0)started_=std::int64_t(state.frame);
            const auto waited=std::int64_t(state.frame)-started_;
            auto advance=[&]{++index_;started_=-1;stable_=0;issued_=0;};
            // optional: a timeout logs a note and moves on instead of ending the route.
            auto timeout=[&]{action.note="timeout at line "+std::to_string(s.line)+": "+s.text;if(s.optional){advance();return action;}action.timed_out=true;index_=steps_.size();return action;};
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
                if(matches(s,state)){if(++stable_>=s.stable){advance();continue;}}else stable_=0;
                if(waited>s.timeout)return timeout();return action;
            case Op::wait_not_loading:
                if(!state.loading){if(++stable_>=s.stable){advance();continue;}}else stable_=0;
                if(waited>s.timeout)return timeout();return action;
            case Op::wait_not_dialog:
                if(!state.dialog){if(++stable_>=s.stable){advance();continue;}}else stable_=0;
                if(waited>s.timeout)return timeout();return action;
            case Op::expect_form:
                if(matches(s,state)){advance();continue;}
                action.timed_out=true;action.note="expect failed at line "+std::to_string(s.line)+": "+s.text;index_=steps_.size();return action;
            case Op::dismiss_until:
                if(matches(s,state)){advance();continue;}
                if(waited>s.timeout)return timeout();
                // Same rule as the frame-based dismissal: unlabeled SubForm -> SELECT, labeled -> SOFT2; every 18 frames.
                if(state.dialog&&waited%18==0){const auto* top=state.top();action.key=top->right.empty()?"SELECT":"SOFT2";}
                return action;
            }
        }
        action.done=true;return action;
    }
private:
    std::vector<Step> steps_;std::size_t index_{0};std::int64_t started_{-1};int stable_{0};int issued_{0};
};
inline std::vector<Step> load(const std::string& path){std::ifstream in(path,std::ios::binary);if(!in)throw std::invalid_argument("route file not readable: "+path);return parse(in);}
}
