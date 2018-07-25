#include "rna_transcription.h"

char *to_rna(const char *dna)
{
        char *rna = calloc(20, sizeof(char)); 

        for (unsigned i = 0; i < strlen(dna); i++) {
                if (dna[i] == 'A') {
                        rna[i] = 'U';
                } else if (dna[i] == 'C') {
                        rna[i] = 'G';
                } else if (dna[i] == 'G') {
                        rna[i] = 'C';
                } else if (dna[i] == 'T') {
                        rna[i] = 'A';
                } else {
                        free(rna); 
                        return NULL;
                }
        }

        return rna; 
}