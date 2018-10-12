#include "space_age.h"

const double SECS_PER_EARTH_YEAR = 31557600.0; 
const double EARTH_YEARS_PER_MERCURY_YEAR = 0.2408467; 
const double EARTH_YEARS_PER_VENUS_YEAR = 0.61519726;
const double EARTH_YEARS_PER_MARS_YEAR = 1.8808158;
const double EARTH_YEARS_PER_JUPITER_YEAR = 11.862615;
const double EARTH_YEARS_PER_SATURN_YEAR = 29.447498;
const double EARTH_YEARS_PER_URANUS_YEAR = 84.016846;
const double EARTH_YEARS_PER_NEPTUNE_YEAR = 164.79132;

explicit space_age::space_age::space_age(unsigned long long seconds)
{
	age_in_seconds = seconds; 
}; 

unsigned long long space_age::space_age::seconds() const
{
        return age_in_seconds;
}

double space_age::space_age::on_earth() const
{
        return seconds() / SECS_PER_EARTH_YEAR;
}

double space_age::space_age::on_mercury() const
{
        return on_earth() / EARTH_YEARS_PER_MERCURY_YEAR;
}

double space_age::space_age::on_venus() const
{
        return on_earth() / EARTH_YEARS_PER_VENUS_YEAR;
}

double space_age::space_age::on_mars() const
{
        return on_earth() / EARTH_YEARS_PER_MARS_YEAR;
}

double space_age::space_age::on_jupiter() const
{
        return on_earth() / EARTH_YEARS_PER_JUPITER_YEAR;
}

double space_age::space_age::on_saturn() const
{
        return on_earth() / EARTH_YEARS_PER_SATURN_YEAR;
}

double space_age::space_age::on_uranus() const
{
        return on_earth() / EARTH_YEARS_PER_URANUS_YEAR;
}

double space_age::space_age::on_neptune() const
{
        return on_earth() / EARTH_YEARS_PER_NEPTUNE_YEAR;
}
