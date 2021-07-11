#ifndef __CIRCLE_H
#define __CIRCLE_H

#include "shape.h"
const double PI = 22.0/7.0;

class Circle : public IShape {
  double m_radius;

public:
  Circle(int r);
  virtual double area();
  virtual double circumference();
};

#endif
