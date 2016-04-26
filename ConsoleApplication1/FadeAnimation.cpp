#include "FadeAnimation.h"


FadeAnimation::FadeAnimation()
{
 }


FadeAnimation::~FadeAnimation()
{
}

void FadeAnimation::LoadContent(ALLEGRO_BITMAP *image, string text, float position[2])
{
	Animation::LoadContent(image, text, position); 
	fadespeed = 1.0f;
	increase = false;

}

void FadeAnimation::UnloadContent()
{
	Animation::UnloadContent();
	fadespeed = NULL;
}

void FadeAnimation::Update(InputManager input)
{
	if (isActive)
	{
		if (!increase)
			alpha -= fadespeed;
		else
			alpha += fadespeed;

		if (alpha <= 0)
		{
			alpha = 0;
			increase = true;
		}
		else if (alpha >= 255)
		{
			alpha = 255;
			increase = false;

		}

	}
	else
		alpha = 255;


}