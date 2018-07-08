#include "hamming.h"

int compute(char *a, char *b)
{
        if (a == NULL || b == NULL)
                return -1; 

        if (strlen(a) != strlen(b))
                return -1; 

        int count = 0; 

        for (unsigned i = 0; i < strlen(a); i++) {
                if (a[i] != b[i]) 
                        count++; 
        }

        return count;
}