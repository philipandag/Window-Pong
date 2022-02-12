#pragma once

#include "Window.h"
#include "Player.h"
#include "Enemy.h"
#include "Ball.h"
#include "Keys.h"
#include "SDL.h"
#include <string>
#include "Timer.h"

using std::string;

class App
{
protected:
	SDL_Event* event;
	Keys keys;
	Timer timer;

	Player* player;
	Enemy* enemy;
	Ball* ball;
	Area screenArea;
public:
	bool exit;
	App();
	int start();
	void pollEvent();
	void moveBall();
};
