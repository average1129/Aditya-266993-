#ifndef __BANKING_H
#define __BANKING_H

#include<string>
#include"Account.h"

class CreditAccount : public AccountBase {
  std::string m_accNumber;
  std::string m_accName;
  double m_balance;
  public:
  CreditAccount();
  CreditAccount(std::string,std::string,double);
  CreditAccount(std::string,std::string);
  double debit(double);
  double credit(double);
  void display();
};

#endif


