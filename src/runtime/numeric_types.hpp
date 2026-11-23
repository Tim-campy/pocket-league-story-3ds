#pragma once
// Readable numeric types (criterion 5, item C1): C# arithmetic written with
// ordinary operators. New implementation; no original code or assets.
//
//   Int32   : two's-complement wrap on + - * (unchecked C#), DivideByZero and
//             Overflow on / % (int.MinValue / -1), shifts masked to 5 bits.
//   Single  : storage of a C# float. Arithmetic is evaluated in binary64 (the
//             mono-arm-vfp rule, docs/notes/mono-arm-float-rule.md) and yields a
//             FloatEval; storing a FloatEval into a Single narrows to binary32,
//             as Mono ARM does on stores, arguments and returns.
//   FloatEval : a float-typed C# expression in flight (binary64, not narrowed).
//
// Layout: Int32 and Single are standard-layout wrappers of exactly one scalar,
// so they cost nothing at -O2 (measured: docs/notes/readable-numeric-cost.md).
#include <cmath>
#include <cstdint>
#include <limits>
#include <type_traits>

namespace pls::cs {
[[noreturn]] void throw_divide_by_zero();
[[noreturn]] void throw_division_overflow();

struct Int32 {
    std::int32_t value{};
    constexpr Int32() = default;
    constexpr Int32(std::int32_t v) noexcept : value(v) {}  // literals and int results
    // Implicit both ways: flows into runtime APIs that take std::int32_t; the mixed
    // overloads below keep `Int32 op int` on the wrapping operators.
    constexpr operator std::int32_t() const noexcept { return value; }
    constexpr std::int32_t raw() const noexcept { return value; }

    static constexpr std::int32_t wrap(std::uint32_t bits) noexcept {
        return bits <= 0x7fffffffu ? static_cast<std::int32_t>(bits)
                                   : static_cast<std::int32_t>(bits - 0x80000000u) - 0x7fffffff - 1;
    }
    friend constexpr Int32 operator+(Int32 a, Int32 b) noexcept {
        return wrap(static_cast<std::uint32_t>(a.value) + static_cast<std::uint32_t>(b.value));
    }
    friend constexpr Int32 operator-(Int32 a, Int32 b) noexcept {
        return wrap(static_cast<std::uint32_t>(a.value) - static_cast<std::uint32_t>(b.value));
    }
    friend constexpr Int32 operator*(Int32 a, Int32 b) noexcept {
        return wrap(static_cast<std::uint32_t>(a.value) * static_cast<std::uint32_t>(b.value));
    }
    friend Int32 operator/(Int32 a, Int32 b) {
        if (b.value == 0) throw_divide_by_zero();
        if (a.value == std::numeric_limits<std::int32_t>::min() && b.value == -1) throw_division_overflow();
        return a.value / b.value;
    }
    friend Int32 operator%(Int32 a, Int32 b) {
        if (b.value == 0) throw_divide_by_zero();
        if (a.value == std::numeric_limits<std::int32_t>::min() && b.value == -1) throw_division_overflow();
        return a.value % b.value;
    }
    friend constexpr Int32 operator-(Int32 a) noexcept { return Int32(0) - a; }
    friend constexpr Int32 operator&(Int32 a, Int32 b) noexcept { return a.value & b.value; }
    friend constexpr Int32 operator|(Int32 a, Int32 b) noexcept { return a.value | b.value; }
    friend constexpr Int32 operator^(Int32 a, Int32 b) noexcept { return a.value ^ b.value; }
    friend constexpr Int32 operator~(Int32 a) noexcept { return ~a.value; }
    friend constexpr Int32 operator<<(Int32 a, Int32 n) noexcept {
        return wrap(static_cast<std::uint32_t>(a.value) << (static_cast<std::uint32_t>(n.value) & 31u));
    }
    friend constexpr Int32 operator>>(Int32 a, Int32 n) noexcept {
        // Arithmetic shift (C# int >>); implementation-defined before C++20 but
        // arithmetic on every supported compiler (MSVC, GCC/devkitARM), checked below.
        return a.value >> (static_cast<std::uint32_t>(n.value) & 31u);
    }
    Int32& operator+=(Int32 b) noexcept { return *this = *this + b; }
    Int32& operator-=(Int32 b) noexcept { return *this = *this - b; }
    Int32& operator*=(Int32 b) noexcept { return *this = *this * b; }
    Int32& operator/=(Int32 b) { return *this = *this / b; }
    Int32& operator%=(Int32 b) { return *this = *this % b; }
    Int32& operator&=(Int32 b) noexcept { return *this = *this & b; }
    Int32& operator|=(Int32 b) noexcept { return *this = *this | b; }
    Int32& operator^=(Int32 b) noexcept { return *this = *this ^ b; }
    Int32& operator<<=(Int32 b) noexcept { return *this = *this << b; }
    Int32& operator>>=(Int32 b) noexcept { return *this = *this >> b; }
    Int32& operator++() noexcept { return *this += 1; }
    Int32& operator--() noexcept { return *this -= 1; }
    Int32 operator++(int) noexcept { Int32 old = *this; *this += 1; return old; }
    Int32 operator--(int) noexcept { Int32 old = *this; *this -= 1; return old; }
    friend constexpr bool operator==(Int32 a, Int32 b) noexcept { return a.value == b.value; }
    friend constexpr bool operator!=(Int32 a, Int32 b) noexcept { return a.value != b.value; }
    friend constexpr bool operator<(Int32 a, Int32 b) noexcept { return a.value < b.value; }
    friend constexpr bool operator<=(Int32 a, Int32 b) noexcept { return a.value <= b.value; }
    friend constexpr bool operator>(Int32 a, Int32 b) noexcept { return a.value > b.value; }
    friend constexpr bool operator>=(Int32 a, Int32 b) noexcept { return a.value >= b.value; }
};
static_assert(std::is_standard_layout_v<Int32> && sizeof(Int32) == sizeof(std::int32_t) && alignof(Int32) == alignof(std::int32_t));
// Mixed with a plain integer of at most 32 bits (int, std::int32_t -- which is
// `long` on devkitARM --, char16_t, short, byte): exact template match, so it
// wins over the built-in operator reached through Int32's conversion.
template <class T>
using if_small_integer = std::enable_if_t<std::is_integral_v<T> && !std::is_same_v<T, bool> && (sizeof(T) < 4 || (sizeof(T) == 4 && std::is_signed_v<T>)), int>;
#define PLS_CS_INT32_MIXED(op, R)                                                                       template <class T, if_small_integer<T> = 0> constexpr R operator op(Int32 a, T b) { return a op Int32(static_cast<std::int32_t>(b)); }     template <class T, if_small_integer<T> = 0> constexpr R operator op(T a, Int32 b) { return Int32(static_cast<std::int32_t>(a)) op b; }
PLS_CS_INT32_MIXED(+, Int32)
PLS_CS_INT32_MIXED(-, Int32)
PLS_CS_INT32_MIXED(*, Int32)
PLS_CS_INT32_MIXED(/, Int32)
PLS_CS_INT32_MIXED(%, Int32)
PLS_CS_INT32_MIXED(&, Int32)
PLS_CS_INT32_MIXED(|, Int32)
PLS_CS_INT32_MIXED(^, Int32)
PLS_CS_INT32_MIXED(<<, Int32)
PLS_CS_INT32_MIXED(>>, Int32)
PLS_CS_INT32_MIXED(==, bool)
PLS_CS_INT32_MIXED(!=, bool)
PLS_CS_INT32_MIXED(<, bool)
PLS_CS_INT32_MIXED(<=, bool)
PLS_CS_INT32_MIXED(>, bool)
PLS_CS_INT32_MIXED(>=, bool)
#undef PLS_CS_INT32_MIXED
static_assert((-8 >> 1) == -4, "arithmetic right shift required");

// Int64: C# long, the same rules as Int32 at 64 bits (A.2, 2026-11-22).
struct Int64 {
    std::int64_t value{};
    constexpr Int64() = default;
    constexpr Int64(std::int64_t v) noexcept : value(v) {}
    constexpr Int64(Int32 v) noexcept : value(v.value) {}  // int -> long widens implicitly
    constexpr operator std::int64_t() const noexcept { return value; }
    constexpr std::int64_t raw() const noexcept { return value; }
    static constexpr std::int64_t wrap(std::uint64_t bits) noexcept {
        return bits <= 0x7fffffffffffffffull ? static_cast<std::int64_t>(bits)
                                             : static_cast<std::int64_t>(bits - 0x8000000000000000ull) - 0x7fffffffffffffffll - 1;
    }
    friend constexpr Int64 operator+(Int64 a, Int64 b) noexcept { return wrap(static_cast<std::uint64_t>(a.value) + static_cast<std::uint64_t>(b.value)); }
    friend constexpr Int64 operator-(Int64 a, Int64 b) noexcept { return wrap(static_cast<std::uint64_t>(a.value) - static_cast<std::uint64_t>(b.value)); }
    friend constexpr Int64 operator*(Int64 a, Int64 b) noexcept { return wrap(static_cast<std::uint64_t>(a.value) * static_cast<std::uint64_t>(b.value)); }
    friend Int64 operator/(Int64 a, Int64 b) {
        if (b.value == 0) throw_divide_by_zero();
        if (a.value == std::numeric_limits<std::int64_t>::min() && b.value == -1) throw_division_overflow();
        return a.value / b.value;
    }
    friend Int64 operator%(Int64 a, Int64 b) {
        if (b.value == 0) throw_divide_by_zero();
        if (a.value == std::numeric_limits<std::int64_t>::min() && b.value == -1) throw_division_overflow();
        return a.value % b.value;
    }
    friend constexpr Int64 operator-(Int64 a) noexcept { return Int64(0) - a; }
    friend constexpr Int64 operator&(Int64 a, Int64 b) noexcept { return a.value & b.value; }
    friend constexpr Int64 operator|(Int64 a, Int64 b) noexcept { return a.value | b.value; }
    friend constexpr Int64 operator^(Int64 a, Int64 b) noexcept { return a.value ^ b.value; }
    friend constexpr Int64 operator~(Int64 a) noexcept { return ~a.value; }
    friend constexpr Int64 operator<<(Int64 a, Int32 n) noexcept { return wrap(static_cast<std::uint64_t>(a.value) << (static_cast<std::uint32_t>(n.value) & 63u)); }
    friend constexpr Int64 operator>>(Int64 a, Int32 n) noexcept { return a.value >> (static_cast<std::uint32_t>(n.value) & 63u); }
    Int64& operator+=(Int64 b) noexcept { return *this = *this + b; }
    Int64& operator-=(Int64 b) noexcept { return *this = *this - b; }
    Int64& operator*=(Int64 b) noexcept { return *this = *this * b; }
    Int64& operator/=(Int64 b) { return *this = *this / b; }
    Int64& operator%=(Int64 b) { return *this = *this % b; }
    Int64& operator&=(Int64 b) noexcept { return *this = *this & b; }
    Int64& operator|=(Int64 b) noexcept { return *this = *this | b; }
    Int64& operator^=(Int64 b) noexcept { return *this = *this ^ b; }
    Int64& operator<<=(Int32 b) noexcept { return *this = *this << b; }
    Int64& operator>>=(Int32 b) noexcept { return *this = *this >> b; }
    Int64& operator++() noexcept { return *this += 1; }
    Int64& operator--() noexcept { return *this -= 1; }
    Int64 operator++(int) noexcept { Int64 old = *this; *this += 1; return old; }
    Int64 operator--(int) noexcept { Int64 old = *this; *this -= 1; return old; }
    friend constexpr bool operator==(Int64 a, Int64 b) noexcept { return a.value == b.value; }
    friend constexpr bool operator!=(Int64 a, Int64 b) noexcept { return a.value != b.value; }
    friend constexpr bool operator<(Int64 a, Int64 b) noexcept { return a.value < b.value; }
    friend constexpr bool operator<=(Int64 a, Int64 b) noexcept { return a.value <= b.value; }
    friend constexpr bool operator>(Int64 a, Int64 b) noexcept { return a.value > b.value; }
    friend constexpr bool operator>=(Int64 a, Int64 b) noexcept { return a.value >= b.value; }
};
static_assert(std::is_standard_layout_v<Int64> && sizeof(Int64) == sizeof(std::int64_t) && alignof(Int64) == alignof(std::int64_t));
// Int32 with Int64 and with plain integers up to 64 bits: both sides widen to long.
template <class T>
using if_any_integer = std::enable_if_t<std::is_integral_v<T> && !std::is_same_v<T, bool>, int>;
#define PLS_CS_INT64_MIXED(op, R)                                                                   \
    inline R operator op(Int64 a, Int32 b) { return a op Int64(b); }                             \
    inline R operator op(Int32 a, Int64 b) { return Int64(a) op b; }                             \
    template <class T, if_any_integer<T> = 0> inline R operator op(Int64 a, T b) { return a op Int64(static_cast<std::int64_t>(b)); } \
    template <class T, if_any_integer<T> = 0> inline R operator op(T a, Int64 b) { return Int64(static_cast<std::int64_t>(a)) op b; }
PLS_CS_INT64_MIXED(+, Int64)
PLS_CS_INT64_MIXED(-, Int64)
PLS_CS_INT64_MIXED(*, Int64)
PLS_CS_INT64_MIXED(/, Int64)
PLS_CS_INT64_MIXED(%, Int64)
PLS_CS_INT64_MIXED(&, Int64)
PLS_CS_INT64_MIXED(|, Int64)
PLS_CS_INT64_MIXED(^, Int64)
PLS_CS_INT64_MIXED(==, bool)
PLS_CS_INT64_MIXED(!=, bool)
PLS_CS_INT64_MIXED(<, bool)
PLS_CS_INT64_MIXED(<=, bool)
PLS_CS_INT64_MIXED(>, bool)
PLS_CS_INT64_MIXED(>=, bool)
#undef PLS_CS_INT64_MIXED
template <class T, if_any_integer<T> = 0> constexpr Int64 operator<<(Int64 a, T n) noexcept { return a << Int32(static_cast<std::int32_t>(n)); }
template <class T, if_any_integer<T> = 0> constexpr Int64 operator>>(Int64 a, T n) noexcept { return a >> Int32(static_cast<std::int32_t>(n)); }

struct FloatEval;
struct Double;

struct Single {
    float value{};
    constexpr Single() = default;
    constexpr Single(float v) noexcept : value(v) {}
    // int -> float: C# narrows the integer to binary32 first (measured rule).
    constexpr Single(Int32 v) noexcept : value(static_cast<float>(v.value)) {}
    constexpr Single(Int64 v) noexcept : value(static_cast<float>(v.value)) {}  // long -> float (binary32)
    constexpr Single(FloatEval v) noexcept;  // store: narrow to binary32
    // C# (float)d of a double, and a binary64 value reaching float storage:
    // explicit, so a double never narrows silently.
    constexpr explicit Single(double v) noexcept : value(static_cast<float>(v)) {}
    constexpr explicit Single(Double v) noexcept;
    // Other integer types (fields stay plain integers): C# converts to binary32.
    template <class T, std::enable_if_t<std::is_integral_v<T> && !std::is_same_v<T, bool>, int> = 0>
    constexpr Single(T v) noexcept : value(static_cast<float>(v)) {}
    constexpr operator float() const noexcept { return value; }
    constexpr float raw() const noexcept { return value; }
};
static_assert(std::is_standard_layout_v<Single> && sizeof(Single) == sizeof(float) && alignof(Single) == alignof(float));

// THE FLOATING-POINT RULE. A float expression in flight is evaluated in
// FloatEvalStorage: binary64 under the adopted Mono ARM rule
// (docs/notes/mono-arm-float-rule.md). Another rule is a change here only:
// PLS_FLOAT_RULE_BINARY32 evaluates in binary32 (IEEE float), which is how the
// negative control demonstrates that the game code carries no rule of its own.
#if defined(PLS_FLOAT_RULE_BINARY32)
using FloatEvalStorage = float;
#else
using FloatEvalStorage = double;
#endif
struct FloatEval {
    FloatEvalStorage value;
    constexpr FloatEval(Single s) noexcept : value(static_cast<FloatEvalStorage>(s.value)) {}
    constexpr explicit FloatEval(double v) noexcept : value(static_cast<FloatEvalStorage>(v)) {}
    // Store/argument/return as float narrows (Mono ARM); an explicit conversion
    // to double keeps the binary64 value (the emitter's float -> double rule).
    constexpr operator float() const noexcept { return static_cast<float>(value); }
    constexpr explicit operator double() const noexcept { return value; }
    friend constexpr FloatEval operator+(FloatEval a, FloatEval b) noexcept { return FloatEval(a.value + b.value); }
    friend constexpr FloatEval operator-(FloatEval a, FloatEval b) noexcept { return FloatEval(a.value - b.value); }
    friend constexpr FloatEval operator*(FloatEval a, FloatEval b) noexcept { return FloatEval(a.value * b.value); }
    friend constexpr FloatEval operator/(FloatEval a, FloatEval b) noexcept { return FloatEval(a.value / b.value); }
    // C# float %: IEEE remainder of the binary64 operands (std::fmod), as Mono ARM.
    friend FloatEval operator%(FloatEval a, FloatEval b) noexcept { return FloatEval(std::fmod(a.value, b.value)); }
    friend constexpr FloatEval operator-(FloatEval a) noexcept { return FloatEval(-a.value); }
    friend constexpr bool operator==(FloatEval a, FloatEval b) noexcept { return a.value == b.value; }
    friend constexpr bool operator!=(FloatEval a, FloatEval b) noexcept { return a.value != b.value; }
    friend constexpr bool operator<(FloatEval a, FloatEval b) noexcept { return a.value < b.value; }
    friend constexpr bool operator<=(FloatEval a, FloatEval b) noexcept { return a.value <= b.value; }
    friend constexpr bool operator>(FloatEval a, FloatEval b) noexcept { return a.value > b.value; }
    friend constexpr bool operator>=(FloatEval a, FloatEval b) noexcept { return a.value >= b.value; }
};
constexpr Single::Single(FloatEval v) noexcept : value(static_cast<float>(v.value)) {}

// Single op Single and mixed forms: both sides widen, result stays binary64.
#define PLS_CS_SINGLE_OP(op)                                                                              \
    constexpr FloatEval operator op(Single a, Single b) noexcept { return FloatEval(a) op FloatEval(b); } \
    constexpr FloatEval operator op(Single a, FloatEval b) noexcept { return FloatEval(a) op b; }        \
    constexpr FloatEval operator op(FloatEval a, Single b) noexcept { return a op FloatEval(b); }        \
    constexpr FloatEval operator op(Single a, Int32 b) noexcept { return FloatEval(a) op FloatEval(Single(b)); } \
    constexpr FloatEval operator op(Int32 a, Single b) noexcept { return FloatEval(Single(a)) op FloatEval(b); } \
    constexpr FloatEval operator op(FloatEval a, Int32 b) noexcept { return a op FloatEval(Single(b)); } \
    constexpr FloatEval operator op(Int32 a, FloatEval b) noexcept { return FloatEval(Single(a)) op b; }     constexpr FloatEval operator op(Single a, float b) noexcept { return FloatEval(a) op FloatEval(Single(b)); }     constexpr FloatEval operator op(float a, Single b) noexcept { return FloatEval(Single(a)) op FloatEval(b); }     constexpr FloatEval operator op(FloatEval a, float b) noexcept { return a op FloatEval(Single(b)); }     constexpr FloatEval operator op(float a, FloatEval b) noexcept { return FloatEval(Single(a)) op b; }     /* A float-typed C# operand already evaluated in binary64 (plain double, not narrowed). */     constexpr FloatEval operator op(FloatEval a, double b) noexcept { return a op FloatEval(b); }     constexpr FloatEval operator op(double a, FloatEval b) noexcept { return FloatEval(a) op b; }     constexpr FloatEval operator op(Single a, double b) noexcept { return FloatEval(a) op FloatEval(b); }     constexpr FloatEval operator op(double a, Single b) noexcept { return FloatEval(a) op FloatEval(b); }
PLS_CS_SINGLE_OP(+)
PLS_CS_SINGLE_OP(-)
PLS_CS_SINGLE_OP(*)
PLS_CS_SINGLE_OP(/)
#undef PLS_CS_SINGLE_OP
#define PLS_CS_SINGLE_CMP(op)                                                                         \
    constexpr bool operator op(Single a, Single b) noexcept { return FloatEval(a) op FloatEval(b); } \
    constexpr bool operator op(Single a, FloatEval b) noexcept { return FloatEval(a) op b; }        \
    constexpr bool operator op(FloatEval a, Single b) noexcept { return a op FloatEval(b); }     constexpr bool operator op(Single a, float b) noexcept { return FloatEval(a) op FloatEval(Single(b)); }     constexpr bool operator op(float a, Single b) noexcept { return FloatEval(Single(a)) op FloatEval(b); }     constexpr bool operator op(FloatEval a, float b) noexcept { return a op FloatEval(Single(b)); }     constexpr bool operator op(float a, FloatEval b) noexcept { return FloatEval(Single(a)) op b; }
PLS_CS_SINGLE_CMP(==)
PLS_CS_SINGLE_CMP(!=)
PLS_CS_SINGLE_CMP(<)
PLS_CS_SINGLE_CMP(<=)
PLS_CS_SINGLE_CMP(>)
PLS_CS_SINGLE_CMP(>=)
#undef PLS_CS_SINGLE_CMP
// Int32 with a plain float (a literal): the integer converts to binary32 first.
#define PLS_CS_INT_FLOAT_OP(op, R)                                                                                  constexpr R operator op(Int32 a, float b) noexcept { return FloatEval(Single(a)) op FloatEval(Single(b)); }     constexpr R operator op(float a, Int32 b) noexcept { return FloatEval(Single(a)) op FloatEval(Single(b)); }
PLS_CS_INT_FLOAT_OP(+, FloatEval)
PLS_CS_INT_FLOAT_OP(-, FloatEval)
PLS_CS_INT_FLOAT_OP(*, FloatEval)
PLS_CS_INT_FLOAT_OP(/, FloatEval)
PLS_CS_INT_FLOAT_OP(==, bool)
PLS_CS_INT_FLOAT_OP(!=, bool)
PLS_CS_INT_FLOAT_OP(<, bool)
PLS_CS_INT_FLOAT_OP(<=, bool)
PLS_CS_INT_FLOAT_OP(>, bool)
PLS_CS_INT_FLOAT_OP(>=, bool)
#undef PLS_CS_INT_FLOAT_OP
inline Single& operator+=(Single& a, FloatEval b) noexcept { return a = FloatEval(a) + b; }
inline Single& operator-=(Single& a, FloatEval b) noexcept { return a = FloatEval(a) - b; }
inline Single& operator*=(Single& a, FloatEval b) noexcept { return a = FloatEval(a) * b; }
inline Single& operator/=(Single& a, FloatEval b) noexcept { return a = FloatEval(a) / b; }
inline Single& operator+=(Single& a, Single b) noexcept { return a += FloatEval(b); }
inline Single& operator-=(Single& a, Single b) noexcept { return a -= FloatEval(b); }
inline Single& operator*=(Single& a, Single b) noexcept { return a *= FloatEval(b); }
inline Single& operator/=(Single& a, Single b) noexcept { return a /= FloatEval(b); }
inline Single& operator+=(Single& a, float b) noexcept { return a += Single(b); }
inline Single& operator-=(Single& a, float b) noexcept { return a -= Single(b); }
inline Single& operator*=(Single& a, float b) noexcept { return a *= Single(b); }
inline Single& operator/=(Single& a, float b) noexcept { return a /= Single(b); }
inline Single& operator+=(Single& a, Int32 b) noexcept { return a += Single(b); }
inline Single& operator-=(Single& a, Int32 b) noexcept { return a -= Single(b); }
inline Single& operator*=(Single& a, Int32 b) noexcept { return a *= Single(b); }
inline Single& operator/=(Single& a, Int32 b) noexcept { return a /= Single(b); }
// float ++/--: binary64 sum narrowed on the store, as x = (float)(x + 1).
inline Single& operator++(Single& a) noexcept { return a += FloatEval(1.0); }
inline Single& operator--(Single& a) noexcept { return a -= FloatEval(1.0); }
inline Single operator++(Single& a, int) noexcept { Single old = a; ++a; return old; }
inline Single operator--(Single& a, int) noexcept { Single old = a; --a; return old; }
// Single op (plain integer): the integer converts to binary32 first, as above.
#define PLS_CS_SINGLE_INT_OP(op, R)                                                                                   \
    template <class T, if_small_integer<T> = 0> constexpr R operator op(Single a, T b) noexcept { return a op Single(b); }    \
    template <class T, if_small_integer<T> = 0> constexpr R operator op(T a, Single b) noexcept { return Single(a) op b; }    \
    template <class T, if_small_integer<T> = 0> constexpr R operator op(FloatEval a, T b) noexcept { return a op Single(b); } \
    template <class T, if_small_integer<T> = 0> constexpr R operator op(T a, FloatEval b) noexcept { return Single(a) op b; }
PLS_CS_SINGLE_INT_OP(+, FloatEval)
PLS_CS_SINGLE_INT_OP(-, FloatEval)
PLS_CS_SINGLE_INT_OP(*, FloatEval)
PLS_CS_SINGLE_INT_OP(/, FloatEval)
PLS_CS_SINGLE_INT_OP(==, bool)
PLS_CS_SINGLE_INT_OP(!=, bool)
PLS_CS_SINGLE_INT_OP(<, bool)
PLS_CS_SINGLE_INT_OP(<=, bool)
PLS_CS_SINGLE_INT_OP(>, bool)
PLS_CS_SINGLE_INT_OP(>=, bool)
#undef PLS_CS_SINGLE_INT_OP
// Single with long: the long converts to binary32 first (C# implicit long -> float).
#define PLS_CS_SINGLE_LONG_OP(op, R)     constexpr R operator op(Single a, Int64 b) noexcept { return a op Single(b); }     constexpr R operator op(Int64 a, Single b) noexcept { return Single(a) op b; }     constexpr R operator op(FloatEval a, Int64 b) noexcept { return a op Single(b); }     constexpr R operator op(Int64 a, FloatEval b) noexcept { return Single(a) op b; }
PLS_CS_SINGLE_LONG_OP(+, FloatEval)
PLS_CS_SINGLE_LONG_OP(-, FloatEval)
PLS_CS_SINGLE_LONG_OP(*, FloatEval)
PLS_CS_SINGLE_LONG_OP(/, FloatEval)
PLS_CS_SINGLE_LONG_OP(<, bool)
PLS_CS_SINGLE_LONG_OP(<=, bool)
PLS_CS_SINGLE_LONG_OP(>, bool)
PLS_CS_SINGLE_LONG_OP(>=, bool)
PLS_CS_SINGLE_LONG_OP(==, bool)
PLS_CS_SINGLE_LONG_OP(!=, bool)
#undef PLS_CS_SINGLE_LONG_OP
// C# float % (std::fmod in binary64; not constexpr).
inline FloatEval operator%(Single a, Single b) noexcept { return FloatEval(a) % FloatEval(b); }
inline FloatEval operator%(Single a, FloatEval b) noexcept { return FloatEval(a) % b; }
inline FloatEval operator%(FloatEval a, Single b) noexcept { return a % FloatEval(b); }
inline FloatEval operator%(Single a, Int32 b) noexcept { return FloatEval(a) % FloatEval(Single(b)); }
inline FloatEval operator%(Int32 a, Single b) noexcept { return FloatEval(Single(a)) % FloatEval(b); }
inline FloatEval operator%(Single a, float b) noexcept { return FloatEval(a) % FloatEval(Single(b)); }
inline FloatEval operator%(float a, Single b) noexcept { return FloatEval(Single(a)) % FloatEval(b); }
template <class T, if_small_integer<T> = 0> inline FloatEval operator%(Single a, T b) noexcept { return a % Single(b); }
template <class T, if_small_integer<T> = 0> inline FloatEval operator%(T a, Single b) noexcept { return Single(a) % b; }
template <class T, if_small_integer<T> = 0> inline FloatEval operator%(FloatEval a, T b) noexcept { return a % FloatEval(Single(b)); }
template <class T, if_small_integer<T> = 0> inline Single& operator+=(Single& a, T b) noexcept { return a += Single(b); }
template <class T, if_small_integer<T> = 0> inline Single& operator-=(Single& a, T b) noexcept { return a -= Single(b); }
template <class T, if_small_integer<T> = 0> inline Single& operator*=(Single& a, T b) noexcept { return a *= Single(b); }
template <class T, if_small_integer<T> = 0> inline Single& operator/=(Single& a, T b) noexcept { return a /= Single(b); }

// Double: storage and arithmetic of a C# double (plain binary64, no rule of its
// own). It exists so that float and double stay distinct types: a float value
// widened to double keeps its binary64 value (Single and FloatEval convert
// implicitly), and a double never narrows to float without an explicit Single().
struct Double {
    double value{};
    constexpr Double() = default;
    constexpr Double(double v) noexcept : value(v) {}
    constexpr Double(Single v) noexcept : value(static_cast<double>(v.value)) {}
    constexpr Double(FloatEval v) noexcept : value(v.value) {}
    constexpr Double(Int32 v) noexcept : value(static_cast<double>(v.value)) {}
    constexpr Double(Int64 v) noexcept : value(static_cast<double>(v.value)) {}
    template <class T, std::enable_if_t<std::is_integral_v<T> && !std::is_same_v<T, bool>, int> = 0>
    constexpr Double(T v) noexcept : value(static_cast<double>(v)) {}
    constexpr operator double() const noexcept { return value; }
    constexpr double raw() const noexcept { return value; }
};
static_assert(std::is_standard_layout_v<Double> && sizeof(Double) == sizeof(double) && alignof(Double) == alignof(double));
constexpr Single::Single(Double v) noexcept : value(static_cast<float>(v.value)) {}
#define PLS_CS_DOUBLE_OP(op, R)                                                                             \
    constexpr R operator op(Double a, Double b) noexcept { return a.value op b.value; }                     \
    constexpr R operator op(Double a, double b) noexcept { return a.value op b; }                           \
    constexpr R operator op(double a, Double b) noexcept { return a op b.value; }                           \
    constexpr R operator op(Double a, Single b) noexcept { return a.value op static_cast<double>(b.value); } \
    constexpr R operator op(Single a, Double b) noexcept { return static_cast<double>(a.value) op b.value; } \
    constexpr R operator op(Double a, FloatEval b) noexcept { return a.value op b.value; }                  \
    constexpr R operator op(FloatEval a, Double b) noexcept { return a.value op b.value; }                  \
    constexpr R operator op(Double a, Int32 b) noexcept { return a.value op static_cast<double>(b.value); } \
    constexpr R operator op(Int32 a, Double b) noexcept { return static_cast<double>(a.value) op b.value; } \
    template <class T, if_small_integer<T> = 0> constexpr R operator op(Double a, T b) noexcept { return a.value op static_cast<double>(b); } \
    template <class T, if_small_integer<T> = 0> constexpr R operator op(T a, Double b) noexcept { return static_cast<double>(a) op b.value; }
PLS_CS_DOUBLE_OP(+, Double)
PLS_CS_DOUBLE_OP(-, Double)
PLS_CS_DOUBLE_OP(*, Double)
PLS_CS_DOUBLE_OP(/, Double)
PLS_CS_DOUBLE_OP(==, bool)
PLS_CS_DOUBLE_OP(!=, bool)
PLS_CS_DOUBLE_OP(<, bool)
PLS_CS_DOUBLE_OP(<=, bool)
PLS_CS_DOUBLE_OP(>, bool)
PLS_CS_DOUBLE_OP(>=, bool)
#undef PLS_CS_DOUBLE_OP
constexpr Double operator-(Double a) noexcept { return -a.value; }
inline Double operator%(Double a, Double b) noexcept { return std::fmod(a.value, b.value); }
inline Double operator%(Double a, Single b) noexcept { return std::fmod(a.value, static_cast<double>(b.value)); }
inline Double operator%(Single a, Double b) noexcept { return std::fmod(static_cast<double>(a.value), b.value); }
inline Single& operator%=(Single& a, FloatEval b) noexcept { return a = FloatEval(a) % b; }
inline Double& operator%=(Double& a, Double b) noexcept { return a = a % b; }
inline Double& operator+=(Double& a, Double b) noexcept { return a = a + b; }
inline Double& operator-=(Double& a, Double b) noexcept { return a = a - b; }
inline Double& operator*=(Double& a, Double b) noexcept { return a = a * b; }
inline Double& operator/=(Double& a, Double b) noexcept { return a = a / b; }
inline Double& operator++(Double& a) noexcept { return a += Double(1.0); }
inline Double& operator--(Double& a) noexcept { return a -= Double(1.0); }
inline Double operator++(Double& a, int) noexcept { Double old = a; ++a; return old; }
inline Double operator--(Double& a, int) noexcept { Double old = a; --a; return old; }

// C# (int)floatExpression: the binary64 value when not yet stored (conv_i32(double)).
std::int32_t conv_i32(double value) noexcept;
std::int64_t conv_i64(double value) noexcept;
// Exact overloads: a FloatEval must not reach conv_i32(float) through its
// narrowing conversion; C# (int)(a / b) converts the binary64 value.
inline std::int32_t conv_i32(FloatEval v) noexcept { return conv_i32(v.value); }
inline std::int64_t conv_i64(FloatEval v) noexcept { return conv_i64(v.value); }
inline std::int32_t conv_i32(Single v) noexcept { return conv_i32(static_cast<double>(v.value)); }
inline std::int64_t conv_i64(Single v) noexcept { return conv_i64(static_cast<double>(v.value)); }
inline Int32 to_int32(FloatEval v) noexcept { return conv_i32(v.value); }
inline Int32 to_int32(Single v) noexcept { return conv_i32(static_cast<double>(v.value)); }
constexpr FloatEval operator-(Single a) noexcept { return -FloatEval(a); }
inline std::int32_t conv_i32(Double v) noexcept { return conv_i32(v.value); }
// C# (int)longValue: the low 32 bits (unchecked), and (long) of a float/double.
inline Int32 to_int32(double v) noexcept { return conv_i32(v); }
inline Int32 to_int32(float v) noexcept { return conv_i32(static_cast<double>(v)); }
inline Int64 to_int64(double v) noexcept { return conv_i64(v); }
inline Int64 to_int64(float v) noexcept { return conv_i64(static_cast<double>(v)); }
inline Int32 to_int32(Int64 v) noexcept { return Int32::wrap(static_cast<std::uint32_t>(static_cast<std::uint64_t>(v.value))); }
inline Int64 to_int64(FloatEval v) noexcept { return conv_i64(v.value); }
inline Int64 to_int64(Single v) noexcept { return conv_i64(static_cast<double>(v.value)); }
inline Int64 to_int64(Double v) noexcept { return conv_i64(v.value); }
inline std::int64_t conv_i64(Double v) noexcept { return conv_i64(v.value); }
inline Int32 to_int32(Double v) noexcept { return conv_i32(v.value); }
}  // namespace pls::cs
