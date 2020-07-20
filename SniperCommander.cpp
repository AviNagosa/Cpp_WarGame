#include <stdexcept>
#include "SniperCommander.hpp"
#include "Board.hpp"
namespace WarGame 
{

    void SniperCommander:: attack(const Board &b)
    {
         int point = 0;
        int max_point = 0;
        Soldier *strong_soldier;
        Soldier *s;
        std::pair<int, int> p = {0, 0};
        ////////find the strong soldier and attack him////////////////
        for (int i = 0; i < b.get_size(); i++)
        {
            for (int j = 0; j < b.get_size(); j++)
            {
                *s = b[{i, j}];
                point = s->get_currnet_health();
                if (point > max_point && s->get_num() != this->get_num())
                {
                    max_point = point;
                    *strong_soldier = *s;
                }
            }
        }
        strong_soldier->injury(this->damage);
        //////////////////////////////////////////////////////

        ////////all the snipers attack//////////////////////
        for (int i = 0; i < b.get_size(); i++)
        {
            for (int j = 0; j < b.get_size(); j++)
            {
                Sniper *sniper = dynamic_cast<Sniper *>(b[{i, j}]);
                if (sniper)
                {
                    if (sniper->get_num() == this->get_num() && (*sniper)!=(*this))
                    {
                        sniper->attack(b);
                    }
                }
            }
        }
    }
   
}