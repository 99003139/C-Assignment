#include"fraction.h"
#include<gtest/gtest.h>
namespace{
    TEST(Fraction,EmptyConstructor)
    {
    Fraction F1;
    EXPECT_EQ(1,F1.numerator());
    EXPECT_EQ(1,F1.denominator());
    }

    TEST(Fraction,ParamConstructor) {
    Fraction F1(10,10);
    EXPECT_EQ(10,F1.numerator());
    EXPECT_EQ(10,F1.denominator());
    }

    TEST(Fraction,SingleParamConstructor) {
   Fraction F1(10);
    EXPECT_EQ(10,F1.numerator());
    EXPECT_EQ(1,F1.denominator());
    }
}