#include "hamming.h"

bool isValidChar(char c) {
        return (c == 'G' || c == 'T' || c == 'A' || c == 'C');
}

int hamming::compute(std::string str1, std::string str2)
{
        int dist = 0; 

        if (str1.length() != str2.length()) {
                throw std::domain_error("Strings must be equal length"); 
        }

        for (unsigned i = 0; i < str1.length(); i++) {
                char c1 = str1[i]; 
                char c2 = str2[i]; 

                if (!isValidChar(c1) || !isValidChar(c2)) {
                        throw std::domain_error("One or more strings contains an invalid char");
                }

                if (c1 != c2) {
                        dist++; 
                }
        }
        
        return dist;
}

