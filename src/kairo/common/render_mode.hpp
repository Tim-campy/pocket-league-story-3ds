#pragma once
namespace pls::kairo {
#if defined(PLS_NULL_BACKEND)
inline constexpr bool null_render_backend=true;
#else
inline constexpr bool null_render_backend=false;
#endif
}
