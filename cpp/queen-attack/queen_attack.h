#pragma once

#include <utility>
#include <string>

#define Position_T std::pair<int, int>

namespace queen_attack {
        class chess_board {
        public:
                chess_board();
                chess_board(const Position_T white, const Position_T black); 
                
                Position_T white() const;
                Position_T black() const;
                
                operator std::string() const; 

                bool can_attack() const; 
        private:
                const Position_T white_ = std::make_pair(0, 3); 
                const Position_T black_ = std::make_pair(7, 3);
        };
}