#include "grains.h"

uint64_t grains::square(unsigned sq_num)
{
        if (sq_num <= 0 || sq_num > 64) {
                throw "Square number out of range!";
        }

        uint64_t grains = 1;

        grains = grains << (sq_num - 1); //equivalent to 2^(sq_num - 1)

        return grains; 
}

uint64_t grains::total()
{
        uint64_t total = 0;

        for (int i = 1; i < 65; i++) {
                total += square(i); 
        }

        return total;
}
