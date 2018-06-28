#include "space_age.h"

const int SECS_PER_EARTH_YEAR = 31557600; 

const float EARTH = 1.0; 
const float MERCURY = 0.2408467; 
const float VENUS = 0.61519726; 
const float MARS = 1.8808158; 
const float JUPITER = 11.862615; 
const float SATURN = 29.447498; 
const float URANUS = 84.016846; 
const float NEPTUNE = 164.79132; 

float convert_planet_age(float earth_years_per_planet_year, float age_in_secs)
{
        float age_in_earth_years; 
        float age_in_planet_years;

        age_in_earth_years = age_in_secs / SECS_PER_EARTH_YEAR; 
        age_in_planet_years = age_in_earth_years / earth_years_per_planet_year;

        return age_in_planet_years; 
}