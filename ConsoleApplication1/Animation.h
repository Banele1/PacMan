#pragma once
#include<allegro5\allegro.h>
#include<allegro5\allegro_image.h>
#include<string>
#include"InputManager.h"
#include<allegro5\allegro_font.h>
using namespace std;

class Animation
{
public:
	Animation();
	~Animation();

	virtual void LoadContent(ALLEGRO_BITMAP *image,string text,float position[2]);
	virtual void UnloadContent();
	virtual void Update(InputManager input); 
    void Draw(ALLEGRO_DISPLAY *display); 

protected:
	ALLEGRO_BITMAP *image, *sourceRect;
	string text;
	ALLEGRO_FONT *font;
	float position[2];
	float alpha;
	bool isActive;


};

