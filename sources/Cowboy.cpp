#include"Cowboy.hpp"
using namespace ariel; 
// Cowboy::Cowboy(const std::string& name, const Point& location ):
// (std::move(name),location,11) ,bullets(6){}
Cowboy::Cowboy(string name, Point &location) : bullets(6), Character(std::move(name), 11, location){}
Cowboy::Cowboy(string name, Point &&location) : bullets(6), Character(std::move(name), 11, location){}  
