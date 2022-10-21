#include "classa.h"

#include <iostream>

void classa::test_function_a(const classc &param)
{
  value_example = param;
  std::cout << param.a_test_function_for_classa();
}
