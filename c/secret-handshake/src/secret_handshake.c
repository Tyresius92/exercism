#include "secret_handshake.h"

enum {
        WINK = 1, 
        DOUBLE_BLINK = 2, 
        CLOSE_EYES = 4, 
        JUMP = 8, 
        REVERSE = 16
};

const char **commands(int code)
{
        const char **actions = malloc(sizeof(char *) * 4); 
        int i = 0; 

        if (code & REVERSE) { //reversed order
                if (code & JUMP) {
                        actions[i] = "jump"; 
                        i++; 
                }
                if (code & CLOSE_EYES) {
                        actions[i] = "close your eyes"; 
                        i++; 
                }
                if (code & DOUBLE_BLINK) {
                        actions[i] = "double blink"; 
                        i++; 
                }
                if (code & WINK) {
                        actions[i] = "wink"; 
                        i++; 
                }
        } else { //normal order
                if (code & WINK) {
                        actions[i] = "wink"; 
                        i++; 
                }
                if (code & DOUBLE_BLINK) {
                        actions[i] = "double blink"; 
                        i++; 
                }
                if (code & CLOSE_EYES) {
                        actions[i] = "close your eyes"; 
                        i++; 
                }
                if (code & JUMP) {
                        actions[i] = "jump"; 
                        i++; 
                }
        }

        return actions; 
}