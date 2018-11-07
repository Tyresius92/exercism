#pragma once

#include <string>
#include <map>
#include <stdexcept>

namespace dna {
        class counter {
        public:
                counter(std::string const& strand);

                std::map<char, int> const& nucleotide_counts() const;

                int count(char nucleotide) const;

        private: 
                std::map<char, int> counts_;

        };
}