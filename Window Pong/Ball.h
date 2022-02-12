#pragma once
#include "Window.h"
class Ball
	:public Window
{
	Vector speed = Vector(10, 10);

public:
	void move();
	Vector velocity = Vector(1, 1);
};

