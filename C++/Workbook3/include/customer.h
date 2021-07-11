#ifndef __CUSTOMER_H
#define __CUSTOMER_H

#include<string>
#include<cstdint>

enum AccountType {
  Prepaid,
  Postpaid
};

class CustomerBase {
    protected:
  std::string m_custId;
  std::string m_custName;
  std::string m_phone;
  double m_balance;
  int m_billDate;
  AccountType m_type;
  public:
  CustomerBase();
  CustomerBase(std::string,std::string,std::string,double,int);
  CustomerBase(std::string,std::string,std::string);
  CustomerBase(const CustomerBase&);
  virtual void credit(double)=0;           //recharge or billPay
  virtual void makeCall(double)=0;
  virtual double getBalance() = 0;
  virtual  void display() = 0;
};

#endif
