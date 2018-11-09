#include "anagram.h"

anagram::anagram::anagram(std::string input)
{
        word_ = input; 
        std::transform(word_.begin(), word_.end(), word_.begin(), ::tolower);

        sorted_word_ = input;
        std::transform(sorted_word_.begin(), sorted_word_.end(), sorted_word_.begin(), ::tolower); 
        std::sort(sorted_word_.begin(), sorted_word_.end());
}

std::vector<std::string> anagram::anagram::matches(std::vector<std::string> potentials)
{
        std::vector<std::string> result; 

        for (std::string word : potentials) {
                std::string word_copy = word;
                std::transform(word_copy.begin(), word_copy.end(), word_copy.begin(), ::tolower);
                
                std::string sorted = word;
                std::transform(sorted.begin(), sorted.end(), sorted.begin(), ::tolower);
                std::sort(sorted.begin(), sorted.end());

                if (sorted == sorted_word_ && word_copy != word_) {
                        result.push_back(word); 
                }
        }

        return result;
}
