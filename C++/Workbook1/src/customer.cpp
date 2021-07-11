#include<iostream>
#include "customer.h"
using namespace std;
//std::string name

Customer::Customer() :
	m_custId(0), m_phone(0),m_type(0),m_custName(""), m_balance(0) {
}



Customer::Customer(int id,int phone ,int type,std::string name, double bal) :
	m_custId(id), m_phone(phone),m_type(type),m_custName(name), m_balance(bal) {
}



Customer::Customer(int id,int phone ,int type) :
	m_custId(id), m_phone(phone),m_type(type) {
}



Customer::Customer(const Customer& ref) :
	m_custId(ref.m_custId), m_custName(ref.m_custName),
	m_balance(ref.m_balance) {
}


void Customer::credit(double amount) {
	m_balance += amount;
}
void Customer::makecall(int m_phone) {
	cout<<m_phone;;
}
double Customer::getBalance() const {
	return m_balance;
}
void Customer::display() {
	std::cout << m_custId << "," <<m_phone<<","<<m_type<<","<< m_custName << ","
		<< m_balance << "\n";
}

