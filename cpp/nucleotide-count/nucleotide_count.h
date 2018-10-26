#pragma once

#include <string>
#include <map>

namespace dna {
        class counter {
        public:
                counter(std::string const& strand) {}

                std::map<char, int> const& nucleotide_counts() const {
                        std::map<char, int> data{ { 'A', 0 },{ 'T', 0 },{ 'C', 0 },{ 'G', 0 } };

                        return data; 
                }
        private: 
                std::map<char, int> counts_;

        };
}