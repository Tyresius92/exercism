#ifndef SPACE_AGE_H
#define SPACE_AGE_H

#include <stdlib.h>

const int SECS_PER_EARTH_YEAR; 

const float EARTH; 
const float MERCURY; 
const float VENUS; 
const float MARS; 
const float JUPITER; 
const float SATURN; 
const float URANUS; 
const float NEPTUNE; 

float convert_planet_age(float earth_years_per_planet_year, float age_in_secs);

#endif