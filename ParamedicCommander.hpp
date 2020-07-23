#pragma once
#include "Paramedic.hpp"
using namespace std;
class ParamedicCommander : public Paramedic {
    public:
        ParamedicCommander(uint playerNumber, int currentPoint = 200, int maxPoint = 200, int damage = 0, string type = "PC") : Paramedic(playerNumber,currentPoint,maxPoint,damage,type){}
        ~ParamedicCommander(){}
        void operation(std::vector<std::vector<Soldier*>> &board,std::pair<int,int> source);
};


