// A 2-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {

private:
    double x, y, z;

public:
    // Constructors
    Point();    // default constructor
    Point(double x, double y, double z); // three-argument constructor
                                        // takes x, y, and z coordinates of point.
    ~Point(){};   //Destructor



    // Mutator methods (The Set Functions)
    //One set function for each variable, and will assign the new value of the
    //variable when it has been calculated.
    void setX(double newX)
    { x = newX; };

    void setY(double newY)
    { y = newY; }

    void setZ(double newZ)
    { z = newZ; };



    // Accessor methods
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


    //Member Functions
    //This member function must be declared with the "const"
    //type at the end since we do not want to change it's value.
    double distanceTo (const Point& dot) const;

};

#endif // __POINT_H
