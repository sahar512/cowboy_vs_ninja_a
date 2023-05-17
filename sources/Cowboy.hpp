#include"Character.hpp"
#include"Point.hpp"
#include<string>
#pragma once
namespace ariel{
    class Cowboy: public Character{
        int bullets; 
    public:  
        //Cowboy(const std::string& name, const Point& location );
        Cowboy(string name, Point &location); 
        Cowboy(string name, Point &&location); 

        void shoot(Character* enemy){

        }
        bool hasBullets(){
            return false; 
        } 
        void reload(){

        }


    };
};