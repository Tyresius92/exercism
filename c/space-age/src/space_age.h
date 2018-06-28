#ifndef SPACE_AGE_H
#define SPACE_AGE_H

#include <stdlib.h>

#define SECS_PER_EARTH_YEAR 31557600

#define EARTH 1.0
#define MERCURY 0.2408467
#define VENUS 0.61519726
#define MARS 1.8808158
#define JUPITER 11.862615
#define SATURN 29.447498
#define URANUS 84.016846
#define NEPTUNE 164.79132

float convert_planet_age(float earth_years_per_planet_year, float age_in_secs);

#endif