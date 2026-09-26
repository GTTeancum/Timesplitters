#include "MiniTest.h"
void register_ps2_runtime_interrupt_tests();
void reset_ps2_test_function_table();
int main()
{
    MiniTest::BeforeEach(reset_ps2_test_function_table);
    register_ps2_runtime_interrupt_tests();
    return MiniTest::Run();
}
