#include "meetup.h"
#include <string.h>

int get_week_start_date(int year, int month, char *which) 
{
        if (strcmp(which, "first") == 0)
                return 1; 
        else if (strcmp(which, "second") == 0)
                return 8; 
        else if (strcmp(which, "third") == 0)
                return 15; 
        else if (strcmp(which, "fourth") == 0)
                return 22; 
        else if (strcmp(which, "fifth") == 0)
                return 29;
        else if (strcmp(which, "teenth") == 0)
                return 13;  
        else if (strcmp(which, "last") == 0)
                return (days_in_month(year, month) - 6); 
        else 
                return -1; 
}

int days_in_month(int year, int month)
{
        switch(month) {
                case 1: 
                case 3:
                case 5: 
                case 7: 
                case 8: 
                case 10: 
                case 12: 
                        return 31; 
                case 4:
                case 6: 
                case 9: 
                case 11: 
                        return 30; 
                case 2: 
                        if (year % 400 == 0) 
                                return 29;
                        else if (year % 100 == 0)
                                return 28;
                        else if (year % 4 == 0)
                                return 29; 
                        else 
                                return 28; 
                default: 
                        return -1;
        }
}

int get_int_of_day(char *day)
{
        if (strcmp(day, "Sunday") == 0)
                return 0; 
        else if (strcmp(day, "Monday") == 0)
                return 1; 
        else if (strcmp(day, "Tuesday") == 0)
                return 2; 
        else if (strcmp(day, "Wednesday") == 0)
                return 3; 
        else if (strcmp(day, "Thursday") == 0)
                return 4; 
        else if (strcmp(day, "Friday") == 0)
                return 5; 
        else if (strcmp(day, "Saturday") == 0)
                return 6; 
        else 
                return -1; 
}

int meetup_day_of_month(int year, int month, char *which, char *day)
{
        struct tm tm; 
        int date_of_week; 
        int target_day; 
        int day_offset; 
        int actual_date; 

        date_of_week = get_week_start_date(year, month, which); 
        target_day = get_int_of_day(day); 

        memset(&tm, 0, sizeof(tm));
        tm.tm_year = year - 1900; 
        tm.tm_mon = month - 1; 
        tm.tm_mday = date_of_week;
        mktime(&tm); 

        day_offset = target_day - tm.tm_wday; 

        if (day_offset < 0)
                day_offset += 7; 

        actual_date = date_of_week + day_offset; 

        if (actual_date > days_in_month(year, month))
                return 0; 
        else 
                return actual_date; 
}