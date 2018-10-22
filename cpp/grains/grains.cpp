#include "grains.h"

unsigned long long grains::square(unsigned sq_num)
{
        if (sq_num <= 0 || sq_num > 64) {
                throw "Square number out of range!";
        }

        unsigned long long grains = 1; 

        grains = grains << sq_num - 1; //equivalent to 2^(sq_num - 1)

        return grains; 
}

unsigned long long grains::total()
{
        unsigned long long total = 0; 

        for (int i = 1; i < 65; i++) {
                total += square(i); 
        }

        return total;
}
