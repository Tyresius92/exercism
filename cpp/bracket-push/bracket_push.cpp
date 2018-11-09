#include "bracket_push.h"

char getOpeningBracket(char c) {
        if (c == ']') {
                return '[';
        }
        else if (c == '}') {
                return '{';
        }
        else if (c == ')') {
                return '(';
        }
        else {
                throw std::invalid_argument("Invalid input to getOpeningBracket"); 
        }
}

bool bracket_push::check(std::string input)
{
        std::stack<char> s; 

        for (char c : input) {
                if (c == '[' || c == '{' || c == '(') {
                        s.push(c); 
                }
                else if (c == ']' || c == '}' || c == ')') {

                        if (s.empty()) {
                                return false; 
                        }

                        char opening_bracket = getOpeningBracket(c); 

                        if (s.top() == opening_bracket) {
                                s.pop(); 
                        }
                        else {
                                return false; 
                        }
                }
                
        }

        return s.empty();
}
