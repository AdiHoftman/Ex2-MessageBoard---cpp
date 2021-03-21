/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "Board.hpp"
using namespace ariel;
#include <string>
using namespace std;
#include<stdexcept>

TEST_CASE("just") {
    Board board;
    CHECK_THROWS(board.read(100,200,Direction::Horizontal, 4));
    // CHECK_THROWS(board.post(10,2,Direction::Horizontal,"efg"));
    // CHECK_THROWS(board.post(0,0,Direction::Horizontal,"hijk"));
    // CHECK_THROWS(board.post(1000,100,Direction::Horizontal,"lmnop"));
    // CHECK_THROWS(board.post(100,2000,Direction::Horizontal,"qrs"));
    // CHECK_THROWS(board.post(400,100,Direction::Horizontal,"tuv"));
    // CHECK_THROWS(board.post(3,20,Direction::Horizontal,"wx"));
    // CHECK_THROWS(board.post(500,300,Direction::Horizontal,"yz"));
    /* Add more checks here */
}

/* Add more test cases here */
