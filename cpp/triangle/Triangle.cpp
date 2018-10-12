#include "Triangle.h"

bool isValidTriangle(float n1, float n2, float n3) {
        if (n1 <= 0 || n2 <= 0 || n3 <= 0) {
                return false; 
        }

        if (n1 + n2 < n3 || n1 + n3 < n2 || n2 + n3 < n1) {
                return false; 
        }

        return true; 
}

int triangle::kind(float n1, float n2, float n3) 
{
        if (!isValidTriangle(n1, n2, n3)) {
                throw std::domain_error("Invalid Triangle!");
        }

        if (n1 == n2 && n2 == n3) {
                return equilateral;
        }
        else if (n1 == n2 || n2 == n3 || n1 == n3) {
                return isosceles; 
        }

        return scalene; 
}