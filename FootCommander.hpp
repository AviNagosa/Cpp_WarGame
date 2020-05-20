#pragma once
#include "Soldier.hpp"

namespace WarGame 
{

    class FootCommander : public Soldier
    {
        private:
        int footCommander;

        public:
        FootCommander();
        FootCommander(int n) : footCommander(n){}
    };
}