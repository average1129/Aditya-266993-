#include <iostream>

#include "/home/adi/LTTS/C++/Workbook1/include/Box.h"
Box::Box():m_length(0), m_breadth(0), m_height(0)
{
}
Box::Box(int l, int b, int h) :
  m_length(l), m_breadth(b), m_height(h)
{
}
Box::Box( const Box& dis):
    m_length(dis.m_length),
    m_height(dis.m_height),
    m_breadth(dis.m_breadth)
    {
    }
    int Box:: getbreadth()
    {
    return m_breadth;
    }
    int Box:: getheight ()
    {
    return m_height;
    }
    int Box:: getlength ()
    {
    return m_length;
    }
    int Box:: volume()
    {
        return(m_length*m_breadth*m_height);

    }
    void Box:: display(){
    std::cout << m_length << "," << m_breadth << ","<< m_height << "\n";
    }

/*int main ()
{
  return 0;
}*/
