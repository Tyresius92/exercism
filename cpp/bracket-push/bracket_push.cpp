#include "bracket_push.h"

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

                        char opening_bracket; 

                        if (c == ']') {
                                opening_bracket = '[';
                        }
                        else if (c == '}') {
                                opening_bracket = '{'; 
                        }
                        else if (c == ')') {
                                opening_bracket = '('; 
                        }

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
