#pragma once
#include "Soldier.hpp"
#include "Board.hpp"
#include "Paramedic.hpp"
namespace WarGame 
{

    class ParamedicCommander : public Paramedic
    {
        public:
            ParamedicCommander();
            ParamedicCommander(uint n) : Paramedic(n,200,0,0){}
             void heal(const Board &b);

    };
}