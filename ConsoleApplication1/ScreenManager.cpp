#include "ScreenManager.h"




ScreenManager &ScreenManager::GetInstance()
{
	static ScreenManager instance;
	return instance;
}

ScreenManager::ScreenManager()
{
}


ScreenManager::~ScreenManager()
{
}

void ScreenManager::AddScreen(GameScreen *screen)
{
	transition.SetAlpha(0);
   
	currScreen->UnloadContent();
	delete currScreen;
	currScreen = screen;
	currScreen->LoadContent();

}



void ScreenManager::Initialise()
{
	currScreen = new SplashScreen();
}

void ScreenManager::LoadContent()
{
	currScreen->LoadContent();
	transImage = al_load_bitmap("transition_image.png");
	float position[2] = { 0, 0 };
	transition.LoadContent(transImage,"",position);
}

void ScreenManager::UnloadContent()
{
	al_destroy_bitmap(transImage);
	transition.UnloadContent(); 
}



void ScreenManager::Update( ALLEGRO_EVENT ev)
{
	currScreen->Update(ev);
}

void ScreenManager::Draw(ALLEGRO_DISPLAY *display)
{
	currScreen->Draw(display);
}

void ScreenManager::Transition()
{


}