#include "FootCommander.hpp"

void FootCommander::operation(std::vector<std::vector<Soldier*>> &board,std::pair<int,int> source) {
    int x1 = source.first;
    int y1 = source.second;
    int x2 = -1;
    int y2 = -1;
    Soldier* footCommander = board[x1][y1];
    std::stack<std::pair<int,int>> myPlatoon;
    Soldier* enemy = nullptr;
    double min = 1000.0;
    //goes over the board and find  the enemy with the min distance///////
    for(int i = 0 ; i < board.size() ; i++) {
        for(int j = 0 ; j < board[i].size() ; j++) {
            if(board[i][j] != nullptr) {
                //if board[i][j] is ememy
                if(footCommander->getPlayerNumber() != board[i][j]->getPlayerNumber()) {
                    double distance = getDistance(x1,y1,i,j);//calculate the distance 
                    if(min > distance) {
                        min = distance;
                        x2 = i;
                        y2 = j;
                    }
                }
                    else {
                        //save the place of the footSoldier
                        if(board[i][j]->getType() == "FS"){
                            myPlatoon.push({i,j});
                        }
                    }
            }
        }
    }
    //if we find enmey
    if(x2 != -1 && y2 != -1) {
        enemy = board[x2][y2];
        enemy->setHP(enemy->getHP() - footCommander->getDamage());
        if(enemy->isDead()){
            board[x2][y2] = nullptr;
        }
    }
    //go througe to the stack  and attack 
    while(!myPlatoon.empty()) {
        std::pair<int, int> current = myPlatoon.top();
        board[current.first][current.second]->operation(board,current);
        myPlatoon.pop();
    }
}