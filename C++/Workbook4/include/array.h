#ifndef __GARRAY_H
#define __GARRAY_H

template<typename T>
class MyArray {
  int *m_arr;
  int m_len;
  public:
  MyArray();
  MyArray(int len);
  ~MyArray();
  void append(T val);
  T at(int index);
  bool search(T key) const;
  T sum() const;
  T min() const;
  T max() const;
  void reverse();
  void sort();
};

#endif
