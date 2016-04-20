#pragma once
#include<allegro5\allegro.h>
#include<iostream>
using namespace std;

class Player
{
public:
	Player(void);
	~Player(void);
	
	void Loadcontent();
	void unloadContent();
	void upadate(ALLEGRO_EVENT ev, InputManager input);
	void Draw(ALLEGRO_DISPLAY *display);

	

private:
	
	ALLEGRO_BITMAP *playerImage;
	pair<float,float > position;
	float movespeed;
	
	
	
	
	int xpos;
	int ypos;

	int playerspeed;
	 
	int player_lives;
	int player_score;

	int bullets;
};

