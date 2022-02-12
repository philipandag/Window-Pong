#include "Ball.h"


void Ball::move()
{
	setPosition(Point(p1_.x() + velocity.x() * speed.x(), p1_.y() + velocity.y() * speed.y()));
}