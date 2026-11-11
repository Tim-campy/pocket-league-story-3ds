function(pls_ctr_thread_lifecycle target)
  if(NOT NINTENDO_3DS)
    message(FATAL_ERROR "CTR thread lifecycle must only be linked for Nintendo 3DS")
  endif()
  get_filename_component(port_root "${CMAKE_CURRENT_FUNCTION_LIST_DIR}/../.." ABSOLUTE)
  target_sources(${target} PRIVATE "${port_root}/src/runtime/ctr_thread_lifecycle.cpp")
  target_link_options(${target} PRIVATE
    "-Wl,--wrap=__cxa_thread_atexit"
    "-Wl,--wrap=__syscall_thread_create"
    "-Wl,--wrap=__syscall_thread_exit"
    "-Wl,--wrap=exit")
endfunction()
