#pragma once
#include "Soldier.hpp"

namespace WarGame 
{

    class FootSoldier : public Soldier
    {
        public:
            FootSoldier();
            FootSoldier(uint p) : Soldier(p,100,10,"FootSoldier"){}
    };
}