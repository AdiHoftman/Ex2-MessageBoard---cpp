#include "Board.hpp"
#include <string>
#include <iostream>
#include <map>
using namespace std;

struct charMes{
    char b = '_';
};


namespace ariel {

    Board::Board(){
        this->rows = this-> cols = 0;
    }

    Board::~Board(){

    }

    void Board::post(unsigned int row, unsigned int col, Direction direction, const string &msg) {
        for(unsigned int i = 0; i < msg.size(); i++){
            this->boardMsg[row][col].b = msg.at(i);
            if(Direction::Vertical == direction){row++;}
            else{col++;}
        }
    }   

    string Board::read(unsigned int row, unsigned int col, Direction direction, unsigned int len) {
        string readMsg;
        for(unsigned int i = 0; i < len; i++){
            readMsg += this->boardMsg[row][col].b;
            if(Direction::Vertical == direction){row++;}
            else{col++;}
        }
        return readMsg;
    } 

    void Board::show() {
        for(unsigned int i = 0; i < this->rows; i++){
            cout<< i<< ": ";
            for(unsigned int j = 0; j < this->cols; j++){
                cout<<this->boardMsg[i][j].b;
            }
            cout<< "\n";
        }
        cout<< "\n";
    }
}
