#pragma once

#include <vector>
#include <string>
#include <algorithm>

namespace anagram {
        class anagram {
        private: 
                std::string word_; 
                std::string sorted_word_; 
        public: 
                anagram(std::string input);

                std::vector<std::string> matches(std::vector<std::string> potentials);
        };
}