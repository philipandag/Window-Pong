#include "Timer.h"

Timer::Timer()
{
	targetFPS = 60;
	frameDelay = 1000 / 60;
	startTime = 0;
	endTime = 0;
}
void Timer::start()
{
	startTime = SDL_GetTicks();
	endTime = startTime;
}
void Timer::update()
{
	endTime = SDL_GetTicks();
}
int Timer::current()
{
	return SDL_GetTicks();
}
int Timer::t1()
{
	return startTime;
}
int Timer::t2()
{
	return endTime;
}

void Timer::setFPS(int fps)
{
	if(fps > 0)
		targetFPS = fps;
}
void Timer::delay()
{
	SDL_Delay(frameDelay - (endTime - startTime));
}