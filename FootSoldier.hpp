#pragma once
#include "Soldier.hpp"

namespace WarGame 
{
    class FootSoldier : public Soldier
    {
        private:
        int footSoldier;

        public:
        FootSoldier();
        FootSoldier(int n) : footSoldier(n){}
    };

}