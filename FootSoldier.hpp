#pragma once

#include <iostream>
#include "Soldier.hpp"
#include "Board.hpp"
namespace WarGame 
{
    class FootSoldier : public Soldier
    {
      
        public:
        FootSoldier();
        virtual ~FootSoldier(){};
        FootSoldier(int n) :Soldier(n,100,100,10){}
        FootSoldier(int n,int s_h,int c_h,int d): Soldier(n,s_h,c_h,d){}

        virtual void attack(const Board &s);
       
        Soldier& getcloseSoldier(const Board &board);
        
     

        
    };

}