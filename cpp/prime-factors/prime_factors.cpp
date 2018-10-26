#include "prime_factors.h"

const std::vector<int> prime_factors::of(int num)
{
        std::vector<int> result = {}; 
        int i = 2; 

        while (i * i <= num) {
                while (num % i == 0) {
                        result.push_back(i);
                        num = num / i; 
                }
                
                i++;
        }

        if (num > 1) {
                result.push_back(num); 
        }

        return result;
}
