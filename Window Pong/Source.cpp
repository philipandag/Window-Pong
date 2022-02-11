#include "Point.h"
#include <iostream>
#include "Window.h"
using namespace std;

int main(int argc, char* argv[])
{
	Window* player = new Window("Player", Area(Point(100, 100), Point(500, 500)));
	for (int i = 1000; i > 100; i -= 100)
	{
		player->setPosition(Point(i, i));
		SDL_Delay(200);
	}
	for (int i = 0; i < 1000; i += 100)
	{
		player->setSize(Point(i, i));
		SDL_Delay(200);
	}

	return 0;

}
