#include "Window.h"

Window::Window(string title, Area area)
	:Area(area.p1_, area.p2_)
{
	window_ = SDL_CreateWindow(title.c_str(), p1_.x(), p1_.y(), p2_.x() - p1_.x(), p2_.y() - p1_.y(), NULL);
	surface_ = SDL_GetWindowSurface(window_);
	renderer_ = SDL_CreateRenderer(window_, -1, NULL);
}

Window::Window(string title, Point p1, int width, int height)
	:Area(p1, Point(p1.x() + width, p1.y() + height))
{
	window_ = SDL_CreateWindow(title.c_str(), p1_.x(), p1_.y(), p2_.x() - p1_.x(), p2_.y() - p1_.y(), NULL);
	surface_ = SDL_GetWindowSurface(window_);
	renderer_ = SDL_CreateRenderer(window_, -1, NULL);
}

void Window::setTitle(string newTitle)
{
	SDL_SetWindowTitle(window_, newTitle.c_str());
}

void Window::setPosition(Point p)
{
	Area::setPosition(p);
	SDL_SetWindowPosition(window_, p1_.x(), p1_.y());
}

void Window::setSize(Point p)
{
	Area::setSize(p);
	SDL_SetWindowSize(window_, dim_.x(), dim_.y());
}