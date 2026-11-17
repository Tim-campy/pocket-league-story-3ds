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
static_assert(std::is_standard_layout_v<Int32> && sizeof(Int32) == 4);
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

struct FloatEval;

struct Single {
    float value{};
    constexpr Single() = default;
    constexpr Single(float v) noexcept : value(v) {}
    // int -> float: C# narrows the integer to binary32 first (measured rule).
    constexpr Single(Int32 v) noexcept : value(static_cast<float>(v.value)) {}
    constexpr Single(FloatEval v) noexcept;  // store: narrow to binary32
    constexpr operator float() const noexcept { return value; }
    constexpr float raw() const noexcept { return value; }
};
static_assert(std::is_standard_layout_v<Single> && sizeof(Single) == 4);

struct FloatEval {
    double value;
    constexpr FloatEval(Single s) noexcept : value(static_cast<double>(s.value)) {}
    constexpr explicit FloatEval(double v) noexcept : value(v) {}
    // Store/argument/return as float narrows (Mono ARM); an explicit conversion
    // to double keeps the binary64 value (the emitter's float -> double rule).
    constexpr operator float() const noexcept { return static_cast<float>(value); }
    constexpr explicit operator double() const noexcept { return value; }
    friend constexpr FloatEval operator+(FloatEval a, FloatEval b) noexcept { return FloatEval(a.value + b.value); }
    friend constexpr FloatEval operator-(FloatEval a, FloatEval b) noexcept { return FloatEval(a.value - b.value); }
    friend constexpr FloatEval operator*(FloatEval a, FloatEval b) noexcept { return FloatEval(a.value * b.value); }
    friend constexpr FloatEval operator/(FloatEval a, FloatEval b) noexcept { return FloatEval(a.value / b.value); }
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
}  // namespace pls::cs
