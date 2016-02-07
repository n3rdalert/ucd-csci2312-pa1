// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {

private:
    double x, y, z;

public:
    // Constructors
    Point();                             // default constructor
    Point(double x, double y, double z); // three-argument constructor
                                         // takes x, y, and z coordinates of point.
    ~Point(){}; //Destructor



    //Mutator methods (The Set Functions)
    //One set function for each variable, and will assign the new value of the
    //variable when it has been calculated.
    void setX(double newX)
    { x = newX; };

    void setY(double newY)
    { y = newY; }

    void setZ(double newZ)
    { z = newZ; };



    // Accessor methods (The Get Functions)
    //One get function for each variable, and will return it's value.
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


    //distanceTo Member Function
    //Must be declared a 'const'
    double distanceTo (const Point& dot) const;

};

#endif // __POINT_H
