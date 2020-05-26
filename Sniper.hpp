#pragma once
#include "Soldier.hpp"

namespace WarGame 
{

    class Sniper : public Soldier
    {
        public:
            Sniper();
            Sniper(uint p) : Soldier(p,100,50,"Sniper"){}
    };
}