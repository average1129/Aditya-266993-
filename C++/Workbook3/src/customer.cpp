#include "customer.h"
#include"prepaid.h"
#include"postpaid.h"
#include<iostream>
using namespace std;

CustomerBase::CustomerBase(){}
CustomerBase::CustomerBase(string id,string name,string phone, double balance,int bill):
    m_custId(id),m_custName(name),m_phone(phone),m_balance(balance),m_billDate(bill){}

CustomerBase::CustomerBase(string id,string name,string phone):
   m_custId(id),m_custName(name),m_phone(phone),m_balance(0),m_billDate(0){
}
CustomerBase::CustomerBase(const CustomerBase &ref):
    m_custId(ref.m_custId),m_custName(ref.m_custName),m_phone(ref.m_phone),m_balance(ref.m_balance){
}
PrepaidCustomer::PrepaidCustomer():CustomerBase(){}
PrepaidCustomer::PrepaidCustomer(string id,string name,string phone):CustomerBase(id,name,phone){
}
PrepaidCustomer::PrepaidCustomer(string id,string name,string phone, double balance,int bill):CustomerBase(id,name,phone,balance,bill){
}
PostpaidCustomer::PostpaidCustomer():CustomerBase(){}
PostpaidCustomer::PostpaidCustomer(string id,string name,string phone):CustomerBase(id,name,phone){
}
PostpaidCustomer::PostpaidCustomer(string id,string name,string phone, double balance,int bill):CustomerBase(id,name,phone,balance,bill){
}
void PostpaidCustomer::credit(double amount)
{
m_balance += amount;
}
void PostpaidCustomer::makeCall(double amount)
{
m_balance -= amount;
}
double PostpaidCustomer::getBalance()
{
    return m_balance;
}
void PostpaidCustomer::display()
{

}
void PrepaidCustomer::credit(double amount)
{
m_balance += amount;
}
void PrepaidCustomer::makeCall(double amount)
{
m_balance -= amount;
}
double PrepaidCustomer::getBalance()
{
    return m_balance;
}
void PrepaidCustomer::display()
{

}
