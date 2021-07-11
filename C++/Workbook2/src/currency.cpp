#include "currency.h"
#include <iostream>

Currency::Currency() :m_rupees(0), m_paise(0) {}
Currency::Currency(int a, int b):m_rupees(a),m_paise(b){}
Currency::Currency(int a) {
	m_paise= m_paise + a;
	m_rupees = 0;
	if (m_paise > 99) {
		m_rupees += 1;
		m_paise = m_paise - 100;
	}
}
Currency::Currency(const Currency& ref) : m_rupees(ref.m_rupees), m_paise(ref.m_paise) {}
Currency Currency::operator+(const Currency& ref) {
	int rup = m_rupees + ref.m_rupees;
	int pai = m_paise + ref.m_paise;
	return Currency(rup, pai);
}
Currency Currency::operator-(const Currency& ref) {
	int rup = m_rupees - ref.m_rupees;
	int pai = m_paise - ref.m_paise;
	return Currency(rup, pai);
}
Currency Currency::operator+(int p) {
	int rup = m_rupees;
	int pai = m_paise + p;
	if (pai > 99) {
		rup += 1;
		pai -= 100;
	}
	return Currency(rup, pai);
}
Currency Currency::operator-(int p) {
	int rup = m_rupees;
	int pai = m_paise - p;
	if (pai < 0) {
		rup -= 1;
		pai += 100;
	}
	return Currency(rup, pai);
}
Currency Currency:: operator ++ ()
{
	Currency temp;
	if (temp.m_paise > 99) {
		temp.m_rupees = temp.m_rupees + 1;
		temp.m_paise = temp.m_paise - 100;
	}
	temp.m_rupees += m_rupees ;
	temp.m_paise = m_paise + 1;

	return temp;
}

Currency Currency:: operator ++ (int dummy)//post
{
	Currency temp;
	temp.m_rupees = m_rupees;
	temp.m_paise = m_paise++;
	if (temp.m_paise > 99) {
		temp.m_rupees += 1;
		temp.m_paise -= 100;
	}
	return temp;
}
int Currency::rupees() {
	return m_rupees;
}
int Currency::paise() {
	return m_paise;
}
bool Currency ::   operator== (const Currency &ref_val)
{
	return m_rupees == ref_val.m_rupees && m_paise == ref_val.m_paise;
}
bool Currency::operator< (const Currency& ref_val1) {
	return m_rupees < ref_val1.m_rupees && m_paise < ref_val1.m_paise;
}
bool Currency::operator> (const Currency& ref_val2) {
	return m_rupees > ref_val2.m_rupees && m_paise > ref_val2.m_paise;
}
void Currency::display() {
	std::cout << m_rupees << "." << m_paise;
}
