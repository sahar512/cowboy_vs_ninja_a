#include "Ninja.hpp"
namespace ariel{
    Ninja::Ninja(string name, int hitpoints, Point &location , int speed):
    speed(speed),Character(std::move(name), hitpoints,location) {}
}