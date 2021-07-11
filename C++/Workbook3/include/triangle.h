#ifndef __TRIANGLE_H
#define __TRIANGLE_H

#include "polygon.h"

class Triangle : public Polygon {
  int  m_a;
  int  m_b;
  int  m_c;

public:
  Triangle(int x,int y,int z);
  virtual double area() ;
  virtual double circumference();
};

#endif
