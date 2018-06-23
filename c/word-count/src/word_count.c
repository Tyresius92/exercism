#include "word_count.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void clear_word_struct(word_count_word_t * words)
{
        for (unsigned i = 0; i < MAX_WORDS; i++) {
                words[i].count = 0; 
                for (unsigned j = 0; j < MAX_WORD_LENGTH; j++) {
                        words[i].text[j] = '\0'; 
                }
        }
}

int insert_word_to_struct(char *curr_word, word_count_word_t * words, 
                          unsigned max_index)
{
        if (curr_word[0] == '\0') {
                return -1; 
        }

        for (unsigned i = 0; i < MAX_WORD_LENGTH; i++) {
                curr_word[i] = tolower(curr_word[i]); 
        }

        for (unsigned i = 0; i < max_index; i++) {
                if (!strcmp(words[i].text, curr_word)) {
                        words[i].count += 1; 
                        return i; 
                }
        }

        for (unsigned i = 0; i < MAX_WORD_LENGTH; i++) {
                words[max_index].text[i] = curr_word[i]; 
        }
        
        words[max_index].count = 1; 
        return max_index; 
}

int isvalid(const char *input_text, int index) 
{
        if (isalpha(input_text[index]) || isdigit(input_text[index])) {
                return true; 
        }
        if (input_text[index] == '\'') {
                if (isalpha(input_text[index - 1]) && 
                    isalpha(input_text[index + 1])) {
                        return true; 
                }
        }

        return false; 
}

int word_count(const char *input_text, word_count_word_t * words)
{

        clear_word_struct(words); 

        int num_words = 0; 
        int put_at = 0; 
        int index = 0; 
        char *curr_word = calloc(MAX_WORD_LENGTH, sizeof(char)); 
        int j = 0; 

        for (unsigned i = 0; i < strlen(input_text); i++) {
                if (isvalid(input_text, i)) {
                        if (j == MAX_WORD_LENGTH) {
                                return EXCESSIVE_LENGTH_WORD; 
                        }

                        curr_word[j] = input_text[i]; 
                        j++; 
                } else {
                        put_at = insert_word_to_struct(curr_word, words, index);
                        if (put_at == index) {
                                num_words++;
                                index++; 
                                if (index > MAX_WORDS) {
                                        return EXCESSIVE_NUMBER_OF_WORDS; 
                                }
                        }

                        j = 0; 
                        for (unsigned k = 0; k < MAX_WORD_LENGTH; k++) {
                                curr_word[k] = '\0'; 
                        }
                }
        }

        put_at = insert_word_to_struct(curr_word, words, index);
        if (put_at == index) {
                num_words++;
                index++; 
                if (index > MAX_WORDS) {
                        return EXCESSIVE_NUMBER_OF_WORDS; 
                }
        }

        free(curr_word); 

        return num_words; 
}