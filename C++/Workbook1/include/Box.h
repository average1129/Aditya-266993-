#include <iostream>

#ifndef __BOX_H
#define __BOX_H

class Box
{
private:
    int m_length;
    int m_height;
    int m_breadth;
public:
    Box();
    Box(int,int,int);
    Box(int);
    Box(const Box &);
    int getbreadth();
    int getheight ();
    int getlength();
    int volume();
    void display();
};
#endif