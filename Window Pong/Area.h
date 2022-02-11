#pragma once
#include "Vector.h"
class Area
{
public:
	Area(Point p1 = Point(), Point p2 = Point());
	void operator=(Area a);
	void setSize(Point p);
	void setPosition(Point p);
	void operator+=(Vector v);
	bool collidesWith(Area other);


public:
	Point p1_;
	Point p2_;
	Point dim_;
};

