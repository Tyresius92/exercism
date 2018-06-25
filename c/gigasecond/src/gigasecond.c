#include "gigasecond.h"
#include <stdio.h>

const int GIGASECOND = 1000000000;

time_t gigasecond_after(time_t date_time)
{
        return date_time + GIGASECOND; 
}