#pragma once
#include "Soldier.hpp"
using namespace std;

class Paramedic : public Soldier
{
public:
    Paramedic(uint playerNumber, int currentPoint = 100, int maxPoint = 100, int damage = 0, string type = "P") : Soldier(playerNumber, currentPoint, maxPoint, damage, type) {}
    virtual ~Paramedic() {}
    virtual void operation(std::vector<std::vector<Soldier *>> &board, std::pair<int, int> source);

    // void healAround(std::vector<std::vector<Soldier *>> &board, int x1, int y1);
   
};
