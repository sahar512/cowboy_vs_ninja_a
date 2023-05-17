#include"Character.hpp"
#include"Cowboy.hpp"
#include"Ninja.hpp"
#include"Point.hpp"
#include<vector>
#pragma once
namespace ariel{
    class Team{
        public:
        Team(Character* leader); 
        ~Team(){}
        void add(Character* newfighter){

        }
        void attack(Team* enemy){

        }
        int stillAlive()const{
            return 0; 
        }
        void print() const{

        }
        private:
           Character* leader0; 
           std::vector<Character*> fighters;  

    };
    class Team2 : public Team {

    }; 
    class SmartTeam: public Team{

    }; 
};