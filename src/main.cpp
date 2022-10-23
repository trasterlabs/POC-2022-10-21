#include <iostream>

#include <classa.h>
#include <classb.h>
#include <classc.h>

int main (void)
{
  classa testa;
  classb testb;
  classc testc;
  testa.test_function_a(testc);
  testb.test_function_b(testc);
  return 0;
}
