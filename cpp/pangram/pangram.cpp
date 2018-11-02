#include "pangram.h"

bool pangram::is_pangram(const std::string input)
{
        bool found[26] = { false };

        for (char c : input) {
                if (isalpha(c)) {
                        c = tolower(c) - 'a'; 
                        found[c] = true; 
                }
        }

        return std::all_of(std::begin(found), std::end(found), [](bool x) { return x; });
}
