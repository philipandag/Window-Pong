#pragma once
#include "Player.h"

class Enemy
	:public Player
{
public:
	void autoMove(Point ballPos);
};

