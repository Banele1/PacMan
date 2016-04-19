#pragma once
class Player
{
public:
	Player();
	~Player();

private:
	int xpos;
	int ypos;

	int playerspeed;
	 
	int player_lives;
	int player_score;

	int bullets;
};

