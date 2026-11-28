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
    // Year-end "dismiss a player?" (SubForm 72): move to No, then confirm; never SELECT on Yes (it loops via list 31).
    {Runner fire(parse_text("dismiss until form=GameForm timeout=100\nend\n"));
        auto ask=state(0,{{"form.GameForm",9,3,"",""},{"form.SubForm",4,3,"",""}});ask.game.valid=true;ask.game.window=72;ask.game.window_select=0;
        a=fire.step(ask);check(a.key=="RIGHT","dismiss-player window: cursor on Yes moves to No");
        ask.frame=18;ask.game.window_select=1;a=fire.step(ask);check(a.key=="SELECT","dismiss-player window: No confirmed");
        Runner wait_fire(parse_text("wait map_state=0 timeout=100\nend\n"));ask.frame=0;ask.game.window_select=0;
        a=wait_fire.step(ask);check(a.key=="RIGHT","game-condition wait uses the same dismissal rule");
        auto coach=ask;coach.game.window=52;a=Runner(parse_text("dismiss until form=GameForm timeout=100\nend\n")).step(coach);check(a.key=="RIGHT","renew-coach window: cursor on Change moves to Renew");
        auto other=ask;other.game.window=31;a=Runner(parse_text("dismiss until form=GameForm timeout=100\nend\n")).step(other);check(a.key=="SELECT","other windows keep the SELECT rule");}
    Runner match(parse_text("dismiss until form=GameForm timeout=100\nend\n"));
    a=match.step(state(0,{{"form.SoccerForm",2,1,"L","R"}}));check(a.key=="SELECT","match screen without dialog gets SELECT (kickoff)");
    a=match.step(state(5,{{"form.SoccerForm",2,1,"L","R"}}));check(a.key.empty(),"match SELECT paced every 18 frames");
    // Depth condition and optional timeout.
    Runner depth(parse_text("wait depth=2 timeout=2 optional\nwait depth=1\nend\n"));
    a=depth.step(title(1));a=depth.step(title(4));check(!a.timed_out&&a.note.find("timeout")!=std::string::npos,"optional timeout advances with a note");
    a=depth.step(title(5));check(a.done,"depth=1 matched after optional step");
    check(parse_text("wait depth=3 optional\nend\n")[0].optional,"optional parsed");
    // when: conditional key, never waits.
    Runner when(parse_text("when depth=2 label_right=* key SELECT\nwhen depth=1 key SOFT2\nend\n"));
    a=when.step(dialog);check(a.key=="SELECT","when fires on matching state");
    a=when.step(dialog);check(a.key.empty()&&a.done,"when skips without waiting when not matching");
    check(parse_fails("when depth=1\nend\n"),"when without key rejected");
    // Touch and focus steps.
    Runner touch(parse_text("tap 120 140\nfocus off\nfocus on\nend\n"));
    a=touch.step(title(1));check(a.pointer_kind==0&&a.x==120&&a.y==140,"tap presses");
    a=touch.step(title(2));check(a.pointer_kind==-1,"tap holds");
    a=touch.step(title(3));check(a.pointer_kind==1&&a.x==120,"tap releases");
    a=touch.step(title(4));check(a.focus==0,"focus off");a=touch.step(title(5));check(a.focus==1,"focus on");
    check(parse_fails("tap 1\nend\n"),"tap needs X Y");
    Runner text(parse_text("type Sunrays\naccept\nend\n"));
    a=text.step(title(1));check(a.text=="Sunrays"&&!a.accept,"type sends text to the host panel");
    a=text.step(title(2));check(a.accept&&a.text.empty(),"accept confirms the host panel");
    check(parse_fails("type\nend\n"),"type needs text");
    Runner raw(parse_text("keydown HASH\nwait frames=2\nkeyup HASH\nend\n"));
    a=raw.step(title(1));check(a.raw=="HASH"&&a.raw_down,"keydown sends a physical key down");
    raw.step(title(2));raw.step(title(3));a=raw.step(title(4));check(a.raw=="HASH"&&!a.raw_down,"keyup sends the key up after the wait");
    check(parse_fails("keydown F1\nend\n"),"keydown rejects unknown physical keys");
    // State line is valid-looking JSON with escaped text.
    auto line=to_line(state(7,{{"form.SubForm",4,3,"a\"b","c\\d"}}));
    check(line.find("a\\\"b")!=std::string::npos&&line.find("c\\\\d")!=std::string::npos,"labels escaped in state line");
    check(signature(state(1,{{"x",1,1,"",""}}))==signature(state(2,{{"x",1,1,"",""}})),"signature ignores frame");
    // Game-aware verbs and conditions (map snapshot filled by the host).
    check(parse_fails("cursor to\nend\n"),"cursor to needs tenant");
    check(parse_fails("hold X frames=2\nend\n"),"hold accepts only L or R");
    check(parse_fails("hold R\nend\n"),"hold needs frames");
    check(parse_fails("expect money=lots\nend\n"),"money needs a known comparison");
    check(parse_fails("expect tenant_state=0\nend\n"),"tenant_state needs tenant");
    check(!parse_fails("wait scale=100\nend\n"),"wait accepts a game condition alone");
    // map(frame, cursor address x, y, selected, money, tenant state); tenant 6 covers cells x 10..11, y 4..5.
    auto map=[](std::uint64_t f,std::int32_t ax,std::int32_t ay,std::int32_t selected,std::int64_t money,std::int32_t tenant_state){
        auto s=state(f,{{"form.GameForm",9,3,"Save","Menu"}});auto& g=s.game;g.valid=true;g.map_state=0;g.scale=100;
        g.cursor_ax=ax;g.cursor_ay=ay;g.cursor_x=float(ax);g.selected=selected;g.money=money;g.tenants={{6,tenant_state,10,5,40}};return s;};
    const TenantRow six{6,1,10,5,40};
    check(steer_key(map(0,8,2,-1,0,1).game,six,false)=="RIGHT","below-left in both cells: RIGHT");
    check(steer_key(map(0,13,7,-1,0,1).game,six,false)=="LEFT","beyond in both cells: LEFT");
    // One cell off in x only needs UP and LEFT together: ties alternate between the two keys.
    check(steer_key(map(0,12,4,-1,0,1).game,six,true)=="UP"&&steer_key(map(0,12,4,-1,0,1).game,six,false)=="LEFT","too far in x only: UP/LEFT alternate");
    check(steer_key(map(0,10,7,-1,0,1).game,six,true)=="DOWN"&&steer_key(map(0,10,7,-1,0,1).game,six,false)=="LEFT","too far in y only: DOWN/LEFT alternate");
    check(steer_key(map(0,8,9,-1,0,1).game,six,false)=="DOWN","y error larger than x error: DOWN wins");
    check(steer_key(map(0,11,4,-1,0,1).game,six,false).empty(),"inside the tenant cells: no key");
    Runner steer(parse_text("cursor to tenant=6 timeout=50\nexpect selected=6\nend\n"));
    a=steer.step(map(1,8,2,-1,0,1));check(a.key=="RIGHT","cursor to presses the steering key");
    a=steer.step(map(2,11,4,6,0,1));check(a.done&&!a.timed_out,"cursor to ends when the game selects the tenant");
    Runner popped(parse_text("cursor to tenant=6 timeout=50\nend\n"));
    {auto s=map(1,8,2,-1,0,1);s.stack.push_back({"form.SubForm",4,1,"",""});derive(s);a=popped.step(s);}
    check(a.key=="SELECT","cursor to closes an unlabeled game popup first");
    Runner lost(parse_text("cursor to tenant=6 timeout=3\nend\n"));
    for(std::uint64_t f=10;f<15;++f)a=lost.step(map(f,8,2,-1,0,1));
    check(a.timed_out&&a.note.find("did not reach")!=std::string::npos,"cursor to fails when selection never happens");
    Runner unknown(parse_text("cursor to tenant=7\nend\n"));
    a=unknown.step(map(1,0,0,-1,0,1));check(a.timed_out&&a.note.find("unknown tenant")!=std::string::npos,"cursor to fails on an unknown tenant");
    Runner money(parse_text("mark\nwait tenant=6 tenant_state=0 timeout=5\nexpect money=less\nend\n"));
    a=money.step(map(1,0,0,-1,1000,1));check(a.key.empty()&&!a.timed_out,"mark stores money, wait holds");
    a=money.step(map(2,0,0,-1,900,0));check(a.done&&!a.timed_out,"tenant state and money condition pass");
    Runner same(parse_text("mark\nexpect money=less\nend\n"));
    a=same.step(map(1,0,0,-1,1000,1));check(a.timed_out&&a.note.find("expect failed")!=std::string::npos,"unchanged money fails expect");
    Runner hold(parse_text("hold R frames=2\nend\n"));
    a=hold.step(map(1,0,0,-1,0,1));check(a.zoom==1,"hold R first frame");
    a=hold.step(map(2,0,0,-1,0,1));check(a.zoom==1,"hold R second frame");
    a=hold.step(map(3,0,0,-1,0,1));check(a.zoom==2,"hold releases after its frames");
    Runner ui(parse_text("expect scale=100\nend\n"));
    a=ui.step(state(1,{{"form.TitleForm",1,3,"",""}}));check(a.timed_out,"game condition fails without a map snapshot");
    Runner stall(parse_text("watchdog frames=3\nwait tenant=6 tenant_state=0 timeout=100\nend\n"));
    for(std::uint64_t f=1;f<=5&&!a.done;++f)a=stall.step(map(f,0,0,-1,0,1));
    check(a.timed_out&&a.note.find("stalled")!=std::string::npos,"watchdog fails a wait with no state change");
    Runner moving(parse_text("watchdog frames=3\nwait tenant=6 tenant_state=0 timeout=100\nend\n"));
    a={};for(std::uint64_t f=1;f<=6;++f)a=moving.step(map(f,std::int32_t(f),0,-1,0,1));
    check(!a.timed_out&&!a.done,"watchdog tolerates a changing state");
    check(Runner(parse_text("cursor to tenant=6\nend\n")).uses_game()&&!Runner(parse_text("wait frames=2\nend\n")).uses_game(),"uses_game detects game-aware routes");
    check(to_line(map(1,0,0,-1,0,1))==to_line(state(1,{{"form.GameForm",9,3,"Save","Menu"}})),"UI state line ignores the game snapshot");
    check(parse_fails("hold CP x=32768 frames=2\nend\n"),"stick rejects out of range");
    check(parse_fails("expect hidden=maybe\nend\n"),"hidden accepts only boolean");
    Runner analog(parse_text("hold CP x=32767 y=-123 frames=2\nhold CS x=-321 frames=1\nend\n"));
    a=analog.step(map(1,0,0,-1,0,1));check(a.stick=="CP"&&a.axis_x==32767&&a.axis_y==-123,"CP first sample");
    a=analog.step(map(2,0,0,-1,0,1));check(a.stick=="CP"&&a.axis_x==32767,"CP held sample");
    a=analog.step(map(3,0,0,-1,0,1));check(a.stick=="CP"&&!a.axis_x&&!a.axis_y,"CP release");
    a=analog.step(map(4,0,0,-1,0,1));check(a.stick=="CS"&&a.axis_x==-321,"CS sample");
    a=analog.step(map(5,0,0,-1,0,1));check(a.stick=="CS"&&!a.axis_x,"CS release");
    Runner motion(parse_text("mark\nwait frames=1\nexpect cursor=same camera=changed selected=same hidden=false\nend\n"));
    auto initial=map(1,1,2,6,100,1);motion.step(initial);initial.frame=2;initial.game.camera_x=5;a=motion.step(initial);check(a.done&&!a.timed_out,"camera moves independently");
    Runner mismatch(parse_text("mark\nwait frames=1\nexpect cursor=same\nend\n"));
    initial=map(1,1,2,6,100,1);mismatch.step(initial);initial.frame=2;initial.game.cursor_x+=1;a=mismatch.step(initial);check(a.timed_out,"changed cursor fails same assertion");
    Runner bounded(parse_text("hold RIGHT frames=3 hidden=false max_pan=6\nend\n"));
    initial=map(1,0,0,-1,0,1);bounded.step(initial);initial.frame=2;initial.game.camera_x=7;a=bounded.step(initial);
    check(a.timed_out,"edge scenario rejects camera jumps");
    Runner hiddenHold(parse_text("hold RIGHT frames=3 hidden=false\nend\n"));
    initial=map(1,0,0,-1,0,1);hiddenHold.step(initial);initial.frame=2;initial.game.cursor_hidden=true;a=hiddenHold.step(initial);
    check(a.timed_out,"edge scenario rejects hidden cursor during movement");
    std::cout<<"{\"status\":\"PASS\",\"assertions\":"<<assertions<<"}\n";
}
