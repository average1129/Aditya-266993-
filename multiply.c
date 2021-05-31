#include "complex_t.h"
#include "funcs.h"

complex_t multiply(complex_t inp1, complex_t inp2)
{   
    complex_t result_prod;
    result_prod.real=inp1.real*inp2.real;
    result_prod.imaginary =inp1.imaginary*inp2.imaginary;

return result_prod; }
