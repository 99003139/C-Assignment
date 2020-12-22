#include "customer.h"
#include <gtest/gtest.h>
namespace {
TEST(Customer, Empty_Cosnstructor) {
    Customer B1;
  EXPECT_EQ(0.0, B1.getBalance());
  
  
}

TEST(Point, Parameterized_Cosnstructor) {
    Point B1("1","Koushani","123456",1000);
    B1.credit(200);
    B1.makeCall(700);
  EXPECT_EQ(500, B1.getBalance());
  
}


}







