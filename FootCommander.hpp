#pragma once
#include "Soldier.hpp"

namespace WarGame 
{
    class FootCommander : public Soldier
    {
        public:
            FootCommander();
            FootCommander(uint p) : Soldier(p,150,20,"FootCommander"){}
    };
}