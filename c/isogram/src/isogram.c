#include "isogram.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

char *EMPTY_STR = "";

bool is_isogram(const char phrase[])
{
        bool is_iso; 
        char seen[26]; 
        char next; 

        if (*phrase == *EMPTY_STR) {
                is_iso = true; 
        } else {
                seen[0] = tolower(phrase[0]); 
                for (unsigned i = 1; i < strlen(phrase); i++) {
                        if (isalpha(phrase[i])) {
                                next = tolower(phrase[i]);

                                for (unsigned j = 0; j < strlen(seen); j++) { 
                                        if (next == seen[j])
                                                return false; 
                                }
                                seen[i] = next;
                        }
                        
                }
                is_iso = true;
        }

        return is_iso;
}
