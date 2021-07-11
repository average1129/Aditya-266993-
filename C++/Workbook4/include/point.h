#ifndef __GPOINT_H
#define __GPOINT_H

enum Quadrant {
  Q1,
  Q2,
  Q3,
  Q4
};


template<typename T>
class Point {
  T m_x;
  T m_y;
  public:
  Point();
  Point(T,T);
  T xaxis();
  T yaxis();
  T distanceFromOrigin();
  Quadrant quadrant();
  void display();
};

#endif
