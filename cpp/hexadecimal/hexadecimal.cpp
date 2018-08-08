#include "hexadecimal.h"

int hexadecimal::convert(std::string input)
{
	int result = 0; 
	char c; 

	for (int i = 0; i < input.length(); i++) {
		c = input[i]; 
		result = result * 16; 

		if (c >= 'A' && c <= 'F') {
			result += (c - 'A' + 10);
		} else if (c >= 'a' && c <= 'f') {
			result += (c - 'a' + 10);
		} else if (c >= '0' && c <= '9') {
			result += (c - '0');
		} else {
			return 0;
		}

	}

	return result; 
}
