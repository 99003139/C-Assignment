#include "distance.h"
#include<iostream>



  Distance::Distance():m_feets(0), m_inches(0)
  {

  }
  Distance::Distance(int feet,int inch): m_feets(feet), m_inches(inch)
  {

  }
  Distance::Distance(int val):m_feets(val),m_inches(val)
  {

  }
  Distance Distance::operator+(const Distance& ref)
  {
      Distance temp;
      temp.m_inches=this-> m_inches + ref.m_inches;
        temp.m_feets=this->m_feets + ref.m_feets;
        return temp;

  }
  Distance Distance::operator-(const Distance& ref)
  {
      Distance temp;
      temp.m_inches=this-> m_inches - ref.m_inches;
        temp.m_feets=this->m_feets - ref.m_feets;
        return temp;

  }
  Distance Distance::operator+(int d)
  {
    Distance temp;
      temp.m_inches=this->m_inches+d;
      temp.m_feets=this->m_feets+d;
      return temp;
  }
  Distance Distance::operator-(int d)
  {
    Distance temp;
      temp.m_inches=this->m_inches-d;
      temp.m_feets=this->m_feets-d;
      return temp;
  }
   Distance& Distance::operator++()
  {
  
      ++m_inches;
      ++m_feets;
      return *this;
  }
   Distance Distance::operator++(int x)
  {
    Distance temp;
      temp.m_inches=this->m_inches++;
      temp.m_feets=this->m_feets++;
      return temp;
  }
  bool Distance::operator==(const Distance& ref)
  {
      return (this->m_inches==ref.m_feets?true:false);

  }
  bool Distance::operator<(const Distance& ref)
  {
      return (this->m_inches<ref.m_feets?true:false);

  }
  bool Distance::operator>(const Distance& ref)
  {
      return (this->m_inches>ref.m_feets?true:false);

  }
  std::ostream& operator<<(const std::ostream& rout, const Distance& ref)
  {
    return rout << ref.m_feets << "+" << ref.m_inches;
    //return rout;
  }
  void Distance::display() const
  {
      std::cout<<"Distance in feet"<<m_feets
              <<"Distance in inches"<<m_inches;
  }
  int Distance::getm_feets()
  {
    return m_feets;
  }
  int Distance::getm_inches()
  {
    return m_inches;
  }
