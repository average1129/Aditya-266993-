
#include<string>
//#include "gtest/gtest.h"
#include<iostream>
using namespace std;

#ifndef __CUSTOMER_H
#define __CUSTOMER_H


class Customer{
    int m_custId, m_phone, m_type;
    double m_balance;
    std::string m_custName;

public:
    Customer();
    Customer(int,int,int,string,double);
    Customer(int,int,int);
    Customer(const Customer &);
    void  credit(double);
    void makecall(int);
    double getBalance() const;
    void display();


};

#endif