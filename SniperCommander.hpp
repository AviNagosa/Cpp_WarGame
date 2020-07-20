#pragma once
#include "Soldier.hpp"
#include "Sniper.hpp"
namespace WarGame 
{
    class SniperCommander : public Sniper
    {
        public:
            SniperCommander();
            SniperCommander(uint p) : Sniper(p,120,120,100){}

            void attack(const Board &b);

            
    };
}