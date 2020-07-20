#include <stdexcept>
#include "Paramedic.hpp"

#include "Board.hpp"
namespace WarGame 
{
    void Paramedic::heal(const Board &b)
    {
        
        for(int i=0;i<b.get_size();i++)
        {
            for(int j=0;j<b.get_size();j++)
            {
                //if the soldier in his  group and the distance<=1 and the are not equals
                if(this->distance(*b[{i,j}])<=1 && (*b[{i,j}]).get_num()==this->get_num() && (*b[{i,j}]!=*this))
                {
                    (*b[{i,j}]).fix();
                }
            }
        }
    }
}