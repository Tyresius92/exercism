#pragma once

#include <stdexcept>
#include <float.h>

namespace triangle {

        enum {
                equilateral, 
                scalene, 
                isosceles
        };
        
        int kind(double n1, double n2, double n3);
};