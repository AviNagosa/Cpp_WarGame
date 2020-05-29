#pragma once

namespace WarGame 
{
    class Soldier
    {
        private:
        int group;
        int initial_health_points;
        int damage_per_activity;
       
        public:
        Soldier();
        Soldier(int num) : group(num){}

    };
}
    