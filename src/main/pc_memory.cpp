#include "pc_memory.hpp"
#include <algorithm>
#include <limits>
#include <stdexcept>
#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <psapi.h>
#include <limits>
#include <vector>
#endif
namespace pls::pc {
KnownMemory sample_known_memory(const std::vector<MemoryRange>&ranges){
    KnownMemory result;
    for(std::size_t category=0;category<4;++category){
        std::vector<std::pair<std::uintptr_t,std::uintptr_t>>intervals,merged;
        for(const auto&range:ranges)if(static_cast<std::size_t>(range.category)==category&&range.data&&range.bytes){
            const auto begin=reinterpret_cast<std::uintptr_t>(range.data);
            if(range.bytes>std::numeric_limits<std::uintptr_t>::max()-begin)throw std::overflow_error("Invalid memory extent");
            intervals.emplace_back(begin,begin+range.bytes);
        }
        std::sort(intervals.begin(),intervals.end());
        for(const auto&range:intervals){if(!merged.empty()&&range.first<=merged.back().second)merged.back().second=std::max(merged.back().second,range.second);else merged.push_back(range);}
        std::uint64_t capacity=0;for(const auto&range:merged)capacity+=range.second-range.first;result.capacity_bytes[category]=capacity;
#ifdef _WIN32
        SYSTEM_INFO info{};GetSystemInfo(&info);std::uint64_t resident=0;bool complete=true;
        for(const auto&range:merged){auto begin=range.first;
            while(begin<range.second){const auto page=begin-begin%info.dwPageSize;const auto end=std::min(range.second,page+info.dwPageSize);
                PSAPI_WORKING_SET_EX_INFORMATION state{};state.VirtualAddress=reinterpret_cast<void*>(page);
                if(!QueryWorkingSetEx(GetCurrentProcess(),&state,sizeof(state))){complete=false;break;}
                if(state.VirtualAttributes.Valid)resident+=end-begin;begin=end;
            }if(!complete)break;
        }
        if(complete)result.resident_payload_bytes[category]=resident;
#endif
    }return result;
}
ProcessMemory sample_process_memory(){
    ProcessMemory result;
#ifdef _WIN32
    result.platform="Windows SDK GetProcessMemoryInfo/VirtualQuery/QueryWorkingSetEx";
    SYSTEM_INFO info{};GetSystemInfo(&info);result.page_bytes=info.dwPageSize;
    const auto process=GetCurrentProcess();PROCESS_MEMORY_COUNTERS_EX counters{};counters.cb=sizeof(counters);
    if(GetProcessMemoryInfo(process,reinterpret_cast<PROCESS_MEMORY_COUNTERS*>(&counters),sizeof(counters))){
        result.resident_bytes=counters.WorkingSetSize;result.peak_resident_bytes=counters.PeakWorkingSetSize;result.private_commit_bytes=counters.PrivateUsage;
    }else result.diagnostic="GetProcessMemoryInfo failed: "+std::to_string(GetLastError());
    std::vector<PSAPI_WORKING_SET_EX_INFORMATION> pages;pages.reserve(1024);
    std::uint64_t committed=0,resident=0;bool valid=true;
    auto query=[&]{if(pages.empty())return true;
        if(!QueryWorkingSetEx(process,pages.data(),static_cast<DWORD>(pages.size()*sizeof(pages[0]))))return false;
        for(const auto&page:pages)if(page.VirtualAttributes.Valid)resident+=result.page_bytes;
        pages.clear();return true;};
    auto address=reinterpret_cast<std::uintptr_t>(info.lpMinimumApplicationAddress);
    const auto maximum=reinterpret_cast<std::uintptr_t>(info.lpMaximumApplicationAddress);
    while(address<maximum){MEMORY_BASIC_INFORMATION region{};
        if(VirtualQuery(reinterpret_cast<const void*>(address),&region,sizeof(region))!=sizeof(region)){valid=false;break;}
        const DWORD protection=region.Protect&0xffu;
        const bool executable=protection==PAGE_EXECUTE||protection==PAGE_EXECUTE_READ||protection==PAGE_EXECUTE_READWRITE||protection==PAGE_EXECUTE_WRITECOPY;
        const auto begin=reinterpret_cast<std::uintptr_t>(region.BaseAddress);
        if(region.State==MEM_COMMIT&&region.Type==MEM_IMAGE&&executable){
            committed+=region.RegionSize;
            for(std::uintptr_t offset=0;offset<region.RegionSize;offset+=static_cast<std::uintptr_t>(result.page_bytes)){
                PSAPI_WORKING_SET_EX_INFORMATION page{};page.VirtualAddress=reinterpret_cast<void*>(begin+offset);pages.push_back(page);
                if(pages.size()==1024&&!query()){valid=false;break;}
            }
            if(!valid)break;
        }
        if(region.RegionSize==0||begin>std::numeric_limits<std::uintptr_t>::max()-region.RegionSize){valid=false;break;}
        address=begin+region.RegionSize;
    }
    if(valid)valid=query();
    if(valid){result.executable_image_committed_bytes=committed;result.executable_image_resident_bytes=resident;}
    else{if(!result.diagnostic.empty())result.diagnostic+="; ";result.diagnostic+="Executable image page sampling failed: "+std::to_string(GetLastError());}
#else
    result.platform="unsupported";result.diagnostic="Process memory sampling is not implemented for this platform";
#endif
    return result;
}
}
