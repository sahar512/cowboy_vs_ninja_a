#include "Character.hpp"
#pragma once
namespace ariel{
    class Ninja : public Character{
        protected:
            int speed; 
        public:
        Ninja(string name, int hitpoints, Point &location , int speed); 
        void move(Character *enemy){

        }
        void slash(Character *enemy){

        }

    };
    class OldNinja: public Ninja{
        public:
            OldNinja(string name, Point &location): Ninja(std::move(name), 150, location, 8){}
            OldNinja(string name, Point &&location): Ninja(std::move(name), 150, location, 8){} 


    };
    class YoungNinja: public Ninja{
        public:
            YoungNinja(string name, Point &location): Ninja(std::move(name), 100, location, 14){}
            YoungNinja(string name, Point &&location): Ninja(std::move(name), 100, location, 14){} 


    };
    class TrainedNinja: public Ninja{
        public: 
            TrainedNinja(string name, Point &location): Ninja(std::move(name), 120, location, 12){}
            TrainedNinja(string name, Point &&location): Ninja(std::move(name), 120, location, 12){} 

    };
} ;   