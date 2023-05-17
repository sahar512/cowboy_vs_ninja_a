#include"Point.hpp"
Point::Point(double x, double y): x(x), y(y){}
//getters
double Point::getX(){
    return this->x; 
}
double Point::getY(){
    return this->y; 
}
//setters
void Point::setX(double x){
    this->x=x; 
}
void Point::setY(double y){
    this->y=y; 
}
double Point::distance(Point &point){
    return 0 ; 
}
void Point::Print()const{
     
}
Point Point::moveTowards(Point &sources , Point &dest, double dist){
    Point P0(3 , 6); 
    return P0; 
}
