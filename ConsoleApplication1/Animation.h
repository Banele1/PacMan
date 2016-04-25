#pragma once
#include<allegro5\allegro.h>
#include<allegro5\allegro_image.h>
#include<string>
#include"InputManager.h"

using namespace std;

class Animation
{
public:
	Animation();
	~Animation();

	void LoadContent();
	void Update(); 

protected:
	ALLEGRO_BITMAP *image, *sourceRect;
	string text;
	float position[2];
	float alpha;



};

