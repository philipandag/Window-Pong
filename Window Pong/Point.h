#pragma once
#include <math.h>
#include <string>

class Point
{
public:
	Point(double x = 0, double y = 0);
	Point(int x, int y);

	void set(double x, double y);
	void add(double x, double y);
	void mult(double x, double y);

	void set(int x, int y);
	void add(int x, int y);
	void mult(int x, int y);

	void operator=(Point p);
	Point operator+(Point p);
	Point operator-(Point p);
	Point operator*(Point p);
	void operator+=(Point p);
	void operator-=(Point p);
	void operator*=(Point p);

	double x();
	double y();

	std::string toString();
private:
	double x_;
	double y_;
};

