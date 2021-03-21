#include "doctest.h"
#include "Board.hpp"
using namespace ariel;
#include <string>
using namespace std;
#include<stdexcept>
#include <iostream>
static Board board;

TEST_CASE("Post&Read") {
    board.post(100,200,Direction::Horizontal,"abcd");
    CHECK(board.read(100,200,Direction::Horizontal, 4) == string("abcd"));
    board.post(100,200,Direction::Vertical,"jdpexvf");
    CHECK(board.read(100,200,Direction::Horizontal,4) != string("abcd"));
    CHECK(board.read(100,200,Direction::Horizontal,4) == string("jbcd"));
    board.post(300,1,Direction::Vertical,"cpp");
    CHECK(board.read(300,1,Direction::Vertical,3) == string("cpp"));
    board.post(300,1,Direction::Vertical,"cpa");
    CHECK(board.read(300,1,Direction::Vertical,3) != string("cpp"));
    CHECK(board.read(300,1,Direction::Vertical,3) == string("cpa"));
    board.post(0,0,Direction::Horizontal,"jhdcvfvg");
    board.post(0,0,Direction::Vertical,"jxsdcfdedssx");
    CHECK(board.read(0,0,Direction::Horizontal,8) == string("jhdcvfvg"));
    CHECK(board.read(0,0,Direction::Vertical,12) == string("jxsdcfdedssx"));
    board.post(19,20,Direction::Horizontal,"fgvsew");
    board.post(19,21,Direction::Horizontal,"yuesd");
    board.post(19,22,Direction::Horizontal,"adi");
    CHECK(board.read(19,20,Direction::Vertical,3) == string("fya"));
    board.post(20,20,Direction::Vertical, "defy");
    CHECK(board.read(19,20,Direction::Horizontal,6) == string("fdvsew"));
    CHECK(board.read(21,20,Direction::Horizontal,4) == string("vsew"));
}

TEST_CASE("Just post"){
    CHECK_NOTHROW(board.post(12,43,Direction::Vertical, "-/"));
    CHECK_NOTHROW(board.post(56,27,Direction::Horizontal,"e+fg"));
    CHECK_NOTHROW(board.post(10,98,Direction::Vertical,"hij)k"));
    CHECK_NOTHROW(board.post(15,67,Direction::Horizontal,"lm$nop"));
    CHECK_NOTHROW(board.post(732,109,Direction::Vertical,"qrs2"));
    CHECK_NOTHROW(board.post(832,38,Direction::Horizontal,"tuv3"));
    CHECK_NOTHROW(board.post(231,98,Direction::Vertical,"wx9"));
    CHECK_NOTHROW(board.post(12,99,Direction::Vertical,"wsdfgrtynt"));
    CHECK_NOTHROW(board.post(21,98,Direction::Vertical,"avfer"));

}