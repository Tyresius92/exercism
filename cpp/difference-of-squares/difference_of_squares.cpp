#include "difference_of_squares.h"

int squares::square_of_sums(int num) 
{ 
        int total = 0; 

        for (int i = 1; i <= num; i++) {
                total += i; 
        }

        return total * total;
}

int squares::sum_of_squares(int num) 
{ 
        int total = 0;

        for (int i = 1; i <= num; i++) {
                total += i * i;
        }

        return total;
}


int squares::difference(int num) 
{ 
        return square_of_sums(num) - sum_of_squares(num); 
}