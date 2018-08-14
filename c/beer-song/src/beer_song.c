#include "beer_song.h"

void verse(char *buffer, int verse_num)
{
        if (verse_num > 99 || verse_num < 0)
                return; 

        if (verse_num > 2) {
                sprintf(buffer, "%d bottles of beer on the wall, " \
                        "%d bottles of beer.\n" \
                        "Take one down and pass it around, " \
                        "%d bottles of beer on the wall.\n", 
                        verse_num, verse_num, verse_num - 1);
        } else if (verse_num == 2) {
                sprintf(buffer, "%d bottles of beer on the wall, " \
                        "%d bottles of beer.\n" \
                        "Take one down and pass it around, " \
                        "%d bottle of beer on the wall.\n", 
                        verse_num, verse_num, verse_num - 1);
        } else if (verse_num == 1) {
                sprintf(buffer, "%d bottle of beer on the wall, " \
                        "%d bottle of beer.\n" \
                        "Take it down and pass it around, " \
                        "no more bottles of beer on the wall.\n", 
                        verse_num, verse_num);
        } else {  // verse_num == 0
                sprintf(buffer, "No more bottles of beer on the wall, " \
                        "no more bottles of beer.\n" \
                        "Go to the store and buy some more, " \
                        "99 bottles of beer on the wall.\n");
        }

        return; 
}

void sing(char *buffer, int start_verse, int end_verse)
{
        memset(buffer, '\0', 1024); 

        if (start_verse < end_verse)
                return; 

        char local_buff[1024]; 

        for (int i = start_verse; i >= end_verse; i--) {
                verse(local_buff, i); 

                strcat(buffer, local_buff); 
                if (i != end_verse) 
                        strcat(buffer, "\n"); 
        }
}