#pragma once
#include "Soldier.hpp"
#include "FootSoldier.hpp"
#include "Board.hpp"
namespace WarGame 
{
    class FootCommander : public FootSoldier
    {
        public:
            FootCommander(){};
            ~FootCommander(){};
            FootCommander(uint n) : FootSoldier(n,150,150,20){}

             void attack(const Board &s);
         
    };
}