#include "doctest.h"
#include "Board.hpp"
using namespace ariel;
#include <string>
using namespace std;
#include<stdexcept>
static Board board;

TEST_CASE("Just read") {
    //Board board;
    CHECK_THROWS(board.read(100,200,Direction::Horizontal, 4));
    CHECK_THROWS(board.read(10,2,Direction::Vertical,2));
    CHECK_THROWS(board.read(0,0,Direction::Horizontal,7));
    CHECK_THROWS(board.read(1000,100,Direction::Vertical,5));
    CHECK_THROWS(board.read(356,421,Direction::Horizontal,8));
    CHECK_THROWS(board.read(50,957,Direction::Vertical,10));
    CHECK_THROWS(board.read(81,74,Direction::Horizontal,12));
}

TEST_CASE("Just post"){
    //Board board;
    CHECK_NOTHROW(board.post(12,43,Direction::Vertical, "abcd"));
    CHECK_NOTHROW(board.post(56,27,Direction::Horizontal,"efg"));
    CHECK_NOTHROW(board.post(10,98,Direction::Vertical,"hijk"));
    CHECK_NOTHROW(board.post(15,67,Direction::Horizontal,"lmnop"));
    CHECK_NOTHROW(board.post(732,109,Direction::Vertical,"qrs"));
    CHECK_NOTHROW(board.post(832,38,Direction::Horizontal,"tuv"));
    CHECK_NOTHROW(board.post(231,98,Direction::Vertical,"wx"));
}

TEST_CASE("Equals"){
    CHECK_EQ(board.read(350,12,Direction::Vertical, 3), "cpp");
    CHECK_EQ(board.read(100,120,Direction::Horizontal,4), "abcd");
    CHECK_EQ(board.read(26,31,Direction::Vertical,5), "asdfg");
    CHECK_EQ(board.read(42,85,Direction::Horizontal,8), "asdfvecw");
    CHECK_EQ(board.read(769,91,Direction::Vertical,6), "nascor");
    CHECK_EQ(board.read(286,11,Direction::Horizontal,1), "z");
}