#include "App.h"
#include <iostream>

App::App()
{
	exit = false;
	event = new SDL_Event;
	SDL_Init(NULL);
}

int App::start()
{
	SDL_DisplayMode dm;
	SDL_GetCurrentDisplayMode(0, &dm);
	screenArea.p1_ = Point(0, 0);
	screenArea.p2_ = Point(dm.w, dm.h);

	player = new Player();
	player->setPosition(Point(100, 100));
	player->setSize(Point(50, 300));
	player->setTitle("Player");

	ball = new Ball();
	ball->setPosition(Point(200, 100));
	ball->setSize(Point(50, 50));
	ball->setTitle("Ball");

	enemy = new Enemy();
	enemy->setPosition(Point(1820, 100));
	enemy->setSize(Point(50, 300));
	enemy->setTitle("Enemy");

	while (!exit)
	{
		timer.start();
		pollEvent();
		player->move(keys);
		enemy->autoMove(ball->center());
		moveBall();

		if (keys[SDLK_ESCAPE].pressed == true)
			exit = true;
		timer.update();
		timer.delay();
	}
	return 0;
}

void App::pollEvent()
{
	while (SDL_PollEvent(event))
	{		
		if (keys.keyExists(event->key.keysym.sym))
		{
			if (event->type == SDL_KEYDOWN)
			{
				keys[event->key.keysym.sym].pressed = true;
			}
			else if (event->type == SDL_KEYUP)
			{
				keys[event->key.keysym.sym].pressed = false;
				keys[event->key.keysym.sym].read = false;
			}
		}
	}
}

void App::moveBall()
{
	Area afterMove = *ball + ball->velocity;
	Vector deflect(1, 1);

	if(afterMove.p1_.x() < 0 ||
		afterMove.p2_.x() > screenArea.p2_.x())
	{
		deflect *= Vector(-1, 1);
	}
	else if(afterMove.p1_.y() < 0 ||
		afterMove.p2_.y() > screenArea.p2_.y())
	{
		deflect *= Vector(1, -1);
	}
	else if (afterMove.collidesWith(*player))
	{
		Vector newV = Vector(player->center(), ball->center()).toUnitV();
		std::cout << "\rX: " << newV.x() << ", Y: " << newV.y();
		ball->velocity = newV;
	}
	else if (afterMove.collidesWith(*enemy))
	{
		Vector newV = Vector(enemy->center(), ball->center()).toUnitV();
		std::cout << "\rX: " << newV.x() << ", Y: " << newV.y();
		ball->velocity = newV;
	}

	ball->velocity *= deflect;
	ball->move();
}
