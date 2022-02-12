#pragma once
#include <map>
#include "SDL.h"

struct KeyState {
	bool pressed = 0;
	bool read = 0;
};

class KeyStates {
public:
	KeyState* key = NULL;
	KeyStates(int amount)
	{
		key = new KeyState[amount];
	}
};

class Keys {
protected:
	KeyStates keys = KeyStates(KEYS_AMOUNT);
	std::map<int, int> keyMap;

public:
	static const int KEYS_AMOUNT = 8;
	Keys();
	void printAll();
	KeyState& operator[](int keyCode);
	bool keyExists(int keycode);
};







