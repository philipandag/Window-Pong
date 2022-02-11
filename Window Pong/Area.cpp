#include "Area.h"

Area::Area(Point p1, Point p2)
{
	p1_ = p1;
	p2_ = p2;
	dim_ = p2 - p1;
}

void Area::operator=(Area a)
{
	p1_ = a.p1_;
	p2_ = a.p2_;
	dim_ = a.dim_;
}

void Area::setSize(Point p)
{
	p2_ = p1_ + p;
	dim_ += p;
}

void Area::setPosition(Point p)
{
	p2_ = p + (p2_ - p1_);
	p1_ = p;
}

void Area::operator+=(Vector v)
{
	p1_ += v;
	p2_ += v;
}

bool Area::collidesWith(Area other)
{
	return (
		p1_.x() < other.p2_.x() &&
		p2_.x() > other.p1_.x() &&
		p1_.y() < other.p2_.y() &&
		p2_.y() > other.p1_.y()
		);
}

