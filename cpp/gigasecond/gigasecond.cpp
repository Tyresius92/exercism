#include "gigasecond.h"

ptime gigasecond::advance(ptime t) 
{
        return t + seconds(1000000000); 
}