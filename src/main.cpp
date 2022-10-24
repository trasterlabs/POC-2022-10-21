#include <iostream>

#include <classa.h>
#include <classb.h>
#include <classc.h>

int main (void)
{
  std::cout << "Obscure things happen inside classc!" << std::endl;
  classa testa;
  classb testb;
  classc testc;
  testa.test_function_a(testc);
  testa.function_pointers_show();
  testb.test_function_b(testc);
  testb.function_pointers_show();
  return 0;
}
