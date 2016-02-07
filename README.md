## CSCI 2312: Programming Assignment 1

_working with objects_

* * *


C++

-Three-dimensional Point class.

-This program manipulates coordinate data given from three points. 

***




    class Point {

    private:
    double x, y, z;
    
    public:

    // Constructors
    Point();                             // default constructor
    Point(double x, double y, double z); // three-argument constructor
                                         // takes x, y, and z coordinates of point.
    ~Point(){};   //Destructor



    //Mutator methods (The Set Functions)
    void setX(double newX)
    { x = newX; };

    void setY(double newY)
    { y = newY; }

    void setZ(double newZ)
    { z = newZ; };



    // Accessor methods (The Get Functions)
    double getX() const
    {
        return x;
    };

    double getY() const
    {
       return y;
    };

    double getZ() const
    {
        return z;
    };


    //Member Function
    double distanceTo (const Point& dot) const;

***

###Compilers
Compiles successfully on:
 
* Xcode Version 7.2 (7C68)
 
* CLion Build CL143.1186
 
* Terminal (Mac) Version 2.6.1 (361.1)

-All tests pass; No error messages.


###### Header File: Point.h

* This file contains the declaration of the Point class. Private members are the variables that hold the coordinates 
of each point. There will be 3 points in total. Public members are the Mutator (set) functions, Accessor 
(get) functions, and the distanceTo constant member function. The distanceTo function calculates the distance 
of one point in proximity to another. 

***

###### Source Files: Point.cpp; area.cpp
* _Point.cpp_: contains implementation of the Point class and member functions. 

* _area.cpp_: contains implementation of the function used to calculate area. It's signature is the lengths of the 3
lines between the points calculated by the distanceTo function inside the Point class. The area is found by using 
Heron's formula of sqrt((s)*(s-a)*(s-b)*(s-c)). 

***
