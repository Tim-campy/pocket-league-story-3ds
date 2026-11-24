// From the reconstructed C# (reference/); maintained by hand since v1.0.0-faithful.
#include "java.lang.JRunnable.hpp"
#include "java.lang.JThread.hpp"

namespace pls::game {
namespace java::lang {

void JThread::trace_edges(const pls::cs::EdgeVisitor& visitor) const {
    pls::cs::Object::trace_edges(visitor);
    pls::cs::trace_value(thread_, visitor);
}

bool JThread::Equals(pls::cs::Ref<pls::cs::Object> const& obj) {
    return JThread::Equals(pls::cs::static_pointer_cast<JThread>(shared_from_this()), obj);
}

static pls::cs::List<pls::cs::Ref<JThread>> JThread_threadBuffer__storage{};

static PLS_NOINLINE void cs_init_89c0d586cfe20341_slow(pls::cs::TypeInitFlag& flag) {
    static pls::cs::GcRootProvider roots([](const pls::cs::EdgeVisitor& visitor) {
        pls::cs::trace_value(JThread_threadBuffer__storage, visitor);
    });
    static pls::cs::TypeInitState state;
    state.run("java.lang.JThread", flag, []() {
        JThread_threadBuffer__storage =
            pls::cs::evaluate_type_initializer_field("F:java.lang.JThread.threadBuffer_", [&]() {
                return pls::cs::List<pls::cs::Ref<JThread>>::make();
            });
    });
}

void JThread::ensure_initialized() {
    static pls::cs::TypeInitFlag flag;
    if (flag.ready())
        return;
    cs_init_89c0d586cfe20341_slow(flag);
}

pls::cs::List<pls::cs::Ref<JThread>>& JThread::threadBuffer_() {
    JThread::ensure_initialized();
    return JThread_threadBuffer__storage;
}

void JThread::create_init(pls::cs::Ref<JThread> self) {
    JThread::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JThread.#ctor", kairo);
    {
    }
}

void JThread::create_init(pls::cs::Ref<JThread> self, pls::cs::Ref<JRunnable> target) {
    JThread::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JThread.#ctor(java.lang.JRunnable)", kairo);
    {
        self->thread_ = ([&]() {
            auto cs_arg0 = ([&]() {
                auto cs_target = static_cast<pls::cs::Ref<JRunnable>>(target);
                if (!cs_target)
                    throw pls::cs::NullReferenceException();
                return pls::cs::Delegate<void()>::bind(
                    cs_target,
                    pls::cs::box(cs_target)->managed_delegate_method_id("M:java.lang.JRunnable.Run"),
                    [cs_weak = pls::cs::DelegateCapture<JRunnable>(cs_target)]() -> void {
                        auto cs_receiver = cs_weak.lock();
                        if (!cs_receiver)
                            throw pls::cs::NullReferenceException();
                        cs_receiver->Run();
                    });
            }());
            return pls::cs::make_ref<pls::cs::Thread>(cs_arg0);
        }());
    }
}

void JThread::create_2_init(pls::cs::Ref<JThread> self, pls::cs::Delegate<void()> start) {
    JThread::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JThread.#ctor(System.Threading.ThreadStart)", kairo);
    {
        self->thread_ = ([&]() {
            auto cs_arg0 = start;
            return pls::cs::make_ref<pls::cs::Thread>(cs_arg0);
        }());
    }
}

// M:java.lang.JThread.op_Equality(java.lang.JThread,java.lang.JThread)
bool JThread::op_Equality(pls::cs::Ref<JThread> obj1, pls::cs::Ref<JThread> obj2) {
    JThread::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JThread.op_Equality(java.lang.JThread,java.lang.JThread)",
                     kairo);
    {
        if (is_null(pls::cs::box(obj1)) || is_null(pls::cs::box(obj2))) {
            return pls::cs::box(pls::cs::box(obj1)) == pls::cs::box(obj2);
        }
        return require(obj1)->Equals(pls::cs::box(obj2));
    }
}

// M:java.lang.JThread.op_Inequality(java.lang.JThread,java.lang.JThread)
bool JThread::op_Inequality(pls::cs::Ref<JThread> obj1, pls::cs::Ref<JThread> obj2) {
    JThread::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JThread.op_Inequality(java.lang.JThread,java.lang.JThread)",
                     kairo);
    {
        return !(([&]() {
            pls::cs::Ref<JThread> cs_left = obj1;
            pls::cs::Ref<JThread> cs_right = obj2;
            return JThread::op_Equality(cs_left, cs_right);
        }()));
    }
}

// M:java.lang.JThread.#ctor
pls::cs::Ref<JThread> JThread::create() {
    JThread::ensure_initialized();
    auto self = pls::cs::make_ref<JThread>();
    JThread::create_init(self);
    return self;
}

// M:java.lang.JThread.#ctor(java.lang.JRunnable)
pls::cs::Ref<JThread> JThread::create(pls::cs::Ref<JRunnable> target) {
    JThread::ensure_initialized();
    auto self = pls::cs::make_ref<JThread>();
    JThread::create_init(self, target);
    return self;
}

// M:java.lang.JThread.#ctor(System.Threading.ThreadStart)
pls::cs::Ref<JThread> JThread::create_2(pls::cs::Delegate<void()> start) {
    JThread::ensure_initialized();
    auto self = pls::cs::make_ref<JThread>();
    JThread::create_2_init(self, start);
    return self;
}

// M:java.lang.JThread.Start
void JThread::Start() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JThread.Start", kairo);
    {
        if (!is_null(thread_)) {
            PLS_API(require(thread_)->Start());
        }
    }
}

// M:java.lang.JThread.Sleep(System.Int64)
void JThread::Sleep(pls::cs::Int64 millis) {
    JThread::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JThread.Sleep(System.Int64)", kairo);
    {
        PLS_API(pls::cs::Thread::Sleep(pls::cs::to_int32(millis)));
    }
}

// M:java.lang.JThread.Yield
void JThread::Yield() {
    JThread::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JThread.Yield", kairo);
    {
        PLS_API(pls::cs::Thread::Sleep(0));
    }
}

// M:java.lang.JThread.CurrentThread
pls::cs::Ref<JThread> JThread::CurrentThread() {
    JThread::ensure_initialized();
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JThread.CurrentThread", kairo);
    {
        for (pls::cs::Int32 i = 0; i < JThread::threadBuffer_().get_Count(); ++i) {
            if ([&]() {
                    auto cs_left = pls::cs::box(require(JThread::threadBuffer_().get_Item(i))->thread_);
                    auto cs_right = pls::cs::box(pls::cs::Thread::get_CurrentThread());
                    return cs_left == cs_right;
                }()) {
                return JThread::threadBuffer_().get_Item(i);
            }
        }
        if (JThread::threadBuffer_().get_Count() > 6) {
            for (pls::cs::Int32 num = pls::cs::Int32(JThread::threadBuffer_().get_Count()) - 1; num >= 0;
                 --num) {
                if (require(require(JThread::threadBuffer_().get_Item(num))->thread_)->get_ThreadState() !=
                    static_cast<pls::cs::ThreadState>(0) /* ThreadState.Running */) {
                    PLS_API(JThread::threadBuffer_().RemoveAt(num));
                }
            }
        }
        pls::cs::Ref<JThread> jThread = JThread::create();
        {
            auto cs_target = jThread;
            auto cs_value = pls::cs::Thread::get_CurrentThread();
            require(cs_target)->thread_ = cs_value;
        }
        PLS_API(JThread::threadBuffer_().Add(jThread));
        return jThread;
    }
}

// M:java.lang.JThread.Equals(System.Object)
bool JThread::Equals(pls::cs::Ref<JThread> self, pls::cs::Ref<pls::cs::Object> obj) {
    require(self);
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JThread.Equals(System.Object)", kairo);
    {
        if (is_instance<pls::cs::Ref<JThread>>(pls::cs::box(obj))) {
            {
                auto cs_left_26 = pls::cs::box(self->thread_);
                auto cs_right_26 =
                    pls::cs::box(require((pls::cs::unbox<pls::cs::Ref<JThread>>(obj)))->thread_);
                return cs_left_26 == cs_right_26;
            }
        }
        if (is_instance<pls::cs::Ref<pls::cs::Thread>>(pls::cs::box(obj))) {
            {
                auto cs_left_27 = pls::cs::box(self->thread_);
                auto cs_right_27 = pls::cs::box(pls::cs::unbox<pls::cs::Ref<pls::cs::Thread>>(obj));
                return cs_left_27 == cs_right_27;
            }
        }
        return pls::cs::box(self) == pls::cs::box(obj);
    }
}

// M:java.lang.JThread.GetHashCode
std::int32_t JThread::GetHashCode() {
    PLS_METHOD_SCOPE("KairoLibrary", "M:java.lang.JThread.GetHashCode", kairo);
    {
        return PLS_API(([&]() {
            auto cs_receiver = pls::cs::box(pls::cs::static_pointer_cast<pls::cs::Object>(this));
            return require(cs_receiver)->pls::cs::Object::GetHashCode();
        }()));
    }
}
} // namespace java::lang
}
