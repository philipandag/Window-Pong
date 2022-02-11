#pragma once
#include "SDL.h"
#include "Area.h"
#include <string>
using std::string;

class Window 
	: protected Area
{
protected:
	SDL_Window* window_;
	SDL_Surface* surface_;
	SDL_Renderer* renderer_;
	string title_;
public:
	//Constructor with two points
	Window(string title = "NULL", Area area = Area());
	//Constructor with one point and dimensions
	Window(string title, Point p1, int width, int height);
	void setTitle(string newTitle);
	void setPosition(Point p);
	void setSize(Point p);
};

