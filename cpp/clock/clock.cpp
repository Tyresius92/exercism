#include "clock.h"

namespace date_independent {
        
        void clock::clean()
        {
                while (minute_ < 0) {
                        hour_ -= 1; 
                        minute_ += 60; 
                }

                while (hour_ < 0) {
                        hour_ += 24; 
                }

                while (minute_ >= 60) {
                        minute_ = minute_ - 60; 
                        hour_ += 1; 
                }

                if (hour_ >= 24) {
                        hour_ = hour_ % 24; 
                }
        }
        
        clock::clock(int hour, int minute) : hour_(hour), minute_(minute)
        {
                clean(); 
        }

        clock clock::at(int hour, int minute) //minute defaults to 0
        {
                return clock(hour, minute);
        }

        clock & clock::plus(int minutes)
        {
                minute_ += minutes; 
                clean(); 
                return *this; 
        }

        clock & clock::minus(int minutes)
        {
                minute_ -= minutes; 
                clean(); 
                return *this; 
        }

        bool clock::operator==(const clock & rhs) const
        {
                return (hour_ == rhs.hour_ && minute_ == rhs.minute_);
        }

        bool clock::operator!=(const clock & rhs) const
        {
                return (hour_ != rhs.hour_ || minute_ != rhs.minute_);
        }

        clock::operator std::string() const
        {
                std::ostringstream str;
                str << std::setw(2) << std::setfill('0') << hour_ << ':' << std::setw(2) << std::setfill('0') << minute_;
                return str.str();
        }
}

