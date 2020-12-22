
#include "point.h"
#include <gtest/gtest.h>
namespace {
/*TEST(Point, Empty_Cosnstructor) {
    Point B1;
  EXPECT_EQ(0, B1.m_x());
  EXPECT_EQ(0, B1.m_y());
  
}

TEST(Point, Parameterized_Cosnstructor) {
    Point B1(1,2);
  EXPECT_EQ(1, B1.m_x());
  EXPECT_EQ(2, B1.m_y());
  
}

TEST(Point, Copy_Cosnstructor) {
    Point B1(1,2);
    Point B2(B1);
  EXPECT_EQ(1, B2.m_x());
  EXPECT_EQ(2, B2.m_y());
  
}*/

TEST(Point, origin){
    Point B1(0,0);
    EXPECT_EQ(true, B1.isOrigin());
}
}







