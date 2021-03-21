#include "Board.hpp"
#include <stdexcept>
#include <iostream>
#include <vector>
using namespace std;

namespace ariel {
    void Board::post(uint row, uint col, Direction direction, const string &msg) {
    }
    
    string Board::read(uint row, uint col, Direction direction, int len) {
        //throw std::invalid_argument("invalid");
        return "new board";
    }

    void Board::show() {
    }
}
