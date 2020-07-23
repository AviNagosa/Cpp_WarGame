#pragma once
#include "Sniper.hpp"
using namespace std;
class SniperCommander : public Sniper {
    public:
        SniperCommander(uint playerNumber, int currentPoint = 120, int maxPoint = 120, int damage = 100,string type = "SC") : Sniper(playerNumber,currentPoint,maxPoint,damage,type){}
        ~SniperCommander(){}
        void operation(std::vector<std::vector<Soldier*>> &board,std::pair<int,int> source);
};
