#pragma once
#include "Soldier.hpp"

namespace WarGame 
{
    class SniperCommander : public Soldier
    {
        public:
            SniperCommander();
            SniperCommander(uint p) : Soldier(p,120,100,"SniperCommander"){}
    };
}