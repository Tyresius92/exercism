#include "word_count.h"

std::string normalize_string(std::string input) 
{
        std::transform(input.begin(), input.end(), input.begin(), ::tolower);
        
        for (int i = 0; i < input.length(); i++) {
                if (ispunct(input[i])) {
                        if (input[i] == '\'' && isalpha(input[i - 1]) && isalpha(input[i + 1])) {
                                continue; 
                        }
                        else {
                                input[i] = ' ';
                        }
                }
        }

        return input; 
}

std::map<std::string, int> word_count::words(std::string input)
{
        std::map<std::string, int> result = {};

        std::string normal = normalize_string(input); 

        std::istringstream iss(normal); 

        std::string word; 
        while (iss >> word) {
                result[word]++;
        }

        return result;
}
