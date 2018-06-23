#include "pangram.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


bool is_pangram(const char *sentence)
{
        bool found[26] = {false};
        int c; 

        if (sentence == NULL) {
                return false; 
        }

        for (unsigned i = 0; i < strlen(sentence); i++) {
                c = sentence[i]; 
                if (isalpha(c)) {
                        c = tolower(c) - 97; 
                        found[c] = true; 
                }
        }

        for (unsigned i = 0; i < 26; i++) {
                if (found[i] == false) {
                        return false; 
                }
        }
        return true; 
}