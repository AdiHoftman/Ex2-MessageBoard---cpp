#include <string>
#include "Direction.hpp"
#include <map>
#include <iostream>
using namespace std;

struct CharMes{
    char b = '_';
};

namespace ariel {
    class Board {
        
        unsigned int rows, cols;
        std::map<unsigned int, map<unsigned int, CharMes>> boardMsg;
    public:
        Board();
        ~Board();
        void post(unsigned int row, unsigned int col, Direction direction, const string &msg);
        string read(unsigned int row, unsigned int col, Direction direction, unsigned int length);
        void show();
    };
}