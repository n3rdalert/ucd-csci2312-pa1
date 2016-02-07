//
// Created by Jeffrey Cayton on 2/5/16.
//

#include <cmath>
#include "Point.h"

double computeArea(const Point &a, const Point &b, const Point &c)
{
    //Local variables
    double x1;
    double y1;
    double z1;

    //Use distanceTo member function to calculate the length of each line by taking
    //delta(a), delta(b), and delta(c). Set to x1, y1, z1.
    x1 = a.distanceTo(b);   //calls distance function to calculate distance from point a to b

    y1 = b.distanceTo(c);   //calls distance function to calculate distance from point b to c

    z1 = c.distanceTo(a);   //calls distance function to calculate distance from point c to a.


    //Heron's formula:
    //sqrt((s)*(s-a)*(s-b)*(s-a)

    //delta(a), delta(b), and delta(c) will be the sides represented by the variables x1, y1, & z1
    //respectively.

    //calculate s
    double s;
    s = ((x1 + y1 + z1)/2.0);

    //return product of the formula.
    return sqrt((s)*(s-x1)*(s-y1)*(s-z1));
};
