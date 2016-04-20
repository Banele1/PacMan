#pragma once
#include<iostream>
#include"GameScreen.h"

class ScreenManager
{
private:
	ScreenManager();
	ScreenManager(ScreenManager const&);
	void operator= (ScreenManager const&);

	GameScreen currScreen, newScreen;

public:
	~ScreenManager();
	static ScreenManager &GetInstance();

	void Initialise(); // can be called multiple times
	void LoadContent();
	void Update();
	void Draw(ALLEGRO_DISPLAY &display);
	  
};

