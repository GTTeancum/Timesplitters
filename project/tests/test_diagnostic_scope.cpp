// Standalone: c++ -std=c++17 project/tests/test_diagnostic_scope.cpp -o /tmp/test-diagnostic-scope
#include "../game/ts_scope_exit.h"
#include <array>
#include <cassert>
#include <cstring>
#include <stdexcept>

static void exercise(std::array<unsigned char, 16>& memory, bool early, bool fail)
{
    const auto saved = memory;
    auto restore = ts_diagnostics::onExit([&]() noexcept { memory = saved; });
    memory.fill(0xCC);
    if (early) return;
    if (fail) throw std::runtime_error("diagnostic failure");
}
int main()
{
    std::array<unsigned char, 16> memory{};
    for (unsigned i = 0; i < memory.size(); ++i) memory[i] = static_cast<unsigned char>(i);
    const auto expected = memory;
    exercise(memory, false, false);
    assert(memory == expected);
    exercise(memory, true, false);
    assert(memory == expected);
    try { exercise(memory, false, true); } catch (const std::runtime_error&) {}
    assert(memory == expected);
    int order = 0;
    { auto outer = ts_diagnostics::onExit([&]() noexcept { assert(order == 1); order = 2; });
      auto inner = ts_diagnostics::onExit([&]() noexcept { assert(order == 0); order = 1; }); }
    assert(order == 2);
}
