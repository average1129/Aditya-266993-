#include "/home/adi/LTTS/C++/Workbook3/include/circle.h"

Circle::Circle(int r): m_radius(r){}

double Circle::area()
{
    return m_radius*m_radius * PI;
}

double Circle::circumference()
{
    return 2*PI*m_radius;

}
