#pragma once
#include "Point.h"
class Vector : public Point
{
public:
	Vector(double x = 0, double y = 0);
	Vector(int x, int y);
	Vector(Point p1, Point p2);
	Vector toUnitV();
	void set(Point p1, Point p2);
};

