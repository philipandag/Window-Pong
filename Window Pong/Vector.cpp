#include "Vector.h"

Vector::Vector(double x, double y)
	: Point(x, y)
{ 
}

Vector::Vector(int x, int y)
	: Point(x, y)
{
}

void Vector::toUnitV()
{
	double mag = x() * x() + y() * y();
	set(x() / mag, y() / mag);
}

void Vector::set(Point p1, Point p2)
{
	set(p2.x() - p1.x(), p2.y() - p1.y());
}