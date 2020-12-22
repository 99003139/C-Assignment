#include"customer.h"

#include<string>
#include<cstdint>
#include<iostream>



  Customer::Customer():m_custId(""),m_custName(""),m_phone(""),m_balance(0.0)
  {

  }
  Customer::Customer(std::string id,std::string name,std::string phone,double balance):m_custId(id),m_custName(name),m_phone(phone),m_balance(balance)
  {

  }
  Customer::Customer(std::string id,std::string name,std::string phone):m_custId(id),m_custName(name),m_phone(phone)
  {

  }
  Customer::Customer(const Customer& ref):m_custId(ref.m_custId),m_custName(ref.m_custName),m_phone(ref.m_phone),m_balance(ref.m_balance)
  {

  }
  void Customer::credit(double amt)
 
  {
     
    m_balance=m_balance+amt;
    }         //recharge or billPay
  void Customer::makeCall(double amt)
  {
      m_balance=m_balance-amt;
  }
  double Customer::getBalance() const
  {
      return m_balance;
  }
  void Customer::dispay() const
  {
      std::cout<<"Current balance"<<m_balance;
  }


