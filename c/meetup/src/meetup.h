#ifndef MEETUP_H
#define MEETUP_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

time_t first_day_of_month(int year, int month); 

int meetup_day_of_month(int year, int month, char *which, char *day); 

#endif