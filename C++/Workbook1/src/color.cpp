#include<iostream>
#include "color.h"
Color::Color():m_r(0), m_g(0), m_b(0)
{
}
Color::Color(int r, int g, int b) :
  m_r(r), m_g(g), m_b(b)
{
}
Color::Color(color_t)
{
}
int Color:: invert()
{
    m_r  = 255 - m_r;
    m_b = 255 - m_b;
    m_g= 255 - m_g;

    return m_r;
}
int Color:: greencolor()
{
    return m_g;
}
int Color:: redcolor()
{
    return m_r;
}
int Color:: bluecolor()
{
    return m_b;
}
void Color:: display(){
    std::cout << m_r << "," << m_g << ","<< m_b << "\n";
    }
