#include "queen_attack.h"
#include <stdexcept>

queen_attack::chess_board::chess_board()
{
}

queen_attack::chess_board::chess_board(const std::pair<int, int> white, const std::pair<int, int> black) 
        : white_{white}, 
        black_{black}
{ 
        if (white == black) {
                throw std::domain_error("Queens must be in different positions");
        }
}

std::pair<int, int> queen_attack::chess_board::white() const
{
        return white_;
}

std::pair<int, int> queen_attack::chess_board::black() const
{
        return black_;
}

queen_attack::chess_board::operator std::string() const
{
        std::string board = ""; 

        for (int row = 0; row < 8; row++) {
                for (int col = 0; col < 8; col++) {
                        if (row == white_.first && col == white_.second) {
                                board += "W"; 
                        }
                        else if (row == black_.first && col == black_.second) {
                                board += "B"; 
                        }
                        else {
                                board += "_";
                        }

                        if (col != 7) {
                                board += " ";
                        }
                }
                board += "\n"; 
        }

        return board; 
}

bool queen_attack::chess_board::can_attack() const
{
        //check rows & cols
        if (white_.first == black_.first || white_.second == black_.second) {
                return true; 
        }

        //check diags
        if (abs(white_.first - black_.first) == abs(white_.second - black_.second)) {
                return true; 
        }

        return false;
}
