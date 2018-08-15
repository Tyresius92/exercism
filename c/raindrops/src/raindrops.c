#include "raindrops.h"

void convert(char *result, int drops)
{
        int bytes_written = 0; 

        if (drops % 3 == 0) {
                bytes_written += sprintf(result, "Pling"); 
        }

        if (drops % 5 == 0) {
                bytes_written += sprintf(result + bytes_written, "Plang");
        }

        if (drops % 7 == 0) {
                bytes_written += sprintf(result + bytes_written, "Plong"); 
        }

        if (bytes_written == 0) {
                sprintf(result, "%d", drops); 
        }
}