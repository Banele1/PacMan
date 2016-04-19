#pragma once
class Player
{
public:
	Player();
	~Player();
	int player_move();
	void player_dead();

private:
	int xpos;
	int ypos;

	int playerspeed;
	 
	int player_lives;
	int player_score;

	int bullets;
};

