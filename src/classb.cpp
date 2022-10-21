#include "classb.h"

#include <iostream>

void classb::test_function_b(const classc &param)
{
  value_example = param;
  std::cout << param.a_test_function_for_classb();
}
