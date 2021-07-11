#include <iostream>
#include "array.h"
using namespace std;
template<typename T>
MyArray<T>::MyArray():
    m_arr(NULL),m_len(0){
 }
template<typename T>
MyArray<T>::MyArray(int len):
    m_len(len){
    }
template<typename T>
MyArray<T>::~MyArray(){}
template<typename T>
void MyArray<T>::append(T val){
}
template<typename T>
T MyArray<T>::at(int index){
return index;
}
template<typename T>
bool MyArray<T>::search(T key) const{
if(key==1){
    return true;
}
else{
    return false;
}
}
template<typename T>
T MyArray<T>::sum() const{
    for(int i=0;i<=m_len;i++){
        sum=sum+m_arr;
        return sum;
    }
}
template<typename T>
T MyArray<T>::min() const{
    min(m_arr);
}
template<typename T>
T MyArray<T>::max() const{
    max(m_arr);
}
template<typename T>
void MyArray<T>::reverse(){
reverse(m_arr);
}
template<typename T>
void MyArray<T>::sort(){
sort(m_arr);
}
