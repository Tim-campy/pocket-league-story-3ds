// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "generated/java.lang.JSystem.hpp"
#include "kairo.unity.m3d4.util3d.FastMath.hpp"
#include "kairo.unity.ui.Matrix.hpp"

namespace kl_lang = pls::generated::java::lang;

using FloatArray = pls::cs::Array<pls::cs::Single>;

namespace pls::game {
namespace kairo::unity::ui {

void Matrix::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(mtx_, visitor);
    pls::cs::trace_value(mul_, visitor);
    pls::cs::trace_value(set_, visitor);
}

bool Matrix::Equals(pls::cs::Ref<pls::cs::Object> const& obj) {
    return Matrix::Equals(pls::cs::static_pointer_cast<Matrix>(shared_from_this()), obj);
}

static FloatArray Matrix_identityMatrix__storage{};

static pls::cs::Ref<Matrix> Matrix_RotateTempMatrix__storage{};

static pls::cs::Ref<Matrix> Matrix_ScaleTemporaryMatrix__storage{};

static pls::cs::Ref<Matrix> Matrix_TranslateTempMatrix__storage{};

static PLS_NOINLINE void cs_init_c8e1f3d3f96670c6_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(Matrix_identityMatrix__storage, visitor);
        pls::cs::trace_value(Matrix_RotateTempMatrix__storage, visitor);
        pls::cs::trace_value(Matrix_ScaleTemporaryMatrix__storage, visitor);
        pls::cs::trace_value(Matrix_TranslateTempMatrix__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("kairo.unity.ui.Matrix", flag, []() {
        Matrix_identityMatrix__storage =
            pls::cs::evaluate_type_initializer_field("F:kairo.unity.ui.Matrix.identityMatrix_", [&]() {
                return FloatArray::from({1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f});
            });
        Matrix_RotateTempMatrix__storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.unity.ui.Matrix.RotateTempMatrix_", [&]() { return Matrix::create(); });
        Matrix_ScaleTemporaryMatrix__storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.unity.ui.Matrix.ScaleTemporaryMatrix_", [&]() { return Matrix::create(); });
        Matrix_TranslateTempMatrix__storage = pls::cs::evaluate_type_initializer_field(
            "F:kairo.unity.ui.Matrix.TranslateTempMatrix_", [&]() { return Matrix::create(); });
    });
}

void Matrix::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_c8e1f3d3f96670c6_slow(flag);
}

FloatArray& Matrix::identityMatrix_() {
    Matrix::ensure_initialized();
    return Matrix_identityMatrix__storage;
}

pls::cs::Ref<Matrix>& Matrix::RotateTempMatrix_() {
    Matrix::ensure_initialized();
    return Matrix_RotateTempMatrix__storage;
}

pls::cs::Ref<Matrix>& Matrix::ScaleTemporaryMatrix_() {
    Matrix::ensure_initialized();
    return Matrix_ScaleTemporaryMatrix__storage;
}

pls::cs::Ref<Matrix>& Matrix::TranslateTempMatrix_() {
    Matrix::ensure_initialized();
    return Matrix_TranslateTempMatrix__storage;
}

void Matrix::create_init(pls::cs::Ref<Matrix> self) {
    Matrix::ensure_initialized();
    self->mtx_ = FloatArray::make(9);
    self->mul_ = FloatArray::make(9);
    self->set_ = FloatArray::make(9);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Matrix.#ctor", kairo);
    {
        self->Reset();
    }
}

// M:kairo.unity.ui.Matrix.#ctor
pls::cs::Ref<Matrix> Matrix::create() {
    Matrix::ensure_initialized();
    auto self = pls::cs::make_ref<Matrix>();
    Matrix::create_init(self);
    return self;
}

// M:kairo.unity.ui.Matrix.Reset
pls::cs::Ref<Matrix> Matrix::Reset() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Matrix.Reset", kairo);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_lang::JSystem::Arraycopy(pls::cs::box(Matrix::identityMatrix_()), 0, pls::cs::box(mtx_),
                                               0, Matrix::identityMatrix_().length());
        });
        return this;
    }
}

// M:kairo.unity.ui.Matrix.SetValues(System.Single[])
pls::cs::Ref<Matrix> Matrix::SetValues(FloatArray matrix) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Matrix.SetValues(System.Single[])", kairo);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_lang::JSystem::Arraycopy(pls::cs::box(matrix), 0, pls::cs::box(mtx_), 0,
                                               matrix.length());
        });
        return this;
    }
}

// M:kairo.unity.ui.Matrix.GetValues(System.Single[])
void Matrix::GetValues(FloatArray matrix) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Matrix.GetValues(System.Single[])", kairo);
    {
        pls::diagnostic::api_call([&]() -> decltype(auto) {
            return kl_lang::JSystem::Arraycopy(pls::cs::box(mtx_), 0, pls::cs::box(matrix), 0,
                                               matrix.length());
        });
    }
}

// M:kairo.unity.ui.Matrix.IsIdentity
bool Matrix::IsIdentity() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Matrix.IsIdentity", kairo);
    {
        for (pls::cs::Int32 i = 0; i < Matrix::identityMatrix_().length(); ++i) {
            if ([&]() -> bool {
                    auto cs_left = Matrix::identityMatrix_()[i];
                    auto cs_right = mtx_[i];
                    return cs_left != cs_right;
                }()) {
                return false;
            }
        }
        return true;
    }
}

// M:kairo.unity.ui.Matrix.PostConcat(System.Single[])
pls::cs::Ref<Matrix> Matrix::PostConcat(FloatArray transform) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Matrix.PostConcat(System.Single[])", kairo);
    {
        if ([&]() {
                auto cs_left = pls::cs::box(transform);
                auto cs_right = pls::cs::box(FloatArray{});
                return cs_left == cs_right;
            }()) {
            throw pls::cs::NullReferenceException();
        }
        pls::cs::Int32 j, k, l;
        for (pls::cs::Int32 i = 0; i < mul_.length(); ++i) {
            mul_[i] = 0.0f;
        }
        for (([&]() {
                 pls::cs::Int32 cs_value = 0;
                 j = cs_value;
                 return cs_value;
             }());
             j < 3; ++j) {
            for (([&]() {
                     pls::cs::Int32 cs_value = 0;
                     k = cs_value;
                     return cs_value;
                 }());
                 k < 3; ++k) {
                mul_[j * 3 + k] = 0.0f;
                for (([&]() {
                         pls::cs::Int32 cs_value = 0;
                         l = cs_value;
                         return cs_value;
                     }());
                     l < 3; ++l) {
                    {
                        auto cs_target = mul_;
                        auto cs_index = j * 3 + k;
                        auto cs_old = cs_target.at(cs_index);
                        auto cs_rhs = ([&]() -> pls::cs::FloatEval {
                            auto cs_left = mtx_[j * 3 + l];
                            auto cs_right = transform[l * 3 + k];
                            return cs_left * cs_right;
                        }());
                        pls::cs::Single cs_value = cs_old + cs_rhs;
                        cs_target.at(cs_index) = cs_value;
                    }
                }
            }
        }
        SetValues(mul_);
        return this;
    }
}

// M:kairo.unity.ui.Matrix.PostRotate(System.Single,System.Single,System.Single)
pls::cs::Ref<Matrix> Matrix::PostRotate(pls::cs::Single angle, pls::cs::Single px, pls::cs::Single py) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.ui.Matrix.PostRotate(System.Single,System.Single,System.Single)", kairo);
    {
        if (pls::diagnostic::api_call([&]() -> decltype(auto) { return std::isnan(angle); })) {
            throw pls::cs::ArgumentException();
        }
        if (px != 0.0f || py != 0.0f) {
            PostTranslate(-px, -py);
        }
        pls::cs::Single single = m3d4::util3d::FastMath::Sin(angle);
        pls::cs::Single single1 = m3d4::util3d::FastMath::Cos(angle);
        set_[0] = single1;
        set_[1] = single;
        set_[2] = 0.0f;
        set_[3] = -single;
        set_[4] = single1;
        set_[5] = 0.0f;
        set_[6] = 0.0f;
        set_[7] = 0.0f;
        set_[8] = 1.0f;
        PostConcat(set_);
        if (px != 0.0f || py != 0.0f) {
            PostTranslate(px, py);
        }
        return this;
    }
}

// M:kairo.unity.ui.Matrix.SetRotate(System.Single,System.Single,System.Single)
pls::cs::Ref<Matrix> Matrix::SetRotate(pls::cs::Single angle, pls::cs::Single px, pls::cs::Single py) {
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.ui.Matrix.SetRotate(System.Single,System.Single,System.Single)", kairo);
    {
        Reset();
        PostRotate(angle, px, py);
        return this;
    }
}

// M:kairo.unity.ui.Matrix.RotateTemporary(System.Single,System.Single,System.Single)
pls::cs::Ref<Matrix> Matrix::RotateTemporary(pls::cs::Single angle, pls::cs::Single px, pls::cs::Single py) {
    Matrix::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.ui.Matrix.RotateTemporary(System.Single,System.Single,System.Single)",
                     kairo);
    {
        return require(Matrix::RotateTempMatrix_())->SetRotate(angle, px, py);
    }
}

// M:kairo.unity.ui.Matrix.PostScale(System.Single,System.Single,System.Single,System.Single)
pls::cs::Ref<Matrix> Matrix::PostScale(pls::cs::Single x, pls::cs::Single y, pls::cs::Single px,
                                       pls::cs::Single py) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Matrix.PostScale(System.Single,System.Single,System.Single,System.Single)", kairo);
    {
        if (pls::diagnostic::api_call([&]() -> decltype(auto) { return std::isnan(x); }) ||
            pls::diagnostic::api_call([&]() -> decltype(auto) { return std::isnan(y); })) {
            throw pls::cs::ArgumentException();
        }
        if (px != 0.0f || py != 0.0f) {
            PostTranslate(-px, -py);
        }
        {
            auto cs_target = mtx_;
            auto cs_index = 0;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = x;
            pls::cs::Single cs_value = cs_old * cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        {
            auto cs_target = mtx_;
            auto cs_index = 1;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = y;
            pls::cs::Single cs_value = cs_old * cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        {
            auto cs_target = mtx_;
            auto cs_index = 3;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = x;
            pls::cs::Single cs_value = cs_old * cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        {
            auto cs_target = mtx_;
            auto cs_index = 4;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = y;
            pls::cs::Single cs_value = cs_old * cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        {
            auto cs_target = mtx_;
            auto cs_index = 6;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = x;
            pls::cs::Single cs_value = cs_old * cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        {
            auto cs_target = mtx_;
            auto cs_index = 7;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = y;
            pls::cs::Single cs_value = cs_old * cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        if (px != 0.0f || py != 0.0f) {
            PostTranslate(px, py);
        }
        return this;
    }
}

// M:kairo.unity.ui.Matrix.SetScale(System.Single,System.Single,System.Single,System.Single)
pls::cs::Ref<Matrix> Matrix::SetScale(pls::cs::Single x, pls::cs::Single y, pls::cs::Single px,
                                      pls::cs::Single py) {
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Matrix.SetScale(System.Single,System.Single,System.Single,System.Single)", kairo);
    {
        Reset();
        PostScale(x, y, px, py);
        return this;
    }
}

// M:kairo.unity.ui.Matrix.ScaleTemporary(System.Single,System.Single,System.Single,System.Single)
pls::cs::Ref<Matrix> Matrix::ScaleTemporary(pls::cs::Single x, pls::cs::Single y, pls::cs::Single px,
                                            pls::cs::Single py) {
    Matrix::ensure_initialized();
    PLS_METHOD_SCOPE(
        "KairoLibrary",
        "M:kairo.unity.ui.Matrix.ScaleTemporary(System.Single,System.Single,System.Single,System.Single)",
        kairo);
    {
        return require(Matrix::ScaleTemporaryMatrix_())->SetScale(x, y, px, py);
    }
}

// M:kairo.unity.ui.Matrix.PostTranslate(System.Single,System.Single)
pls::cs::Ref<Matrix> Matrix::PostTranslate(pls::cs::Single x, pls::cs::Single y) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Matrix.PostTranslate(System.Single,System.Single)",
                     kairo);
    {
        if (pls::diagnostic::api_call([&]() -> decltype(auto) { return std::isnan(x); }) ||
            pls::diagnostic::api_call([&]() -> decltype(auto) { return std::isnan(y); })) {
            throw pls::cs::ArgumentException();
        }
        {
            auto cs_target = mtx_;
            auto cs_index = 0;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = mtx_[2] * x;
            pls::cs::Single cs_value = cs_old + cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        {
            auto cs_target = mtx_;
            auto cs_index = 1;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = mtx_[2] * y;
            pls::cs::Single cs_value = cs_old + cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        {
            auto cs_target = mtx_;
            auto cs_index = 3;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = mtx_[5] * x;
            pls::cs::Single cs_value = cs_old + cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        {
            auto cs_target = mtx_;
            auto cs_index = 4;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = mtx_[5] * y;
            pls::cs::Single cs_value = cs_old + cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        {
            auto cs_target = mtx_;
            auto cs_index = 6;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = mtx_[8] * x;
            pls::cs::Single cs_value = cs_old + cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        {
            auto cs_target = mtx_;
            auto cs_index = 7;
            auto cs_old = cs_target.at(cs_index);
            auto cs_rhs = mtx_[8] * y;
            pls::cs::Single cs_value = cs_old + cs_rhs;
            cs_target.at(cs_index) = cs_value;
        }
        return this;
    }
}

// M:kairo.unity.ui.Matrix.SetTranslate(System.Single,System.Single)
pls::cs::Ref<Matrix> Matrix::SetTranslate(pls::cs::Single x, pls::cs::Single y) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Matrix.SetTranslate(System.Single,System.Single)",
                     kairo);
    {
        Reset();
        PostTranslate(x, y);
        return this;
    }
}

// M:kairo.unity.ui.Matrix.TranslateTemporary(System.Single,System.Single)
pls::cs::Ref<Matrix> Matrix::TranslateTemporary(pls::cs::Single x, pls::cs::Single y) {
    Matrix::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary",
                     "M:kairo.unity.ui.Matrix.TranslateTemporary(System.Single,System.Single)", kairo);
    {
        return require(Matrix::TranslateTempMatrix_())->SetTranslate(x, y);
    }
}

// M:kairo.unity.ui.Matrix.MapPoints(System.Single@,System.Single@)
void Matrix::MapPoints(pls::cs::Single& x, pls::cs::Single& y) {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Matrix.MapPoints(System.Single@,System.Single@)",
                     kairo);
    {
        pls::cs::Single num = x;
        pls::cs::Single num2 = y;
        x = mtx_[0] * num + mtx_[3] * num2 + mtx_[6];
        y = mtx_[1] * num + mtx_[4] * num2 + mtx_[7];
    }
}

// M:kairo.unity.ui.Matrix.Equals(System.Object)
bool Matrix::Equals(pls::cs::Ref<Matrix> self, pls::cs::Ref<pls::cs::Object> obj) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Matrix.Equals(System.Object)", kairo);
    {
        if (!is_null(obj) && is_instance<pls::cs::Ref<Matrix>>(pls::cs::box(obj))) {
            pls::cs::Ref<Matrix> matrix = pls::cs::unbox<pls::cs::Ref<Matrix>>(obj);
            for (pls::cs::Int32 i = 0; i < self->mtx_.length(); ++i) {
                if ([&]() -> bool {
                        auto cs_left = self->mtx_[i];
                        auto cs_right = require(matrix)->mtx_[i];
                        return cs_left != cs_right;
                    }()) {
                    return false;
                }
            }
        }
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(self));
                auto cs_argument = obj;
                return require(cs_receiver)->pls::cs::Object::Equals(cs_argument);
            }());
        });
    }
}

// M:kairo.unity.ui.Matrix.GetHashCode
std::int32_t Matrix::GetHashCode() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:kairo.unity.ui.Matrix.GetHashCode", kairo);
    {
        return pls::diagnostic::api_call([&]() -> decltype(auto) {
            return ([&]() {
                auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(this));
                return require(cs_receiver)->pls::cs::Object::GetHashCode();
            }());
        });
    }
}
} // namespace kairo::unity::ui
}
