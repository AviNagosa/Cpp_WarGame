#include "Paramedic.hpp"

void Paramedic::operation(std::vector<std::vector<Soldier*>> &board,std::pair<int,int> source) {
    int x1 = source.first;
    int y1 = source.second;
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
}
    // void Paramedic:: healAround(std::vector<std::vector<Soldier *>> &board, int x1, int y1)
    // {
    //     for (int i = -1; i <= 1; i++)
    //     {
    //         for (int j = -1; j <= 1; j++)
    //         {
    //             //if the we have a soldier and the soldier are not this
    //             if (board[x1 + i][y1 + j] != nullptr && (i!=0 && j!=0))
    //             {
    //                 //if the other soldier belong to the same group
    //                 if (board[x1 + i][y1 + j]->getPlayerNumber() == board[x1][y1]->getPlayerNumber())
    //                 {
    //                     board[x1 + i][y1 + j]->setHP(board[x1 + i][y1 + j]->getMaxHP());
    //                 }
    //             }
    //         }
    //     }
    