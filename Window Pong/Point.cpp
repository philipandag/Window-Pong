#include "Point.h"

//Constructors

Point::Point(double x, double y)
{
	x_ = x;
	y_ = y;
}

Point::Point(int x, int y)
{
	x_ = x;
	y_ = y;
}

void Point::set(double x, double y)
{
	x_ = x;
	y_ = y;
}

void Point::add(double x, double y)
{
	x_ += x;
	y_ += y;
}

void Point::mult(double x, double y)
{
	x_ *= x;
	y_ *= y;
}

void Point::set(int x, int y)
{
	x_ = x;
	y_ = y;
}

void Point::add(int x, int y)
{
	x_ += x;
	y_ += y;
}

void Point::mult(int x, int y)
{
	x_ *= x;
	y_ *= y;
}

void Point::operator=(Point p)
{
	x_ = p.x();
	y_ = p.y();
}

Point Point::operator+(Point p)
{
	return Point(x_ + p.x(), y_ + p.y());
}

Point Point::operator-(Point p)
{
	return Point(x_ - p.x(), y_ - p.y());
}

Point Point::operator*(Point p)
{
	return Point(x_ * p.x(), y_ * p.y());
}

void Point::operator+=(Point p)
{
	x_ += p.x();
	y_ += p.y();
}

void Point::operator-=(Point p)
{
	x_ -= p.x();
	y_ -= p.y();
}

void Point::operator*=(Point p)
{
	x_ *= p.x();
	y_ *= p.y();
}

double Point::x()
{
	return x_;
}

double Point::y()
{
	return y_;
}

std::string Point::toString()
{
	return "{X: " + std::to_string(x_) + " Y: " + std::to_string(y_) + "}";
}