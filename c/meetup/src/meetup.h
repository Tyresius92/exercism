#ifndef MEETUP_H
#define MEETUP_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int get_week_start_date(int year, int month, char *which);
int days_in_month(int year, int month);

int meetup_day_of_month(int year, int month, char *which, char *day); 

#endif