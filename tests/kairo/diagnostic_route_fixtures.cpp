// Own fixture for the diagnostic route runner (no game executed).
#include "../../src/main/diagnostic_route.hpp"
#include <iostream>
#include <sstream>
using namespace pls::pc::route;
static int assertions=0;
static void check(bool condition,const char* what){++assertions;if(!condition){std::cerr<<"FAIL: "<<what<<'\n';std::exit(1);}}
static UiState state(std::uint64_t frame,std::vector<FormRow> stack){UiState s;s.frame=frame;s.stack=std::move(stack);derive(s);return s;}
static std::vector<Step> parse_text(const std::string& text){std::istringstream in(text);return parse(in);}
static bool parse_fails(const std::string& text){try{parse_text(text);}catch(const std::invalid_argument&){return true;}return false;}
int main(){
    // Parsing and validation.
    check(parse_fails(""),"empty route rejected");
    check(parse_fails("key SELECT\n"),"route without end rejected");
    check(parse_fails("key JUMP\nend\n"),"unknown key rejected");
    check(parse_fails("wait\nend\n"),"wait without condition rejected");
    check(parse_fails("wait colour=red\nend\n"),"unknown condition rejected");
    check(parse_fails("wait form=TitleForm timeout=0\nend\n"),"non-positive timeout rejected");
    check(parse_fails("dismiss form=X\nend\n"),"dismiss requires until");
    auto steps=parse_text("# comment\nanchor timeout=5\nwait form=TitleForm\nkey SELECT repeat=2 gap=3\nwait not loading stable=2\nwait frames=4\nexpect id=9\nend\n");
    check(steps.size()==7,"seven steps parsed");
    check(steps[0].op==Op::anchor&&steps[0].timeout==5,"anchor parsed");
    check(steps[1].op==Op::wait_form&&steps[1].form=="TitleForm","wait form parsed");
    check(steps[2].op==Op::key&&steps[2].repeat==2&&steps[2].gap==3,"key repeat parsed");
    check(steps[4].op==Op::wait_frames&&steps[4].frames==4,"wait frames parsed");
    // Derived flags.
    auto boot=state(1,{{"form.BootForm",0,2,"",""}});
    check(boot.loading&&!boot.dialog&&boot.main_window=="form.BootForm","boot is loading");
    auto dialog=state(2,{{"form.GameForm",9,3,"Save","Menu"},{"form.SubForm",4,3,"","Back"}});
    check(dialog.dialog&&!dialog.loading&&dialog.main_window=="form.GameForm","sub-window dialog over main window");
    auto pushing=state(3,{{"form.GameForm",9,3,"",""},{"form.SubForm",4,0,"",""}});
    check(pushing.loading,"form before Init counts as loading");
    // Runner: anchor, waits, keys with repeat/gap, frames, expect, end.
    Runner runner(steps);
    auto title=[](std::uint64_t f){return state(f,{{"form.TitleForm",1,3,"",""}});};
    auto a=runner.step(state(10,{{"form.BootForm",0,2,"",""}}));check(!a.anchor&&a.key.empty()&&!a.timed_out,"anchor waits for TitleForm");
    a=runner.step(title(11));check(a.anchor,"anchor fires on TitleForm");
    a=runner.step(title(12));check(a.key=="SELECT","wait form passes then first key in same frame");
    a=runner.step(title(13));check(a.key.empty(),"gap holds second key");
    a=runner.step(title(14));check(a.key.empty(),"gap still holding");
    a=runner.step(title(15));check(a.key=="SELECT","second key after gap");
    a=runner.step(state(16,{{"form.BootForm",0,2,"",""}}));check(a.key.empty()&&!a.done,"waiting for loading to end");
    a=runner.step(title(17));check(!a.done,"stable=2 needs a second frame");
    a=runner.step(title(18));check(!a.done&&a.key.empty(),"now waiting frames");
    a=runner.step(state(23,{{"form.GameForm",9,3,"",""}}));check(a.done&&!a.timed_out,"frames elapsed, expect id=9 holds, end");
    check(runner.finished(),"runner finished");
    // Timeout and failed expectation.
    Runner slow(parse_text("wait form=GameForm timeout=3\nend\n"));
    slow.step(title(1));slow.step(title(3));a=slow.step(title(5));check(a.timed_out&&slow.finished(),"wait times out");
    Runner wrong(parse_text("expect form=GameForm\nend\n"));
    a=wrong.step(title(1));check(a.timed_out,"failed expectation stops the route");
    // Form suffix match and soft label conditions.
    Runner labels(parse_text("wait form=SubForm label_right=Back\nwait label_right=-\nend\n"));
    a=labels.step(dialog);check(!a.done,"label Back matched, next condition pending");
    a=labels.step(state(5,{{"form.GameForm",9,3,"Save",""}}));check(a.done,"empty right label matched");
    // Condition-driven dismissal: unlabeled SubForm gets SELECT, labeled gets SOFT2.
    Runner dismiss(parse_text("dismiss until form=GameForm timeout=100\nend\n"));
    a=dismiss.step(state(0,{{"form.GameForm",9,3,"",""},{"form.SubForm",4,3,"",""}}));check(a.key=="SELECT","unlabeled dialog dismissed with SELECT");
    a=dismiss.step(state(18,{{"form.GameForm",9,3,"",""},{"form.SubForm",4,3,"","Back"}}));check(a.key=="SOFT2","labeled window dismissed with SOFT2");
    a=dismiss.step(state(20,{{"form.GameForm",9,3,"",""}}));check(a.done,"dismiss ends when the main form is on top");
    // Depth condition and optional timeout.
    Runner depth(parse_text("wait depth=2 timeout=2 optional\nwait depth=1\nend\n"));
    a=depth.step(title(1));a=depth.step(title(4));check(!a.timed_out&&a.note.find("timeout")!=std::string::npos,"optional timeout advances with a note");
    a=depth.step(title(5));check(a.done,"depth=1 matched after optional step");
    check(parse_text("wait depth=3 optional\nend\n")[0].optional,"optional parsed");
    // State line is valid-looking JSON with escaped text.
    auto line=to_line(state(7,{{"form.SubForm",4,3,"a\"b","c\\d"}}));
    check(line.find("a\\\"b")!=std::string::npos&&line.find("c\\\\d")!=std::string::npos,"labels escaped in state line");
    check(signature(state(1,{{"x",1,1,"",""}}))==signature(state(2,{{"x",1,1,"",""}})),"signature ignores frame");
    std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<assertions<<"}\n";
}
