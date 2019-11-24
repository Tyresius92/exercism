#include "secret_handshake.h"

typedef struct {
        const char *command;
        const int bit;
} command_t;

static const command_t cmds[] = {
        {"wink", 1}, {"double blink", 2}, {"close your eyes", 4}, {"jump", 8}
};

static const int NUM_COMMANDS = sizeof(cmds)/sizeof(cmds[0]);
static const int REVERSE = 16;

static int count_bits(int num) {
        int count = 0; 

        for (int i = 0; i < NUM_COMMANDS; i++) {
                if (num & cmds[i].bit) {
                        count++;
                }
        }

        return count;
}

const char **commands(int code)
{
        int num_bits_set = count_bits(code);
        const char **actions = calloc(num_bits_set ? num_bits_set : 1, 
                                      sizeof(char *)); 

        if (num_bits_set == 0) {
                actions[0] = NULL;
                return actions;
        }

        int action_index = 0;
        int command_index; 
        
        bool reversed = false;
        if (code & REVERSE) {
                reversed = true;
        }

        for (int i = 0; i < NUM_COMMANDS; i++) {
                if (reversed) {
                        command_index = NUM_COMMANDS - i - 1;
                } else {
                        command_index = i;
                }

                if (code & cmds[command_index].bit) {
                        actions[action_index] = cmds[command_index].command;
                        action_index++;
                } 
        }

        return actions; 
}