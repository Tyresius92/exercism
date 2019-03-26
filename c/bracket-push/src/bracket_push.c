#include "bracket_push.h"
#include <string.h>
#include <stdlib.h>

bool is_paired(const char *input)
{ 
        char *stack; 
        int stack_top = -1; 

        stack = calloc(strlen(input), sizeof(char));

        for (unsigned i = 0; i < strlen(input); i++) {
                char c = input[i]; 

                if (c == '(' || c == '{' || c == '[') {
                        stack_top++; 
                        stack[stack_top] = c; 
                } else if (c == ')' || c == '}' || c == ']') {
                        if (stack_top == -1) {
                                free(stack);
                                return false; 
                        } 

                        if ((c == ')' && stack[stack_top] != '(') || 
                            (c == '}' && stack[stack_top] != '{') ||
                            (c == ']' && stack[stack_top] != '[')) {
                                free(stack);
                                return false; 
                        }

                        stack_top--; 
                }
        }

        free(stack); 

        if (stack_top == -1)
                return true; 
        else 
                return false; 
}