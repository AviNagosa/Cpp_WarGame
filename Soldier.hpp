#pragma once
#include <iostream>
#include <vector>
#include <stack>
#include <math.h>
using namespace std;
class Soldier {
protected:
    uint playerNumber;
    int currentPoint;
    int damage;
    int maxPoint;
    std::string type;
public :
    Soldier(uint mPlayerNumber, int c_p, int m_P, int mDamage,string type) : playerNumber(mPlayerNumber), currentPoint(c_p), maxPoint(c_p), damage(mDamage), type(type){}
    virtual ~Soldier(){}
    virtual void operation(std::vector<std::vector<Soldier*>> &board,std::pair<int,int> source) = 0;

    uint getPlayerNumber() {
        return playerNumber;}
    int getHP() {
        return currentPoint;}
    int getMaxHP() {
        return maxPoint;}
    int getDamage() {
        return damage;}
    std::string getType() {
        return type;}
    void setHP(int newHP){
        currentPoint = newHP;}
    bool isDead() {
        if(currentPoint <= 0)
            return true;
        return false;}

};
