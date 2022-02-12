#pragma once
#include "Window.h"
#include "Keys.h"
class Player
	:public Window
{
protected:
	Point speed = Point(5, 5);

public:
	void move(Keys& keys);
};

