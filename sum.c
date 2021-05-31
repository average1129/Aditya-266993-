#include "complex_t.h"
#include "funcs.h"

complex_t sum(complex_t inp1, complex_t inp2)
{   
    complex_t result_sum;
    result_sum.real=inp1.real+inp2.real;
    result_sum.imaginary =inp1.imaginary+inp2.imaginary;

return result_sum; }