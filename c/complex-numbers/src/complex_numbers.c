#include "complex_numbers.h"

complex_t c_add(complex_t a, complex_t b)
{
        complex_t r = {a.real + b.real, a.imag + b.imag}; 

        return r; 
}

complex_t c_sub(complex_t a, complex_t b)
{
        complex_t r = {a.real - b.real, a.imag - b.imag}; 

        return r; 
}

complex_t c_mul(complex_t a, complex_t b)
{
        complex_t r = {a.real * b.real - a.imag * b.imag, 
                       a.imag * b.real + a.real * b.imag}; 

        return r; 
}

complex_t c_div(complex_t a, complex_t b)
{
        complex_t r; 

        double denom = (b.real * b.real + b.imag * b.imag);

        r.real = (a.real * b.real + a.imag * b.imag) / denom; 
        r.imag = (a.imag * b.real - a.real * b.imag) / denom; 

        return r; 
}

double c_abs(complex_t x)
{
        double r = sqrt(x.real * x.real + x.imag * x.imag); 

        return r; 
}

complex_t c_conjugate(complex_t x)
{
        complex_t r = {x.real, 0 - x.imag}; 
        return r; 
}

double c_real(complex_t x)
{
        return x.real; 
}

double c_imag(complex_t x)
{
        return x.imag; 
}

complex_t c_exp(complex_t x)
{
        complex_t euler_id = {cos(x.imag), sin(x.imag)}; 

        double a = exp(x.real); 

        complex_t r = {a * euler_id.real, a * euler_id.imag}; 

        return r; 
}
