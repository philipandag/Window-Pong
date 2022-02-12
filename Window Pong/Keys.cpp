#include "Keys.h"
#include <iostream>
using namespace std;

Keys::Keys()
{
	//KeyStates keys = KeyStates(KEYS_AMOUNT);
	keyMap[SDLK_UP] = 0;
	keyMap[SDLK_LEFT] = 1;
	keyMap[SDLK_RIGHT] = 2;
	keyMap[SDLK_DOWN] = 3;
	keyMap[SDLK_w] = 3;
	keyMap[SDLK_a] = 4;
	keyMap[SDLK_s] = 5;
	keyMap[SDLK_d] = 6;
	keyMap[SDLK_ESCAPE] = 7;
}

void Keys::printAll()
{
	bool pressed = false;

	for (int i = 0; i < KEYS_AMOUNT; i++)
		pressed |= keys.key[i].pressed;
	cout << '\r' << pressed;
	/*
	for (int i = 0; i < KEYS_AMOUNT; i++)
		cout << i << ": " << keys.key[i].pressed << endl;
	cout << "##################\n";
	*/
}

KeyState& Keys::operator[](int keyCode)
{
	return keys.key[keyMap[keyCode]];
}

bool Keys::keyExists(int keycode)
{
	return keyMap.find(keycode) != keyMap.end();
}