#pragma once
#include "SDL.h"

class Timer
{
	int startTime;
	int endTime;
	int targetFPS;
	int frameDelay;

public:
	Timer();
	void start();
	void update();
	int current();
	int t1();
	int t2();
	void setFPS(int fps);
	void delay();


};

