#include "complex_t.h"
#include "funcs.h"
#include <stdio.h>

int main()
{
    complex_t a, b, c, d, e, f;
    a.real= 0;
    a.imaginary = 0;

    b.real = 10;
    b.imaginary = - 55;

    c= sum (a,b);
    printf("a.real = %f \n", a.real);
    printf ("a.img  = %f \n", a.imaginary);

    printf("b.real = %f \n", b.real);
    printf ("b.img  = %f \n", b.imaginary);

    printf("a.real + b.real = %f \n", c.real);
    printf ("a.img + b.img = %f \n", c.imaginary);
   
    d = subtract (a,b);
    printf("a.real - b.real = %f \n", d.real);
    printf ("a.img - b.img = %f \n", d.imaginary);

    e= multiply (a,b);
    printf("a.real * b.real = %f \n", e.real);
    printf ("a.img * b.img = %f \n", e.imaginary);

    f= divide(a,b);
    printf("a.real / b.real = %f \n", f.real);
    printf ("a.img / b.img = %f \n", f.imaginary);
    
    
    return 0;
}
