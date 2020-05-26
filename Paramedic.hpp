#pragma once
#include "Soldier.hpp"

namespace WarGame 
{

    class Paramedic : public Soldier
    {
        public:
            Paramedic();
            Paramedic(uint p) : Soldier(p,100,150,"Paramedic"){}
    };
}