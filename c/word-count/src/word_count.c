#include "word_count.h"
#include <stdbool.h>
#include <string.h>

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

        //int index = 0; 
        int num_words = 0; 

        for (int i = 0; i < strlen(input_text); i++){
                int j = 0;
                c = input_text[i];       
        
 


                //if the word is not in the array yet
                        //add it to the array
                //increment the count for that word
        }
                

        return num_words; 
}