#include "roman_numerals.h"

#define NELEMENTS(a)    (sizeof(a) / sizeof(a[0]))
#define MAX_LENGTH      (10)

typedef struct {
   char *numeral;
   unsigned value;
} numeral_values_t;

const numeral_values_t numeral_values[] = {
   {"M", 1000},
   {"CM", 900},
   {"D", 500},
   {"CD", 400},
   {"C", 100},
   {"XC", 90},
   {"L", 50},
   {"XL", 40},
   {"X", 10},
   {"IX", 9},
   {"V", 5},
   {"IV", 4},
   {"I", 1}
};

char *to_roman_numeral(unsigned num)
{
        char *roman = calloc(MAX_LENGTH, sizeof(char));

        for (unsigned i = 0; i < NELEMENTS(numeral_values); i++) {
                while (num >= numeral_values[i].value) {
                        strcat(roman, numeral_values[i].numeral);
                        num -= numeral_values[i].value;
                }
        } 

        return roman;
}
