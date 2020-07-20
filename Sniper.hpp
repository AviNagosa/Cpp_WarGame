#pragma once
#include "Soldier.hpp"
#include "Board.hpp"
namespace WarGame
{

    class Sniper : public Soldier
    {
    public:
        Sniper();
        Sniper(uint n) : Soldier(n, 100, 100, 50) {}

        Sniper(int n, int s_h, int c_h, int d) : Soldier(n, s_h, c_h, d) {}

        virtual void attack(const Board &s);

        Soldier &getcloseSoldier(const Board &board);
    };
} // namespace WarGame