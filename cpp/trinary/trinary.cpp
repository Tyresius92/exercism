#include "trinary.h"

int trinary::to_decimal(std::string input)
{
        int result = 0; 
        int power = 1; 

        for (int i = 0; i < input.length(); i++) {
                char c = input[input.length() - (i + 1)]; 

                if (c != '0' && c != '1' && c != '2') {
                        return 0; 
                }

                result += (c - '0') * power; 

                power *= 3;
        }

        return result;
}