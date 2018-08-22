#include "beer_song.h"

const size_t MAX_BUFF = 1024;

void verse(char *buffer, int verse_num)
{
        if (verse_num > 99 || verse_num < 0)
                return; 

        memset(buffer, '\0', MAX_BUFF); 


        if (verse_num > 2) {
                snprintf(buffer, MAX_BUFF, "%d bottles of beer on the wall, " \
                         "%d bottles of beer.\n" \
                         "Take one down and pass it around, " \
                         "%d bottles of beer on the wall.\n", 
                         verse_num, verse_num, verse_num - 1);
        } else if (verse_num == 2) {
                snprintf(buffer, MAX_BUFF, "%d bottles of beer on the wall, " \
                         "%d bottles of beer.\n" \
                         "Take one down and pass it around, " \
                         "%d bottle of beer on the wall.\n", 
                         verse_num, verse_num, verse_num - 1);
        } else if (verse_num == 1) {
                snprintf(buffer, MAX_BUFF, "%d bottle of beer on the wall, " \
                         "%d bottle of beer.\n" \
                         "Take it down and pass it around, " \
                         "no more bottles of beer on the wall.\n", 
                         verse_num, verse_num);
        } else {  // verse_num == 0
                snprintf(buffer, MAX_BUFF, 
                         "No more bottles of beer on the wall, " \
                         "no more bottles of beer.\n" \
                         "Go to the store and buy some more, " \
                         "99 bottles of beer on the wall.\n");
        }

        return; 
}

void sing(char *buffer, int start_verse, int end_verse)
{
        if (start_verse < end_verse)
                return; 

        memset(buffer, '\0', MAX_BUFF); 

        char local_buff[MAX_BUFF]; 
        memset(local_buff, '\0', MAX_BUFF); 


        for (int i = start_verse; i >= end_verse; i--) {
                verse(local_buff, i); 

                strncat(buffer, local_buff, MAX_BUFF); 
                if (i != end_verse) 
                        strncat(buffer, "\n", MAX_BUFF); 
        }
}