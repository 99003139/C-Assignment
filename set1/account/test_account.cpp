#include "account.h"
#include <gtest/gtest.h>
namespace 
{
TEST(Account, Transaction) {
    Account B1;

  EXPECT_EQ(0.0, B1.getBalance());
}
TEST(Account, Parameterized_Transaction) {
    Account B1("100","Koushani",100.0);

  EXPECT_EQ(100.0, B1.getBalance());
}
TEST(Account, Parameterized_Transaction) {
    Account B1("100","Koushani");

  EXPECT_EQ(100.0, B1.getBalance());
}
TEST(Account, Parameterized_Transaction) {
    Account B1("100","Koushani",100.0);
    B1.debit(20.0);
    B1.credit(10.0);


  EXPECT_EQ(90.0, B1.getBalance());
}

TEST(Account, Parameterized_Transaction) {
    Account B1("100","Koushani",100.0);
    Account B2(B1);

    EXPECT_EQ("100", B2.m_accNumber());
  EXPECT_EQ("KOushani", B2.m_accName());
  EXPECT_EQ(100.0, B2.m_balance());

  EXPECT_EQ(100.0, B1.getBalance());
}


}