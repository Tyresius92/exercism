#include "queen_attack.h"
#include <stdexcept>

std::string get_board_char(int row, int col, queen_attack::chess_board board) {
        if (Position_T(row, col) == board.white()) {
                return "W";
        }
        else if (Position_T(row, col) == board.black()) {
                return "B";
        }
        else {
                return "_";
        }
}

namespace queen_attack {

        chess_board::chess_board()
        {
        }

        chess_board::chess_board(const Position_T white, const Position_T black)
                : white_{ white },
                black_{ black }
        {
                if (white == black) {
                        throw std::domain_error("Queens must be in different positions");
                }
        }

        Position_T chess_board::white() const
        {
                return white_;
        }

        Position_T chess_board::black() const
        {
                return black_;
        }

        chess_board::operator std::string() const
        {
                std::string board = "";

                for (int row = 0; row < 8; row++) {
                        for (int col = 0; col < 8; col++) {
                                
                                board += get_board_char(row, col, *this); 

                                if (col != 7) {
                                        board += " ";
                                }
                        }
                        board += "\n";
                }

                return board;
        }

        bool chess_board::can_attack() const
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

}