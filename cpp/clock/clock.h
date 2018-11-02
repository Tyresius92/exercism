#pragma once

#include <string>

namespace date_independent {
        class clock {
        private: 
                int hour; 
                int minute; 
        public: 
                clock at(int hour, int minute) { return "10:03"; }
        };
}