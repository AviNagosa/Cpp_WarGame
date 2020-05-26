#pragma once
#include <iostream>
#include <cmath>

namespace WarGame 
{
    class Soldier
    {
        protected:
            std::string type;
            uint player, health, damage;
            double distance(uint,uint,uint,uint);

        public:
            Soldier();
            Soldier(uint p,uint h,uint d, std::string t = "") : 
                    player(p), health(h), damage(d), type(t) {}
            uint getPlayer();
            uint getHealth();
            uint getDamage();
            std::string getType();
            void setPlayer(uint);
            void setHealth(uint);
            void setDamage(uint);
            void setType(std::string);
    };
}
    