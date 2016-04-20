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

	void IskeyPressed(ALLEGRO_EVENT ev,int key);
	void IskeyPressed(ALLEGRO_EVENT ev,vector<int> keys);

	void IskeyReleased(ALLEGRO_EVENT ev, int key);
	void IskeyReleased(ALLEGRO_EVENT ev, vector<int>keys);

private:

	ALLEGRO_KEYBOARD_STATE keyState;

};

