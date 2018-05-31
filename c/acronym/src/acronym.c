#include "acronym.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *EMPTY_STR = "";

char *abbreviate(const char *phrase)
{
        if ((phrase == NULL) || (*phrase == *EMPTY_STR)) {
                return NULL;
        }
 
        char *abbr = calloc(strlen(phrase), sizeof(char));

        abbr[0] = toupper(phrase[0]); 
        int j = 1; 

        for (unsigned i = 1; i < strlen(phrase); i++) {
                if (isalpha(phrase[i])) {
                        if ((phrase[i - 1] == ' ') || (phrase[i - 1] == '-')) {

                                abbr[j] = toupper(phrase[i]);
                                j += 1; 
                        }
                }
        }

        return abbr; 
}