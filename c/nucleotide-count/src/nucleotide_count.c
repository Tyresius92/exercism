#include "nucleotide_count.h"

char *EMPTY_STRING = ""; 

char *count(const char *dna_strand)
{
        if (dna_strand == NULL || dna_strand == EMPTY_STRING)
                return ""; 

        char result[30]; 
        int a = 0; 
        int g = 0; 
        int t = 0; 
        int c = 0; 

        for (unsigned i = 0; i < strlen(dna_strand); i++) {
                switch (dna_strand[i]) {
                        case 'A': 
                                a++; 
                                break;
                        case 'G':
                                g++; 
                                break; 
                        case 'T':
                                t++; 
                                break; 
                        case 'C':
                                c++; 
                                break; 
                        default:
                                return ""; 
                }
        }

        sprintf(result, "A:%d C:%d G:%d T:%d", a, c, g, t); 
        return result; 
}