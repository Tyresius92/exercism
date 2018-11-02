#include "binary.h"

int binary::convert(const std::string& bin)
{
        int result = 0; 
        int power = 1; 

        for (int i = bin.length(); i > 0; i--) {
                char c = bin[i - 1]; 

                if (c != '0' && c != '1') {
                        return 0;
                }

                if (c == '1') {
                        result += power; 
                }

                power *= 2; 
        }

        return result; 
}