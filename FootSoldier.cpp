#include <iostream>
#include <vector>
#include "FootSoldier.hpp"
using namespace std;

void FootSoldier::operation(std::vector<std::vector<Soldier*>> &board,std::pair<int,int> source) {
    int x1 = source.first;
    int y1 = source.second;
    int x2 = -1;
    int y2 = -1;
    Soldier* footSoldier = board[x1][y1];
    Soldier* enemy = nullptr;
    double min = 1000.0;

//find the enemy with a min distance
    for(int i = 0 ; i < board.size() ; ++i) {
        for(int j = 0 ; j < board[i].size() ; ++j) {
            if(board[i][j] != nullptr) {
                if(board[i][j]->getPlayerNumber() != footSoldier->getPlayerNumber()) {
                    double distance = getDistance(x1,y1,i,j);
                    if(min > distance){
                        min = distance;
                        x2 = i;
                        y2 = j;
                    }
                }
            }
        }
    }
  //  lowering score from the enemy
    if(x2 != -1 && y2 != -1) {
        enemy = board[x2][y2];
        enemy->setHP(enemy->getHP() - footSoldier->getDamage());
        if(enemy->isDead()) {
            board[x2][y2] = nullptr;
        }
    }
}
