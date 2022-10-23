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
  testb.test_function_b(testc);
  return 0;
}
