// Readable numeric types (criterion 5, C1): C# semantics of Int32/Single/FloatEval.
#include "semantic_runtime.hpp"
#include <cstdio>
#include <limits>
using namespace pls::cs;
static int failures = 0, checks = 0;
#define CHECK(x) do { ++checks; if (!(x)) { ++failures; std::printf("FAIL %s:%d %s\n", __FILE__, __LINE__, #x); } } while (0)
int main() {
    GcMutatorScope scope;
    // unchecked wrap, as add_i32/mul_i32
    Int32 max = std::numeric_limits<std::int32_t>::max();
    CHECK((max + 1).value == std::numeric_limits<std::int32_t>::min());
    CHECK((Int32(65536) * 65536).value == 0);
    CHECK((Int32(-7) / 2).value == -3 && (Int32(-7) % 2).value == -1);
    CHECK((Int32(1) << 33).value == 2 && (Int32(-8) >> 1).value == -4);
    bool zero = false; try { (void)(Int32(1) / 0); } catch (const DivideByZeroException&) { zero = true; } CHECK(zero);
    bool overflow = false; try { (void)(Int32(std::numeric_limits<std::int32_t>::min()) / -1); } catch (const ArithmeticException&) { overflow = true; } CHECK(overflow);
    Int32 i = 5; CHECK((i++).value == 5 && i.value == 6 && (++i).value == 7);
    CHECK(i >= 0 && 0 <= i && i != 8 && i == 7 && i < std::int32_t(8));
    // float: binary64 evaluation, narrowing on store
    Single big = 16777216.0f, one = 1.0f;
    FloatEval sum = big + one;                       // 16777217 exactly in binary64
    CHECK(sum.value == 16777217.0);
    Single stored = sum;                              // store narrows (ties to even)
    CHECK(stored.value == 16777216.0f);
    CHECK(conv_i32(sum) == 16777217);                 // (int)(a + b): binary64 value
    CHECK(conv_i32(stored) == 16777216);
    CHECK(to_int32(sum).value == 16777217);
    CHECK(conv_i64(big * big + one) == 281474976710657LL);
    float raw = sum;                                  // plain float storage also narrows
    CHECK(raw == 16777216.0f);
    CHECK(static_cast<double>(sum) == 16777217.0);   // float -> double keeps binary64
    Single s = 0.1f; s += 0.2f; CHECK(s.value == static_cast<float>(static_cast<double>(0.1f) + static_cast<double>(0.2f)));
    CHECK(((sum + 1.0) .value) == 16777218.0);        // double operand = evaluated float
    Single n = Int32(16777217);                        // int -> float narrows first
    CHECK(n.value == 16777216.0f);
    // boxing keeps the CLR primitive
    CHECK(unbox<std::int32_t>(box(Int32(42))) == 42);
    CHECK(unbox<float>(box(Single(1.5f))) == 1.5f);
    CHECK(unbox<float>(box(sum)) == 16777216.0f);
    CHECK(cast_integral<std::uint8_t>(Int32(300)) == 44);
    std::printf("{\"checks\":%d,\"failures\":%d}\n", checks, failures);
    return failures ? 1 : 0;
}
