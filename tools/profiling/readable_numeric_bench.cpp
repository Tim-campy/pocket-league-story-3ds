// Cost of the readable numeric types (criterion 5, item C1) on two hot kernels.
// Style "helpers": the current emission (add_i32, static_cast<double>, conv_i32).
// Style "types":   the readable emission (Int32 / Single / FloatEval operators).
// Same checked arrays in both styles, so only the numeric spelling differs.
// New code; kernel bodies follow the reconstructed C# of Team.GetSum and
// Team.Cal_evaCoatMulti9block (reference/src/Assembly-CSharp/game/Team.cs).
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <limits>
#include <stdexcept>
#include <vector>
#include "../../src/runtime/numeric_types.hpp"

namespace pls::cs {
void throw_divide_by_zero() { throw std::runtime_error("DivideByZeroException"); }
void throw_division_overflow() { throw std::runtime_error("OverflowException"); }
}  // namespace pls::cs
using pls::cs::Int32;
using pls::cs::Single;
using pls::cs::FloatEval;

#if defined(_MSC_VER)
#define NOINLINE __declspec(noinline)
#else
#define NOINLINE __attribute__((noinline))
#endif

// --- helpers exactly as src/kairo/common/semantic_runtime.hpp -------------
template <class To, class From> To bit_copy(From from) { To v; std::memcpy(&v, &from, sizeof v); return v; }
inline std::int32_t add_i32(std::int32_t a, std::int32_t b) {
    return bit_copy<std::int32_t>(static_cast<std::uint32_t>(static_cast<std::uint32_t>(a) + static_cast<std::uint32_t>(b)));
}
template <class To, class From> To conv_signed(From value) noexcept {
    if (std::isnan(value)) return std::numeric_limits<To>::min();  // UnityMono265
    const long double number = static_cast<long double>(value);
    constexpr long double lower = static_cast<long double>(std::numeric_limits<To>::min()), upper = -lower;
    if (number >= upper) return std::numeric_limits<To>::min();
    if (number < lower) return std::numeric_limits<To>::min();
    return static_cast<To>(value);
}
inline std::int32_t conv_i32(double v) noexcept { return conv_signed<std::int32_t>(v); }
namespace pls::cs { std::int32_t conv_i32(double v) noexcept { return ::conv_i32(v); } }
using pls::cs::to_int32;

template <class T> struct Arr {
    T* p; std::int32_t n;
    T& operator[](std::int32_t i) const { if (static_cast<std::uint32_t>(i) >= static_cast<std::uint32_t>(n)) throw std::out_of_range("IndexOutOfRange"); return p[i]; }
    T& operator[](Int32 i) const { return (*this)[i.value]; }
    std::int32_t length() const { return n; }
};

constexpr std::int32_t W = 15, H = 24;  // order of the coat grid
static const std::int32_t OFFSETS[9][2] = {{0,0},{-1,-1},{0,-1},{1,-1},{-1,0},{1,0},{-1,1},{0,1},{1,1}};

// --- GetSum --------------------------------------------------------------
NOINLINE std::int32_t GetSum_helpers(Arr<Arr<std::int32_t>> data, Arr<float> mp2, Arr<Arr<std::int32_t>> dir, std::int32_t cx, std::int32_t cy, bool div) {
    std::int32_t num = 0, num3{}, num4{};
    for (std::int32_t i = 0; i < mp2.length(); i = add_i32(i, 1)) {
        float num2 = static_cast<float>(1.0f);
        if (!div) num2 = static_cast<float>(mp2[i]);
        num3 = add_i32(cx, dir[i][0]);
        num4 = add_i32(cy, dir[i][1]);
        if (num3 >= 0 && num3 < W && num4 >= 0 && num4 < H)
            num = add_i32(num, conv_i32(static_cast<double>(static_cast<float>(data[num4][num3])) / static_cast<double>(num2)));
    }
    return num;
}
NOINLINE Int32 GetSum_types(Arr<Arr<Int32>> data, Arr<Single> mp2, Arr<Arr<Int32>> dir, Int32 cx, Int32 cy, bool div) {
    Int32 num = 0, num3, num4;
    for (Int32 i = 0; i < mp2.length(); ++i) {
        Single num2 = 1.0f;
        if (!div) num2 = mp2[i];
        num3 = cx + dir[i][0];
        num4 = cy + dir[i][1];
        if (num3 >= 0 && num3 < W && num4 >= 0 && num4 < H)
            num += to_int32(Single(data[num4][num3]) / num2);
    }
    return num;
}
// --- Cal_evaCoatMulti9block ------------------------------------------------
NOINLINE void Multi_helpers(Arr<Arr<std::int32_t>> data, Arr<Arr<std::int32_t>> dir, std::int32_t cx, std::int32_t cy, Arr<float> mp) {
    std::int32_t num{}, num2{};
    for (std::int32_t i = 0; i < dir.length(); i = add_i32(i, 1)) {
        num = add_i32(cx, dir[i][0]);
        num2 = add_i32(cy, dir[i][1]);
        if (num >= 0 && num < W && num2 >= 0 && num2 < H)
            data[num2][num] = conv_i32(static_cast<double>(static_cast<float>(data[num2][num])) * static_cast<double>(mp[i]));
    }
}
NOINLINE void Multi_types(Arr<Arr<Int32>> data, Arr<Arr<Int32>> dir, Int32 cx, Int32 cy, Arr<Single> mp) {
    Int32 num, num2;
    for (Int32 i = 0; i < dir.length(); ++i) {
        num = cx + dir[i][0];
        num2 = cy + dir[i][1];
        if (num >= 0 && num < W && num2 >= 0 && num2 < H)
            data[num2][num] = to_int32(Single(data[num2][num]) * mp[i]);
    }
}

template <class I, class F> struct Fixture {
    std::vector<std::vector<I>> rows; std::vector<Arr<I>> rowArr; std::vector<std::vector<I>> d; std::vector<Arr<I>> dArr; std::vector<F> mp;
    Arr<Arr<I>> data() { return {rowArr.data(), H}; }
    Arr<Arr<I>> dir() { return {dArr.data(), 9}; }
    Arr<F> m() { return {mp.data(), 9}; }
    Fixture() {
        rows.assign(H, std::vector<I>(W)); std::uint32_t s = 12345;
        for (auto& r : rows) for (auto& v : r) { s = s * 1103515245u + 12345u; v = I(std::int32_t(s >> 8) % 20000); }
        for (auto& r : rows) rowArr.push_back({r.data(), W});
        for (auto& o : OFFSETS) d.push_back({I(o[0]), I(o[1])});
        for (auto& r : d) dArr.push_back({r.data(), 2});
        const float f[9] = {1.0f, 0.75f, 0.6f, 0.75f, 0.6f, 0.6f, 0.75f, 0.6f, 0.75f};
        for (float x : f) mp.push_back(F(x));
    }
};
template <class T> std::int32_t raw(T v) { if constexpr (std::is_same_v<T, Int32>) return v.value; else return v; }

int main(int argc, char** argv) {
    const int calls = argc > 1 ? std::atoi(argv[1]) : 2000000;
    Fixture<std::int32_t, float> a; Fixture<Int32, Single> b;
    // Equivalence on every cell first.
    for (std::int32_t y = -1; y <= H; ++y) for (std::int32_t x = -1; x <= W; ++x) for (bool div : {false, true})
        if (GetSum_helpers(a.data(), a.m(), a.dir(), x, y, div) != GetSum_types(b.data(), b.m(), b.dir(), x, y, div).value) { std::printf("MISMATCH GetSum %d %d\n", x, y); return 1; }
    for (int pass = 0; pass < 3; ++pass) for (std::int32_t y = 0; y < H; ++y) for (std::int32_t x = 0; x < W; ++x) { Multi_helpers(a.data(), a.dir(), x, y, a.m()); Multi_types(b.data(), b.dir(), x, y, b.m()); }
    for (std::int32_t y = 0; y < H; ++y) for (std::int32_t x = 0; x < W; ++x) if (a.rows[y][x] != b.rows[y][x].value) { std::printf("MISMATCH Multi %d %d\n", x, y); return 1; }
    auto time = [&](auto&& f) { double best = 1e30; for (int rep = 0; rep < 7; ++rep) { auto t0 = std::chrono::steady_clock::now(); f(); double ns = std::chrono::duration<double, std::nano>(std::chrono::steady_clock::now() - t0).count() / calls; if (ns < best) best = ns; } return best; };
    volatile std::int64_t sink = 0;
    double g1 = time([&] { std::int64_t s = 0; for (int k = 0; k < calls; ++k) s += GetSum_helpers(a.data(), a.m(), a.dir(), k % W, (k / W) % H, false); sink = sink + s; });
    double g2 = time([&] { std::int64_t s = 0; for (int k = 0; k < calls; ++k) s += GetSum_types(b.data(), b.m(), b.dir(), k % W, (k / W) % H, false).value; sink = sink + s; });
    double m1 = time([&] { for (int k = 0; k < calls; ++k) Multi_helpers(a.data(), a.dir(), k % W, (k / W) % H, a.m()); });
    double m2 = time([&] { for (int k = 0; k < calls; ++k) Multi_types(b.data(), b.dir(), k % W, (k / W) % H, b.m()); });
    std::printf("{\"equivalent\":true,\"calls\":%d,\"GetSum_helpers_ns\":%.3f,\"GetSum_types_ns\":%.3f,\"Multi9_helpers_ns\":%.3f,\"Multi9_types_ns\":%.3f}\n", calls, g1, g2, m1, m2);
    return 0;
}
