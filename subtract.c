#include "complex_t.h"
#include "funcs.h"

complex_t subtract(complex_t inp1, complex_t inp2)
{   
    complex_t result_diff;
    result_diff.real=inp1.real-inp2.real;
    result_diff.imaginary =inp1.imaginary-inp2.imaginary;

return result_diff; }