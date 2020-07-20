#pragma once
#include "Soldier.hpp"
#include "Board.hpp"
namespace WarGame 
{

    class Paramedic : public Soldier
    {
        public:
            Paramedic();
            Paramedic(uint  n) : Soldier(n,100,0,0){}
            Paramedic(int n, int s_h,int c_h,int d):Soldier(n,s_h,c_h,d){}
            virtual void heal(const Board &b);
    };
}