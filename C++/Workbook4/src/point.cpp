#include"point.h"
#include<iostream>
#include<math.h>

template<typename T>
Point<T>::Point():m_x(0),m_y(0){}
template<typename T>
Point<T>::Point(T x,T y):m_x(x),m_y(y){}
template<typename T>
T Point<T>::xaxis(){
	return m_x;
}
template<typename T>
T Point<T>::yaxis(){
	return m_y;
}
template<typename T>
T Point<T>::distanceFromOrigin(){
	T a;
	a=pow(m_x,2)+pow(m_y,2);
	T o;
	o=pow(a,0.5);
	return o;
}
template<typename T>
Quadrant Point<T>::quadrant(){
	if(m_x>0 && m_y<0){return Q4;}
	else if(m_x>0 && m_y>0){return Q1;}
	else if(m_x<0 && m_y>0){return Q2;}
	else{return Q3;}
}
template<typename T>
void Point<T>::display(){
	std::cout<<m_x<<","<<m_y;
}
