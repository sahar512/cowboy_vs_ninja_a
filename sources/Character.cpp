#include"Character.hpp"
Character::Character(string name, int characterHit , Point &location):name(std::move(name)),characterHit(characterHit),location(location){

}  
bool Character::isAlive(){
    return false; 
}
double Character::distance(Character *other){
    return 1; 
}
void Character::hit(int characterHit){

}
Point &Character::getlocation(){
    return location; 
}
string Character::getname(){
    return name; 
}
char Character::print()const{
    return 'A'; 
}

