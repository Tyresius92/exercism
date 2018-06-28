#include "space_age.h"

float convert_planet_age(float earth_years_per_planet_year, float age_in_secs)
{
        float age_in_earth_years; 
        float age_in_planet_years;

        age_in_earth_years = age_in_secs / SECS_PER_EARTH_YEAR; 
        age_in_planet_years = age_in_earth_years / earth_years_per_planet_year;

        return age_in_planet_years; 
}