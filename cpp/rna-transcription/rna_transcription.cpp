#include "rna_transcription.h"

char transcription::to_rna(char nucleotide)
{
        if (nucleotide == 'C') {
                return 'G';
        }
        else if (nucleotide == 'G') {
                return 'C';
        }
        else if (nucleotide == 'A') {
                return 'U';
        }
        else if (nucleotide == 'T') {
                return 'A';
        }
        else {
                throw std::domain_error("Invalid Input"); 
        }
}

std::string transcription::to_rna(std::string strand)
{
        std::string result = "";

        for (int i = 0; i < strand.length(); i++) {
                result += to_rna(strand[i]); // this is the char version of to_rna
        }

        return result; 
}
