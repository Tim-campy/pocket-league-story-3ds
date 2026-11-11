// Local diagnostic debugger; no game payloads or dumps are published.
#define NOMINMAX
#include <windows.h>
#include <dbghelp.h>
#include <tlhelp32.h>
#include <cstdio>
#include <cwchar>
#include <vector>
#include <cstring>
#include <cstdint>
static bool requested_exception(HANDLE process,const EXCEPTION_RECORD& record){
    // MSVC x64 ThrowInfo and CatchableType store image-relative RVAs. Filter
    // before symbolizing: generated ReturnFlow throws are ordinary control flow.
    char filter[128];if(!GetEnvironmentVariableA("PLS_DEBUG_EXCEPTION_TYPE",filter,sizeof(filter)))return true;
    if(record.NumberParameters<4)return false;
    const auto base=record.ExceptionInformation[3];std::uint32_t table=0,type=0,name=0;
    auto read=[&](ULONG_PTR at,void* output,SIZE_T size){return ReadProcessMemory(process,reinterpret_cast<const void*>(at),output,size,nullptr)!=FALSE;};
    if(!read(record.ExceptionInformation[2]+12,&table,4)||!read(base+table+4,&type,4)||!read(base+type+4,&name,4))return false;
    char text[512]{};if(!read(base+name+16,text,sizeof(text)-1))return false;
    return std::strstr(text,filter)!=nullptr;
}
static void stack(HANDLE process,DWORD tid){
    HANDLE thread=OpenThread(THREAD_GET_CONTEXT|THREAD_QUERY_INFORMATION,FALSE,tid);
    if(!thread)return;
    CONTEXT context{};context.ContextFlags=CONTEXT_FULL;
    if(GetThreadContext(thread,&context)){
        std::printf("THREAD %lu RIP=%llx RSP=%llx RCX=%llx RDX=%llx\n",tid,context.Rip,context.Rsp,context.Rcx,context.Rdx);
        STACKFRAME64 frame{};frame.AddrPC={context.Rip,0,AddrModeFlat};
        frame.AddrStack={context.Rsp,0,AddrModeFlat};frame.AddrFrame={context.Rbp,0,AddrModeFlat};
        for(int i=0;i<60&&frame.AddrPC.Offset;++i){
            alignas(SYMBOL_INFO) unsigned char bytes[sizeof(SYMBOL_INFO)+2048]{};
            auto symbol=reinterpret_cast<SYMBOL_INFO*>(bytes);symbol->SizeOfStruct=sizeof(SYMBOL_INFO);symbol->MaxNameLen=2048;
            DWORD64 offset=0;IMAGEHLP_LINE64 line{};line.SizeOfStruct=sizeof(line);DWORD lineoffset=0;
            std::printf("  %016llx ",frame.AddrPC.Offset);
            if(SymFromAddr(process,frame.AddrPC.Offset,&offset,symbol))std::printf("%s+%llu",symbol->Name,offset);
            if(SymGetLineFromAddr64(process,frame.AddrPC.Offset,&lineoffset,&line))std::printf(" %s:%lu",line.FileName,line.LineNumber);
            std::printf("\n");
            if(!StackWalk64(IMAGE_FILE_MACHINE_AMD64,process,thread,&frame,&context,nullptr,SymFunctionTableAccess64,SymGetModuleBase64,nullptr))break;
        }
    }
    CloseHandle(thread);
}
int wmain(){
    auto command=std::wcsstr(GetCommandLineW(),L" -- ");if(!command)return 2;command+=4;
    std::vector<wchar_t> mutable_command(command,command+std::wcslen(command)+1);
    STARTUPINFOW startup{};startup.cb=sizeof(startup);PROCESS_INFORMATION child{};
    startup.dwFlags=STARTF_USESTDHANDLES;startup.hStdOutput=GetStdHandle(STD_OUTPUT_HANDLE);startup.hStdError=GetStdHandle(STD_ERROR_HANDLE);startup.hStdInput=GetStdHandle(STD_INPUT_HANDLE);
    for(auto handle:{startup.hStdInput,startup.hStdOutput,startup.hStdError})if(handle&&handle!=INVALID_HANDLE_VALUE)SetHandleInformation(handle,HANDLE_FLAG_INHERIT,HANDLE_FLAG_INHERIT);
    if(!CreateProcessW(nullptr,mutable_command.data(),nullptr,nullptr,TRUE,DEBUG_ONLY_THIS_PROCESS|CREATE_NO_WINDOW,nullptr,nullptr,&startup,&child))return 3;
    const auto deadline=GetTickCount64()+90000;
    int result=0;
    while(GetTickCount64()<deadline){
        DEBUG_EVENT event{};if(!WaitForDebugEvent(&event,1000))continue;
        DWORD action=DBG_CONTINUE;
        if(event.dwDebugEventCode==EXCEPTION_DEBUG_EVENT){
            auto& ex=event.u.Exception.ExceptionRecord;
            wchar_t trace_flag[2];
            if(ex.ExceptionCode==0xe06d7363&&event.u.Exception.dwFirstChance&&GetEnvironmentVariableW(L"PLS_DEBUG_CPP_EXCEPTIONS",trace_flag,2)&&requested_exception(child.hProcess,ex)){
                SymSetOptions(SYMOPT_LOAD_LINES|SYMOPT_UNDNAME|SYMOPT_DEFERRED_LOADS);SymInitialize(child.hProcess,nullptr,TRUE);
                std::puts("CPP FIRST CHANCE");stack(child.hProcess,event.dwThreadId);SymCleanup(child.hProcess);std::fflush(stdout);
            }
            if(ex.ExceptionCode==EXCEPTION_ACCESS_VIOLATION||!event.u.Exception.dwFirstChance){
                std::printf("EXCEPTION code=%08lx address=%p chance=%lu info=%llu,%llx\n",ex.ExceptionCode,ex.ExceptionAddress,event.u.Exception.dwFirstChance,ex.ExceptionInformation[0],ex.ExceptionInformation[1]);
                SymSetOptions(SYMOPT_LOAD_LINES|SYMOPT_UNDNAME|SYMOPT_DEFERRED_LOADS);
                SymInitialize(child.hProcess,nullptr,TRUE);
                HANDLE threads=CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD,0);THREADENTRY32 row{};row.dwSize=sizeof(row);
                if(Thread32First(threads,&row))do{if(row.th32OwnerProcessID==child.dwProcessId)stack(child.hProcess,row.th32ThreadID);}while(Thread32Next(threads,&row));
                CloseHandle(threads);SymCleanup(child.hProcess);std::fflush(stdout);
                TerminateProcess(child.hProcess,0xe0000001);result=1;
                ContinueDebugEvent(event.dwProcessId,event.dwThreadId,DBG_CONTINUE);break;
            }
            if(ex.ExceptionCode!=EXCEPTION_BREAKPOINT)action=DBG_EXCEPTION_NOT_HANDLED;
        }
        if(event.dwDebugEventCode==LOAD_DLL_DEBUG_EVENT&&event.u.LoadDll.hFile)CloseHandle(event.u.LoadDll.hFile);
        if(event.dwDebugEventCode==CREATE_PROCESS_DEBUG_EVENT&&event.u.CreateProcessInfo.hFile)CloseHandle(event.u.CreateProcessInfo.hFile);
        if(event.dwDebugEventCode==EXIT_PROCESS_DEBUG_EVENT){result=int(event.u.ExitProcess.dwExitCode);std::printf("EXIT %lu\n",event.u.ExitProcess.dwExitCode);break;}
        ContinueDebugEvent(event.dwProcessId,event.dwThreadId,action);
    }
    if(GetTickCount64()>=deadline){std::puts("TIMEOUT");TerminateProcess(child.hProcess,0xe0000002);result=2;}
    WaitForSingleObject(child.hProcess,5000);CloseHandle(child.hThread);CloseHandle(child.hProcess);return result;
}
