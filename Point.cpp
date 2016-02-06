//
// Created by Jeffrey Cayton on 2/5/16.
//
//File: Point.cpp
//
//Description: this file contains the implementation of the Point class.

#include <cmath>
using namespace std;


#include "Point.h"
    //must include the .h header file which contains the class definitions
    //for Point.


//Default Constructor
//Set to initialize all new instantiated object variables to zero.
Point::Point()
{
    x = 0;
    y = 0;
    z = 0;
}

//Constructor with three paramters passed as the signature.
//When this constructor is called, it will take three paramters and
//set them equal to the Point objects variables x, y, and z.
Point::Point(double x1, double y1, double z1)
{
    x = x1;
    y = y1;
    z = z1;
}


//Member function to calculate distance.
//This member function is constant and therefore must be
//defined as such by placing "const" at the end. It takes a Point object reference,
//and returns the value of the distance of a point in proximity to another.
//
//'dot' will be name of local-scope variable for this function.

double Point::distanceTo(const Point& dot) const
{
    return pow(this->getX() - dot.getX(),2) + pow(this->getY() - dot.getY(),2) +
            pow(this->getZ() - dot.getZ(),2);
}






