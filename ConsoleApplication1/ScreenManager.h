#pragma once
#include<iostream>
#include"GameScreen.h"
#include "SplashScreen.h"
#include "TitleScreen.h"
#include"FadeAnimation.h"
// allegro inits

#include<allegro5\allegro.h>
#include<allegro5\allegro_native_dialog.h>
#include<allegro5\allegro_image.h>
#include<allegro5\allegro_audio.h>
#include<allegro5\allegro_acodec.h>


#define ScreenWidth 800
#define ScreenHeight 600

class ScreenManager
{
private:
	ScreenManager();
	ScreenManager(ScreenManager const&);
	void operator= (ScreenManager const&);

	void Transition();

	GameScreen *currScreen;

	ALLEGRO_BITMAP *transImage;

	FadeAnimation transition;

public:
	~ScreenManager();
	static ScreenManager &GetInstance();

	void AddScreen(GameScreen *screen);
	void Initialise(); // can be called multiple times
	void LoadContent();
	void UnloadContent();
	void Update(ALLEGRO_EVENT ev);
	void Draw(ALLEGRO_DISPLAY *display);
	  
};

