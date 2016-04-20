#pragma once
#include<iostream>
#include"GameScreen.h"
#include "SplashScreen.h"

// allegro inits

#include<allegro5\allegro.h>
#include<allegro5\allegro_native_dialog.h>
#include<allegro5\allegro_image.h>
#include<allegro5\allegro_audio.h>
#include<allegro5\allegro_acodec.h>
#include<allegro5\allegro_font.h>
#include<allegro5\allegro_ttf.h>


#define ScreenWidth 800
#define ScreenHeight 600

class ScreenManager
{
private:
	ScreenManager();
	ScreenManager(ScreenManager const&);
	void operator= (ScreenManager const&);

	GameScreen *currScreen, *newScreen;

public:
	~ScreenManager();
	static ScreenManager &GetInstance();

	void Initialise(); // can be called multiple times
	void LoadContent();
	void Update();
	void Draw(ALLEGRO_DISPLAY *display);
	  
};

