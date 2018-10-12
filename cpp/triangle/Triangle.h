#pragma once

#include <stdexcept>

namespace triangle {

        const int equilateral = 1; 
        const int scalene = 2; 
        const int isosceles = 3;

        int kind(float n1, float n2, float n3);
};