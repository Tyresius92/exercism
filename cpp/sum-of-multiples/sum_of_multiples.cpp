#include "sum_of_multiples.h"

int sum_of_multiples::to(std::vector<int> factors, int up_to)
{
        std::set<int> s; 

        for (int n : factors) {
                int i = 1; 
                while (i * n < up_to) {
                        s.insert(i * n);
                        
                        i++; 
                }
        }

        int result = 0; 

        for (int n : s) {
                result += n; 
        }

        return result;
}
