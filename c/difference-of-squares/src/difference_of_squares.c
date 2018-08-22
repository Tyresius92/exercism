#include "difference_of_squares.h"

int square_of_sum(int range)
{
        int result = 0;

        for (int i = 1; i <= range; i++) {
                result += i; 
        }

        return result * result; 
}

int sum_of_squares(int range)
{
        int result = 0; 

        for (int i = 1; i <= range; i++) {
                result += (i * i); 
        }

        return result; 
}

int difference_of_squares(int range)
{
        return square_of_sum(range) - sum_of_squares(range); 
}