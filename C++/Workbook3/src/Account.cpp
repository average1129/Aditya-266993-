#include<iostream>
#include"Account.h"
#include"CreditAccount.h"
#include"SavingsAccount.h"
using namespace std;

AccountBase::AccountBase(){}
AccountBase::AccountBase(string number,string name,double balance):
    m_accNumber(number),m_accName(name),m_balance(balance){}

AccountBase::AccountBase(string number,string name):
   m_accNumber(number),m_accName(name),m_balance(0){
}
AccountBase::AccountBase(const AccountBase &ref):
    m_accNumber(ref.m_accNumber),m_accName(ref.m_accName),m_balance(ref.m_balance){
}
CreditAccount::CreditAccount(){}
CreditAccount::CreditAccount(string number,string name,double balance):
    m_accNumber(number),m_accName(name),m_balance(balance){
}
CreditAccount::CreditAccount(string number,string name):
   m_accNumber(number),m_accName(name),m_balance(0){
}

SavingsAccount::SavingsAccount(){}
SavingsAccount::SavingsAccount(string number,string name,double balance):
    m_accNumber(number),m_accName(name),m_balance(balance){
}
SavingsAccount::SavingsAccount(string number,string name):
    m_accNumber(number),m_accName(name),m_balance(0){
}

double CreditAccount::debit(double dr)
{
    m_balance -= dr;
    return m_balance;
}
double SavingsAccount::debit(double dr)
{
    m_balance -= dr;
    return m_balance;
}
double CreditAccount::credit(double cr)
{
    m_balance += cr;
    return m_balance;
}
double SavingsAccount::credit(double cr)
{
    m_balance += cr;
    return m_balance;
}
void CreditAccount::display(){
    cout<<"Current:"<<m_accName<<","<<m_accNumber<<","<<m_balance<<endl;
}
void SavingsAccount::display(){
    cout<<"Savings:"<<m_accName<<","<<m_accNumber<<","<<m_balance<<endl;
}
