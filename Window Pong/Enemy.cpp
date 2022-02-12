#include "Enemy.h"

void Enemy::autoMove(Point ballCenter)
{
	Vector target = Vector(this->center(), ballCenter).toUnitV();
	setPosition(Point(p1_.x(), p1_.y() + (target * speed).y()));
}