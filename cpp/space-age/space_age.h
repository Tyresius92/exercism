#ifndef SPACE_AGE_H
#define SPACE_AGE_H

namespace space_age
{
        class space_age {
        private: 
                int age_in_seconds; 
        public:
                space_age(int s); 
                int seconds() const; 
        };


}
#endif