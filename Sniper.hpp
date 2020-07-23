#pragma once
#include "Soldier.hpp"
using namespace std;
class Sniper: public Soldier{
public:
    Sniper(uint playerNumber,int currentPoint = 100, int maxPoint = 100, int damage = 50,string type = "S") : Soldier(playerNumber,currentPoint,maxPoint,damage,type){}
    virtual~Sniper(){}
    virtual void operation(std::vector<std::vector<Soldier*>> &board,std::pair<int,int> source);
};


