#pragma once

#include <utility>
#include <string>

namespace queen_attack {
        class chess_board {
        public:
                chess_board();
                chess_board(const std::pair<int, int> white, const std::pair<int, int> black); 
                
                std::pair<int, int> white() const;
                std::pair<int, int> black() const;
                
                operator std::string() const; 

                bool can_attack() const; 
        private:
                const std::pair<int, int> white_ = std::make_pair(0, 3); 
                const std::pair<int, int> black_ = std::make_pair(7, 3);
        };
}