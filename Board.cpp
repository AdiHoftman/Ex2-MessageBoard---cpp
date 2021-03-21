#include "Board.hpp"
#include <stdexcept>
#include <iostream>
#include <vector>
using namespace std;

namespace ariel {
    void Board::post(uint row, uint col, Direction direction, const string &msg) {
        if (direction == Direction::Vertical){
            resizeMyBoard(std::max<uint>(this->rows, row+msg.size()+1), std::max<uint>(this->cols, col+1));
        }
        else{
            resizeMyBoard(std::max<uint>(this->rows, row+1),std::max<uint>(this->cols, col+msg.size()+1));
        }
       for(char post : msg){
           this->boardMsg[row][col] = post;
           if(direction == Direction::Vertical){row++;}
           else{col++;}
       }   
    }
    
    string Board::read(uint row, uint col, Direction direction, int len) {
        //throw std::invalid_argument("invalid");
        return "new board";
    }

    void Board::show() {
    }

    void Board::resizeMyBoard(uint row, uint col){
        this->rows = row;
        this->cols = col;
        this->boardMsg.resize(row);
        for (uint i = 0; i < row; i++){
            this->boardMsg[i].resize(col, '_');
        }
    }
}
