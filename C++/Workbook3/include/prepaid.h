#ifndef __PREPAID_H
#define __PREPAID_H

#include<string>
#include<cstdint>

#include "customer.h"

class PrepaidCustomer : public CustomerBase {
  void recharge(double);
  public:
  PrepaidCustomer();
  PrepaidCustomer(std::string,std::string,std::string,double,int);
  PrepaidCustomer(std::string,std::string,std::string);
  void credit(double);           //recharge or billPay
  void makeCall(double);
  double getBalance();
  void display();

};

#endif

