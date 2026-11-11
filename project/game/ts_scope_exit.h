// Cleanup for boot diagnostics, including early returns and C++ unwinding.
// Does not promise recovery after abort/exit/longjmp or process termination.
#pragma once
#include <utility>
namespace ts_diagnostics
{
    template<class F> class ScopeExit
    {
    public:
        explicit ScopeExit(F action) : action_(std::move(action)) {}
        ScopeExit(const ScopeExit&) = delete;
        ScopeExit& operator=(const ScopeExit&) = delete;
        ~ScopeExit() noexcept { action_(); }
    private:
        F action_;
    };
    template<class F> ScopeExit<F> onExit(F action) { return ScopeExit<F>(std::move(action)); }
}
