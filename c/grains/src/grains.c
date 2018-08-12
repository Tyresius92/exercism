#include "grains.h"

uint64_t square(int sq)
{
        if (sq < 1 || sq > 64)
                return 0; 

        uint64_t total = 1; 

        for (int i = 1; i < sq; i++) {
                total *= 2;
        }

        return total; 
}

uint64_t total()
{
        return 0xFFFFFFFFFFFFFFFF; 
}