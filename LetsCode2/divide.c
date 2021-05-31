#include "complex_t.h"
#include "funcs.h"

complex_t divide(complex_t inp1 , complex_t inp2)
{
    complex_t result_div;
    result_div.real= inp1.real/inp2.real;
    result_div.imaginary= inp1.imaginary/inp2.imaginary;

return result_div;
}
