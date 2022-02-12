#pragma once
#include "Vector.h"
class Area
{
public:
	Area(Point p1 = Point(), Point p2 = Point());
	void operator=(Area a);
	Area operator+(Vector v);
	void setSize(Point p);
	void setPosition(Point p);
	void operator+=(Vector v);
	bool collidesWith(Area other);
	Point center();

public:
	Point p1_;
	Point p2_;
	Point dim_;
};

