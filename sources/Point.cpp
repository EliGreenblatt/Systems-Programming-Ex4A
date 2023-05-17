#include "Point.hpp"
using namespace ariel;

Point::Point()
{

}

Point::Point(double xLoc, double yLoc)
{
    x = xLoc;
    y = yLoc;
}

double Point::distance(Point otherP) const
{
    return 0;
}

Point Point::moveTowards(Point currPoint, Point destPoint, double distanceToPoint)
{
    return Point(0,0);
}

void Point::print()
{

}

int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;
}