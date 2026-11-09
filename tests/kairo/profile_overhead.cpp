#include "diagnostic_profile.hpp"
#include <iostream>
volatile std::uint32_t value=0;
#if defined(_MSC_VER)
#define OWN_NOINLINE __declspec(noinline)
#else
#define OWN_NOINLINE __attribute__((noinline))
#endif
OWN_NOINLINE void plain(){value=value+1u;}
OWN_NOINLINE void counted(){PLS_METHOD_SCOPE("Assembly-CSharp","M:Own.Counted",game);value=value+1u;}
int main(){using namespace pls::diagnostic;constexpr unsigned n=100000;for(unsigned pass=0;pass<7;++pass){
 auto measure=[&](auto function){const auto start=Clock::now();for(unsigned i=0;i<n;++i)function();return std::chrono::duration_cast<std::chrono::nanoseconds>(Clock::now()-start).count();};
 enabled=false;const auto baseline=measure(plain),disabled=measure(counted);enabled=true;const auto active=measure(counted);std::cout<<baseline<<','<<disabled<<','<<active<<','<<n<<'\n';
}return value==0?1:0;}
