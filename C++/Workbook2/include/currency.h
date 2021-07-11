#include <iostream>
#ifndef __CURRENCY_H
#define __CURRENCY_H

class Currency {
	int m_rupees;
	int m_paise;
public:
	Currency();
	Currency(int, int);
	Currency(int);
	Currency(const Currency&);
	Currency operator+(const Currency&);
	Currency operator-(const Currency&);
	Currency operator+(int);
	Currency operator-(int);
	Currency operator++();
	Currency operator++(int);
	int rupees();
	int paise();
	bool operator==(const Currency&);
	bool operator<(const Currency &);
	bool operator>(const Currency&);
	void display();
};
#endif