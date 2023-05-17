#pragma once

class Point{
    private:
        double x ; 
        double y; 
    public:
        //constructor
        Point(double x, double y);
        //getters
        double getX(); 
        double getY(); 
        //setters
        void setX(double x); 
        void setY(double y); 
        //get the distance between two points
        double distance (Point &point); 
        //print the x,y to this point 
        void Print()const; 
        //return the closets point to the destination point 
        static Point moveTowards(Point &sources , Point &dest, double dist);  

      

};