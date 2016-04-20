#pragma once

#include<allegro5\allegro.h>
#include<allegro5\keyboard.h>
#include<vector>

using namespace std;
 

class InputManager
{
public:
	InputManager();
	~InputManager();

	bool IskeyPressed(ALLEGRO_EVENT ev,int key);
	bool IskeyPressed(ALLEGRO_EVENT ev,vector<int> keys);

	bool IskeyReleased(ALLEGRO_EVENT ev, int key);
	bool IskeyReleased(ALLEGRO_EVENT ev, vector<int>keys);

private:

	ALLEGRO_KEYBOARD_STATE keyState;

};

