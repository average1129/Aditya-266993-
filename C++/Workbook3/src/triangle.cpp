#include "/home/adi/LTTS/C++/Workbook3/include/triangle.h"
#include <cmath>

Triangle::Triangle(int x,int y,int z): m_a(x),m_b(y),m_c(z){}

double Triangle:: area()
{
     double p = (m_a + m_b + m_c)/2;

    return sqrt(p*(p-m_a)*(p-m_b)*(p-m_c));
}

double Triangle:: circumference()
{
   return m_a+m_b+m_c;
}

