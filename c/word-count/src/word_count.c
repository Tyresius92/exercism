#include "word_count.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void clear_word_struct(word_count_word_t *words)
{
        for (unsigned i = 0; i < MAX_WORDS; i++) {
                words[i].count = 0; 
                for (unsigned j = 0; j < MAX_WORD_LENGTH; j++) {
                        words[i].text[j] = '\0'; 
                }
        }
}

bool is_empty_word(char *word) 
{
        return (word[0] == '\0');
}

void convert_word_to_lower(char *word) 
{
        for (unsigned i = 0; i < MAX_WORD_LENGTH; i++) {
                word[i] = tolower(word[i]); 
        }
}

int determine_word_index(char *word, word_count_word_t *words, 
                         unsigned max_index) 
{
        for (unsigned i = 0; i < max_index; i++) {
                if (!strcmp(words[i].text, word)) {
                        return i; 
                }
        }

        return -1;
}

int insert_word_to_struct(char *curr_word, word_count_word_t *words, 
                          unsigned max_index)
{
        if (is_empty_word(curr_word)) {
                return -1; 
        }

        convert_word_to_lower(curr_word);

        int index = determine_word_index(curr_word, words, max_index); 

        if (index == -1) {
                // word not found, so insert to struct
                for (unsigned i = 0; i < MAX_WORD_LENGTH; i++) {
                        words[max_index].text[i] = curr_word[i]; 
                }

                words[max_index].count = 1; 
                return max_index; 
        } else {
                // increment the word count at the correct index
                words[index].count += 1;
                return index;
        }
}

int is_valid(const char *input_text, int index) 
{
        if (isalpha(input_text[index]) || isdigit(input_text[index])) {
                return true; 
        }
        if (input_text[index] == '\'') {
                // check if apostrophe is inside a word
                if (isalpha(input_text[index - 1]) 
                    && isalpha(input_text[index + 1])) {
                        return true; 
                }
        }

        return false; 
}

void clear_word(char *word) 
{
        for (unsigned i = 0; i < MAX_WORD_LENGTH; i++) {
                word[i] = '\0'; 
        }
}

int word_count(const char *input_text, word_count_word_t *words)
{
        clear_word_struct(words); 

        int put_at = 0; 
        int num_words = 0; 

        // calloc room for one extra byte for \0 terminator
        char *curr_word = calloc(MAX_WORD_LENGTH + 1, sizeof(char)); 
        int index_in_word = 0; 

        for (unsigned i = 0; i < strlen(input_text); i++) {
                if (is_valid(input_text, i)) {
                        if (index_in_word == MAX_WORD_LENGTH) {
                                free(curr_word);
                                return EXCESSIVE_LENGTH_WORD; 
                        }

                        curr_word[index_in_word] = input_text[i]; 
                        index_in_word++; 
                } else {
                        put_at = insert_word_to_struct(curr_word, words, num_words);
                        if (put_at == num_words) {
                                num_words++; 
                                if (num_words > MAX_WORDS) {
                                        free(curr_word);
                                        return EXCESSIVE_NUMBER_OF_WORDS; 
                                }
                        }

                        index_in_word = 0; 
                        clear_word(curr_word);
                }
        }

        put_at = insert_word_to_struct(curr_word, words, num_words);
        if (put_at == num_words) {
                num_words++; 
                if (num_words > MAX_WORDS) {
                        free(curr_word);
                        return EXCESSIVE_NUMBER_OF_WORDS; 
                }
        }

        free(curr_word); 

        return num_words; 
}