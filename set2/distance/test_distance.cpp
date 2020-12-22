#include"distance.h"
#include <gtest/gtest.h>
namespace 
{
   
    TEST(Distance, Parameterized) 
  {
    Distance B1(5,5);
    Distance B2(1,2);
    Distance B3(B1+B2);

    EXPECT_EQ(6, B3.getm_feets());
    EXPECT_EQ(7, B3.getm_inches());

  }
}