#pragma once

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
namespace WarGame
{
    static int ID = 1;
    class Soldier
    {
    public:
        int player_num;
        int start_health;
        int currnet_health;
        int damage;
        int id;
        std::pair<int, int> location;

    public:
        Soldier();
        virtual ~Soldier(){};
        Soldier(int num) : player_num(num), id(ID++) {}
        
        Soldier(int num, int start_h, int current_h, int damage_): 
                      player_num(num), start_health(start_h), currnet_health(current_h), damage(damage_), id(ID++) 
                      {
                         
                      }

        // void operator=(const Soldier *other)
        // {
        //     cout<<"copy cons"<<endl;
        //     this->id = other->id;
        //     this->player_num = other->player_num;
        //     this->start_health=other->start_health;
        //     this->currnet_health=other->currnet_health;
        //     this->damage=other->damage;
        //     this->location.first=other->location.first;
        //     this->location.second=other->location.second;
        //      cout<<"copy cons"<<endl;
        // }
        bool operator==(const Soldier &s)

        {
            if (this->id == s.id)
                return true;
            return false;
        }

        bool operator!=(const Soldier &s)
        {
            return !((*this) == s);
        }

        double distance(const Soldier &other) const
        {
            double d = this->location.first - other.location.first;
            double d2 = this->location.second - other.location.second;
            d = pow(d, 2);
            d2 = pow(d2, 2);
            return sqrt(d + d2);
        }

        void injury(int damage) { currnet_health -= damage; }

        void fix() { currnet_health = start_health; }

        void set_location(int i, int j) { this->location.first = i; this->location.second = j; }
        int get_num() { return player_num; }
        int get_currnet_health() { return currnet_health; }
        int get_damage() { return damage; }
   
         virtual void attack(){}

        // virtual void attack(const Board &board);
    };
    
} // namespace WarGame
