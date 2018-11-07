#include "nucleotide_count.h"

bool isValidNucleotide(char c)
{
        return (c == 'G' || c == 'A' || c == 'T' || c == 'C');
}

dna::counter::counter(std::string const & strand) : 
        counts_({ { 'A', 0 },{ 'T', 0 },{ 'C', 0 },{ 'G', 0 } })
{
        for (char nucleotide : strand) {
                if (isValidNucleotide(nucleotide)) {
                        counts_[nucleotide]++;
                }
                else {
                        throw std::invalid_argument("Invalid DNA strand passed to constructor"); 
                }
        }
}

std::map<char, int> const & dna::counter::nucleotide_counts() const
{
        return counts_;
}

int dna::counter::count(char nucleotide) const
{
        if (isValidNucleotide(nucleotide)) {
                //gives pointer to std::pair<char first, int second>
                auto result_ptr = counts_.find(nucleotide);

                //just return the int
                return result_ptr->second;
        }
        else {
                throw std::invalid_argument("Invalid character passed to count()"); 
        }
}
