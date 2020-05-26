#include "doctest.h"
#include "DemoGame.hpp"
#include "FootSoldier.hpp"
#include "FootCommander.hpp"
#include "Board.hpp"

using namespace std;
using WarGame::FootCommander, WarGame::FootSoldier, WarGame::Board;

TEST_CASE("Foot soldiers") {
    WarGame::Board board (8,1);

    CHECK(!board.has_soldiers(1));
    board[{0,0}] = new FootSoldier(1);
    CHECK(board.has_soldiers(1));
    CHECK(!board.has_soldiers(1));
    board[{7,0}] = new FootSoldier(2);
    CHECK(board.has_soldiers(2));

    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    CHECK(!board.has_soldiers(2));
}


TEST_CASE("Foot soldiers") {
    WarGame::Board board (8,1);

    CHECK(!board.has_soldiers(1));
    board[{0,0}] = new FootSoldier(1);
    CHECK(board.has_soldiers(1));
    CHECK(!board.has_soldiers(1));
    board[{7,0}] = new FootSoldier(2);
    CHECK(board.has_soldiers(2));

    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    CHECK(!board.has_soldiers(2));
}

TEST_CASE("Foot soldiers") {
    WarGame::Board board (8,1);

    CHECK(!board.has_soldiers(1));
    board[{0,0}] = new FootSoldier(1);
    CHECK(board.has_soldiers(1));
    CHECK(!board.has_soldiers(1));
    board[{7,0}] = new FootSoldier(2);
    CHECK(board.has_soldiers(2));

    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    board.move(1, {0,0}, Board::MoveDIR::Up);  // move to {1,0} and shoot; damage 10
    board.move(1, {1,0}, Board::MoveDIR::Down);  // move back to {0,0} and shoot; damage 10 
    CHECK(!board.has_soldiers(2));
}