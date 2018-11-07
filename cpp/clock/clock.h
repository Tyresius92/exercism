#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

namespace date_independent {
        class clock {
        private: 
                int hour_; 
                int minute_; 

                void clean(); 
        public: 
                clock(int hour, int minute); 

                static clock at(int hour, int minute = 0);

                clock& plus(int minutes); 
                clock& minus(int minutes); 

                bool operator==(const clock& rhs) const; 
                bool operator!=(const clock& rhs) const; 
                operator std::string() const; 
        };
}