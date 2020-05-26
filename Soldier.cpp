#include <stdexcept>
#include "Soldier.hpp"

namespace WarGame 
{
    double Soldier::distance(uint soldierX, uint soldierY, uint targetX, uint targetY){
        return sqrt(pow(soldierX - targetX, 2) + pow(soldierY - targetY, 2));
    }

    uint Soldier::getPlayer(){return player;}
    uint Soldier::getHealth(){return health;}
    uint Soldier::getDamage(){return damage;}
    std::string Soldier::getType(){return type;}

    void Soldier::setPlayer(uint p){player = p;}
    void Soldier::setHealth(uint h){health = h;}
    void Soldier::setDamage(uint d){damage = d;}
    void Soldier::setType(std::string t){type = t;}
}
    