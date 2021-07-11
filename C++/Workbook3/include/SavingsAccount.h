#ifndef __SAVINGS_ACCOUNT_H
#define __SAVINGS_ACCOUNT_H

#include<string>
#include"Account.h"

class SavingsAccount : public AccountBase {
 std::string m_accNumber;
  std::string m_accName;
double m_balance;
    public:
  SavingsAccount();
  SavingsAccount(std::string,std::string,double);
  SavingsAccount(std::string,std::string);
  double debit(double);
  double credit(double);
  void display();
};

#endif
