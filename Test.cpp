#include"doctest.h"
#include<cmath>
#include"sources/Team.hpp"
#include"sources/Character.hpp"
#include"sources/Cowboy.hpp"
#include"sources/Ninja.hpp"
#include"sources/Point.hpp"
#include<limits>
#include<stdexcept>
#include<iostream>
using namespace std; 
using namespace ariel; 

TEST_CASE("Point"){
    Point p0(5.6,0.0), p1(1.6,0.0); 
    CHECK(p0.getX()==5.6); 
    CHECK(p0.getY()==0.0); 
    CHECK(p1.getX()==1.6); 
    CHECK(p1.getY()==0.0); 
    CHECK(p1.distance(p0)==4); 
    CHECK(p0.distance(p1)==4); 

}
TEST_CASE("MOVETOWARD"){
    Point p2(2,3); 
    Point p3(1,4); 
    CHECK_NOTHROW(Point::moveTowards(p2,p3,5)); 
    CHECK_EQ(Point::moveTowards(p2,p3,5).getX(),1);
    CHECK_EQ(Point::moveTowards(p2,p3,5).getY(),4); 
    CHECK_EQ(Point::moveTowards(p2,p3,5).getX(),2);
    CHECK_EQ(Point::moveTowards(p2,p3,5).getY(),3); 
}
TEST_CASE(""){
    Point a(0,0); 
    Point b(6.0, 7.0); 
    Point c=a.moveTowards(a,b,1);
    CHECK(c.getX()==6); 
    CHECK(c.getY()==9); 
    Point d=a.moveTowards(a,b,0);
    CHECK(c.getX()==6); 
    CHECK(c.getY()==4); 
}
TEST_CASE("Character"){
    Point a(0,1);  
    Cowboy c0("Sahar",std::move (a));
    OldNinja n0("Sroor", a); 
    YoungNinja n1("Bassam", a); 
    TrainedNinja n2("Sawsan",a); 
    CHECK(c0.isAlive());
    CHECK(n0.isAlive()); 
    CHECK(n1.isAlive()); 
    CHECK(n2.isAlive()); 
    c0.hit(123); 
    CHECK(c0.isAlive()); 
    n2.hit(55); 
    CHECK(n2.isAlive()); 
    n0.hit(0); 
    CHECK(n0.isAlive()); 
    n1.hit(88); 
    CHECK(n1.isAlive());  
}

