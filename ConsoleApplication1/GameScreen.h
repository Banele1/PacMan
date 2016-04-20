#pragma once
#include<allegro5\allegro.h>


class GameScreen
{
public:
	GameScreen();
	~GameScreen();

	virtual void LoadContent();
	virtual void UnloadContent();
	virtual void Update();
	virtual void Draw(ALLEGRO_DISPLAY *display); // make a reference to the display

};

