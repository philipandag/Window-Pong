#include "Vector.h"

Vector::Vector(double x, double y)
	: Point(x, y)
{
}

Vector::Vector(int x, int y)
	: Point(x, y)
{
}

Vector::Vector(Point p1, Point p2)
	: Point(p2.x() - p1.x(), p2.y() - p1.y())
{
}

Vector Vector::toUnitV()
{
	double mag = sqrt(x() * x() + y() * y());
	return Vector(x() / mag, y() / mag);
}

void Vector::set(Point p1, Point p2)
{
	set(p2.x() - p1.x(), p2.y() - p1.y());
}