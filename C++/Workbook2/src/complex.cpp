#include <iostream>
#include "/home/adi/LTTS/C++/Workbook2/include/complex.h"

Complex::Complex(): m_real(0), m_imag(0){}

Complex::Complex(int x, int y): m_real(x), m_imag(y){}

Complex :: Complex(int t): m_real(t) {}

Complex Complex::operator+ (const Complex &ref)
{

    int imaginary = m_imag + ref.m_imag;
    int real = m_real + ref.m_real;
    return Complex(imaginary,real);
}

Complex Complex::operator- (const Complex &ref)
{

    int imaginary = m_imag - ref.m_imag;
    int real = m_real - ref.m_real;
    return Complex(imaginary,real);
}

Complex Complex::operator* (const Complex &ref)
{

    int imaginary = m_imag * ref.m_imag;
    int real = m_real * ref.m_real;
    return Complex(imaginary,real);
}

Complex& Complex::operator++(){

++m_imag;
return *this;
}

Complex Complex :: operator ++(int numbert)
{

    Complex oig(*this);
    ++m_real;
    return oig;
}

bool Complex :: operator == (const Complex &ref)
{

    return m_real == ref.m_real && m_imag == ref.m_imag;

}

void Complex :: display ()
{

    std::cout<<m_real<<","<<m_imag<<"\n";
}
float Complex :: getreal()
{

    return m_real;
}
float Complex :: getimag()
{

    return m_imag;
}
