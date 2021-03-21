#include "Board.hpp"
#include<stdexcept>
using namespace std;

namespace ariel {
    void Board::post(int row, int column, Direction direction, string message) {

    }
    int Board::read(int row, int column, Direction direction, int length) {
        throw std::invalid_argument("invalid");
        return 0;
    }
    void Board::show() {

    }
}
