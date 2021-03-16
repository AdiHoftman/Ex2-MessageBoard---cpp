#include <string>
#include "Direction.hpp"
#include <vector>
#include<stdexcept>
using namespace std;

namespace ariel {
    class Board {
        vector<vector<char>> boardMsg;
        uint rows;
        uint cols;
    public:
        Board() {
            // boardMsg = vector<vector<char>>(rows, vector<char>(cols, '_'));
        }
        ~Board() { }
        void post(int row, int column, Direction direction, std::string message);
        string read(int row, int column, Direction direction, int length);
        void show();
    };
}