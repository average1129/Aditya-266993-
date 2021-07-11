#ifndef __POSTPAID_H
#define __POSTPAID_H

#include<string>
#include<cstdint>

#include "customer.h"

class PostpaidCustomer : public CustomerBase {
  void billPay(double);
  public:
  PostpaidCustomer();
  PostpaidCustomer(std::string,std::string,std::string,double,int);
  PostpaidCustomer(std::string,std::string,std::string);
  void credit(double);           //recharge or billPay
  void makeCall(double);
  double getBalance();
  void display();

};

#endif
