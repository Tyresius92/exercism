#include "two_fer.h"

void two_fer(char *buffer, char *name)
{
        if (name == NULL) {
                snprintf(buffer, 100, "One for you, one for me."); 
        } else {
                snprintf(buffer, 100, "One for %s, one for me.", name);
        }
}