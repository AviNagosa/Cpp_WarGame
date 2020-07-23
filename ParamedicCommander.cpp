#include "ParamedicCommander.hpp"

void ParamedicCommander::operation(std::vector<std::vector<Soldier*>> &board,std::pair<int,int> source){
    int x1 = source.first;
    int y1 = source.second;
    Soldier* paramedicCommander = board[x1][y1];
    std::stack<std::pair<int,int>> myPlatoon;

   
  //  healAround(board,x1,y1);
    for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                //if the we have a soldier and the soldier are not this
                if (board[x1 + i][y1 + j] != nullptr && (i!=0 && j!=0))
                {
                    //if the other soldier belong to the same group
                    if (board[x1 + i][y1 + j]->getPlayerNumber() == board[x1][y1]->getPlayerNumber())
                    {
                        board[x1 + i][y1 + j]->setHP(board[x1 + i][y1 + j]->getMaxHP());
                    }
                }
            }
        }

    for(int i = 0 ; i < board.size() ; i++) {
        for(int j = 0 ; j < board[i].size() ; j++) {

            if(board[i][j] != nullptr) {
                if(board[i][j]->getPlayerNumber() == paramedicCommander->getPlayerNumber()) {
                    if(board[i][j]->getType() == "P"){
                        myPlatoon.push({i,j});
                    }
                }
            }
        }
    }
    while(!myPlatoon.empty()){
        std::pair<int,int> current = myPlatoon.top();
         board[current.first][current.second]->operation(board,current);
        myPlatoon.pop();
    }
};
