#include "classa.h"

#include <iostream>

void classa::test_function_a(const classc &param)
{
  value_example = param;
  std::cout << "inside test_function" << std::endl;
  std::cout << value_example.a_test_function_for_classa() << std::endl;
}
