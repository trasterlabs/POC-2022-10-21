#ifndef CLASSB_H
#define CLASSB_H

#include "classc.h"

class classb
{
  public:
  void test_function_b(const classc &param);
  void function_pointers_show();
  private:
  classc value_example;
};

#endif // CLASSB_H
