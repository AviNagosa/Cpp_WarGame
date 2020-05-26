#pragma once
#include "Soldier.hpp"

namespace WarGame 
{

    class ParamedicCommander : public Soldier
    {
        public:
            ParamedicCommander();
            ParamedicCommander(uint p) : Soldier(p,200,150,"ParamedicCommander"){}
    };
}