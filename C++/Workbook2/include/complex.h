#include <iostream>

#ifndef __COMPLEX_H
#define __COMPLEX_H

class Complex {
 float m_real,m_imag;

 public:
     Complex();
     Complex(int,int);
     Complex(int);

     Complex operator +(const Complex &ref);
     Complex operator -(const Complex &ref);
     Complex operator *(const Complex &ref);
     Complex& operator ++();
     Complex operator ++(int abc);
     bool operator==(const Complex &ref);
     void display();
     float getreal();
     float getimag();
};
#endif