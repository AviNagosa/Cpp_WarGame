#include <stdexcept>
#include "Sniper.hpp"

namespace WarGame
{
    void Sniper::attack(const Board &b)
    {
        Soldier *s=&getcloseSoldier(b);
        s->injury(this->damage);
    }

    Soldier &Sniper:: getcloseSoldier(const Board &board)
    {
        int row= board.get_size();
             int column=board.get_size();
             double min=0;
             double dist=0;
             int arr[2];
             for(int i=0;i<row;i++){
                 for(int j=0;j<column;j++)
                 {
                     Soldier *temp=board[{i,j}];
                   if(this->get_num()!=temp->get_num())
                   {
                     if(this->distance(*temp)<min)
                     {
                         min=distance(*temp);
                         arr[0]=i;
                         arr[1]=j;
                     }
                   }
                 }
             }
             std::pair<int ,int >p={arr[0],arr[1]};
             Soldier *s2=board[p];
             
             return *s2;
    }
} // namespace WarGame