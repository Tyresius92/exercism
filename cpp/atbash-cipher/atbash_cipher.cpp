#include "atbash_cipher.h"

std::string normalize_string(std::string input) {
        std::transform(input.begin(), input.end(), input.begin(), ::tolower);

        std::string result = "";

        for (char c : input) {
                if (isalnum(c)) {
                        result += c;
                }
        }

        return result; 
}

char getAtbashCharacter(char c) {
        if (isalpha(c)) {
                int offset_from_a = c - 'a';
                return ('z' - offset_from_a);
        }
        else if (isdigit(c)) {
                return c; 
        }
        else {
                throw std::domain_error("Invalid character"); 
        }
}

std::string atbash::encode(std::string input)
{
        std::string normalized = normalize_string(input); 

        std::string result = ""; 
        int char_count = 0; 

        for (char c : normalized) {
                result += getAtbashCharacter(c); 

                char_count++; 

                if (char_count == 5) {
                        result += " "; 
                        char_count = 0;
                }
        }

        if (result.back() == ' ') {
                result = result.substr(0, result.size() - 1); 
        }

        return result;
}

std::string atbash::decode(std::string input)
{
        std::string normalized = normalize_string(input); 

        std::string result = ""; 

        for (char c : normalized) {
                result += getAtbashCharacter(c); 
        }

        return result;
}
