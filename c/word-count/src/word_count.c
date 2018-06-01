#include "word_count.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define NELEMS(A) sizeof(*A)/sizeof(A[0])

bool is_separator(char check_me)
{
        if ((check_me == ' ') || 
            (check_me == '\n') || 
            (check_me == '\t')) {

                return true; 
        }
        return false; 
}

int word_count(const char *input_text, word_count_word_t * words)
{
        (void) input_text; 
        (void) words; 
        char curr_word[MAX_WORD_LENGTH];
        char c; 

        int index = 0; 
        int num_words = 0; 
        int j = 0;
        bool found = false; 

        for (unsigned i = 0; i < strlen(input_text); i++){
                c = input_text[i]; 
                if (!is_separator(c)) {
                        fprintf(stderr, "in here!\n"); 
                        curr_word[j] = c; 
                } else {
                        for (unsigned k = 0; k < NELEMS(words); k++) {
                                if (words[k].text == curr_word) {
                                        found = true; 
                                        break; 
                                } 
                        }
                        if (found == false) {
                                for (unsigned k = 0; k < strlen(curr_word); k++)
                                        words[index].text[k] = curr_word[k]; 
                        }
                        words[index].count += 1; 
                        num_words += 1; 
                        index++; 
                        j = 0; 
                }



                //if the word is not in the array yet
                        //add it to the array
                //increment the count for that word
        }
                

        return num_words; 
}