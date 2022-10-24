#include "classb.h"

#include <iostream>

void classb::test_function_b(const classc &param)
{
  value_example = param;
  std::cout << value_example.a_test_function_for_classb();
}


void classb::function_pointers_show(void)
{
  printf("show the function pointers address to show the POC");
  printf("function 1 pointer: 0x%08x\r\n", (void*)&classc::a_test_function_for_classa);
  printf("function 2 pointer: 0x%08x\r\n", (void*)&classc::a_test_function_for_classb);
}
