#include "Paramedic.hpp"

void Paramedic::operation(std::vector<std::vector<Soldier*>> &board,std::pair<int,int> source) {
    int x = source.first;
    int y = source.second;
  //  healAround(board,x1,y1);
    for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                //if the we have a soldier and the soldier are not this
                if (board[x + i][y + j] != nullptr && (i!=0 && j!=0))
                {
                    //if the other soldier belong to the same group
                    if (board[x + i][y + j]->getPlayerNumber() == board[x][y]->getPlayerNumber())
                    {
                        board[x + i][y + j]->setHP(board[x + i][y + j]->getMaxHP());
                    }
                }
            }
        }
}
  