#include "Point.hpp"
#include <string>
#pragma once
using namespace std; 
class Character{
    protected:
        Point location ;
        std::string name; 
        int characterHit; 
    public:   
        Character(string name, int characterHit , Point &location); 
        bool isAlive(); 
        double distance(Character *other);
        void hit(int characterHit); 
        Point& getlocation(); 
        string getname(); 
        virtual ~Character(){}
        char print()const; 





};