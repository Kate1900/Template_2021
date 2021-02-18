#include "multiply.h"

#include <gtest.h>


TEST(test_lib, simple_test)
{
  int v  = multiply(2,5);
  EXPECT_EQ(10, v);
}

