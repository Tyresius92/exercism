#include "Triangle.h"

bool isValidTriangle(double n1, double n2, double n3) {
        if (n1 <= 0 || n2 <= 0 || n3 <= 0) {
                return false; 
        }

        if (n1 + n2 < n3 + DBL_EPSILON || n1 + n3 < n2 + DBL_EPSILON || n2 + n3 < n1 + DBL_EPSILON) {
                return false; 
        }

        return true; 
}

int triangle::kind(double n1, double n2, double n3) 
{
        if (!isValidTriangle(n1, n2, n3)) {
                throw std::domain_error("Invalid Triangle!");
        }

        if (fabs(n1 - n2) < DBL_EPSILON && fabs(n2 - n3) < DBL_EPSILON) {
                return equilateral;
        }
        else if (fabs(n1 - n2) < DBL_EPSILON || fabs(n2 - n3) < DBL_EPSILON || fabs(n1 - n3) < DBL_EPSILON) {
                return isosceles; 
        }

        return scalene; 
}