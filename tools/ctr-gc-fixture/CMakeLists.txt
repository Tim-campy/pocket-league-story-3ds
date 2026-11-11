cmake_minimum_required(VERSION 3.20)
project(CtrGcFixture LANGUAGES C CXX ASM)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
get_filename_component(ROOT "${CMAKE_CURRENT_LIST_DIR}/../.." ABSOLUTE)
add_executable(tracing_gc_fixture
  "${ROOT}/src/runtime/tracing_gc.cpp"
  "${ROOT}/tests/translator/tracing_gc_fixtures.cpp"
  "${ROOT}/tests/translator/tracing_gc_register_arm.S")
target_include_directories(tracing_gc_fixture PRIVATE "${ROOT}/src/runtime")
target_compile_options(tracing_gc_fixture PRIVATE -O2 -g -fexceptions -frtti -fno-fast-math)
include("${ROOT}/tools/cmake/ctr_thread_lifecycle.cmake")
pls_ctr_thread_lifecycle(tracing_gc_fixture)
ctr_create_3dsx(tracing_gc_fixture NOSMDH)
add_executable(ctr_tls_lifecycle "${ROOT}/tests/translator/ctr_tls_lifecycle.cpp")
target_compile_options(ctr_tls_lifecycle PRIVATE -O2 -g)
pls_ctr_thread_lifecycle(ctr_tls_lifecycle)
ctr_create_3dsx(ctr_tls_lifecycle NOSMDH)
