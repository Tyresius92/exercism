#include "Triangle.h"

bool isEqualDbl(double a, double b) {
        return fabs(a - b) < DBL_EPSILON;
}

bool isValidTriangle(double n1, double n2, double n3) {
        if (n1 <= 0 || n2 <= 0 || n3 <= 0) {
                return false; 
        }

        if (n1 + n2 < n3 || n1 + n3 < n2 || n2 + n3 < n1) {
                return false; 
        }

        return true; 
}

int triangle::kind(double n1, double n2, double n3) 
{
        if (!isValidTriangle(n1, n2, n3)) {
                throw std::domain_error("Invalid Triangle!");
        }

        if (isEqualDbl(n1, n2) && isEqualDbl(n2, n3)) {
                return equilateral;
        }
        else if (isEqualDbl(n1, n2) || isEqualDbl(n1, n3) || isEqualDbl(n2, n3)) {
                return isosceles; 
        }

        return scalene; 
}