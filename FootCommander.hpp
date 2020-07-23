#pragma once
#include "FootSoldier.hpp"
using namespace std;
class FootCommander : public FootSoldier {
public:
    FootCommander(uint playerNumber, int currentPoint = 150, int maxPoint = 150, int damage = 20,string type = "FC") : FootSoldier(playerNumber, currentPoint, maxPoint, damage,type){}
    ~FootCommander(){}
    void operation(std::vector<std::vector<Soldier*>> &board,std::pair<int,int> source);
};