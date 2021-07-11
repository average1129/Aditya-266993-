#include<iostream>

#ifndef __COLOR_H
#define __COLOR_H
enum color_t
{
    m_r,
    m_g,
    m_b
};
class Color
{
private:
    int m_r;
    int m_g;
    int m_b;
public:
    Color();
    Color(int,int,int);
    Color(color_t);
    Color(int);
    int invert();
    void display ();
    int greencolor();
    int bluecolor();
    int redcolor();
};

#endif