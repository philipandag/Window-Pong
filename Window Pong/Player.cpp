#include "Player.h"


void Player::move(Keys& keys)
{
	SDL_DisplayMode dm;
	SDL_GetCurrentDisplayMode(0, &dm);

	Point delta = Point(0, keys[SDLK_DOWN].pressed - keys[SDLK_UP].pressed);

	if (p1_.y() + delta.y() * speed.y() + (p2_.y() - p1_.y()) < dm.h &&
		p1_.y() + delta.y() * speed.y() > 0)
	{
		setPosition(Point(p1_.x() + delta.x() * speed.y(), p1_.y() + delta.y() * speed.y()));
	}
}