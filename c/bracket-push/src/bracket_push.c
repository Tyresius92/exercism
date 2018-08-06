#include "bracket_push.h"
#include <string.h>

bool is_paired(const char *input)
{
        char stack[50]; 
        int stack_top = -1; 

        for (unsigned i = 0; i < strlen(input); i++) {
                char c = input[i]; 

                if (c == '(' || c == '{' || c == '[') {
                        stack_top++; 
                        stack[stack_top] = c; 
                } else if (c == ')' || c == '}' || c == ']') {
                        if (stack_top == -1) {
                                return false; 
                        } 

                        if (c == ')' && stack[stack_top] != '(') {
                                return false; 
                        } else if (c == '}' && stack[stack_top] != '{') {
                                return false; 
                        } else if (c == ']' && stack[stack_top] != '[') {
                                return false; 
                        }
                        stack_top--; 
                }
        }

        if (stack_top == -1)
                return true; 
        else 
                return false; 
}