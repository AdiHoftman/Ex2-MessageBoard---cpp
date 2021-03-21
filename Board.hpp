#include <string>
#include "Direction.hpp"
#include <vector>
#include <iostream>
using namespace std;

namespace ariel {
    class Board {
        std::vector<vector<char>> boardMsg;
        uint rows;
        uint cols;
    public:
        Board() {
            boardMsg = std::vector<vector<char>>(rows, vector<char>(cols, '_'));
        }
        ~Board() { 
            boardMsg.clear();
        }
        void post(uint row, uint col, Direction direction, const string &סmsg);
        string read(uint row, uint col, Direction direction, int length);
        void show();
        void resizeMyBoard(uint row, uint col);
    };
}