#include "meetup.h"

time_t first_day_of_month(int year, int month)
{
        struct tm tm; 

        tm.tm_year = year - 1900; 
        tm.tm_mon = month - 1; 
        tm.tm_mday = 1;

        return mktime(&tm);
}

int meetup_day_of_month(int year, int month, char *which, char *day)
{
        (void) which; 
        (void) day; 

        time_t ref_date = first_day_of_month(year, month);

        fprintf(stderr, "refdate: %ld\n", ref_date);

        return 0; 
}