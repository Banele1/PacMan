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
	newScreen = screen;
	currScreen->UnloadContent();
	delete currScreen;
	currScreen->LoadContent();

}



void ScreenManager::Initialise()
{
	currScreen = new SplashScreen();
}

void ScreenManager::LoadContent()
{
	currScreen->LoadContent();
}

void ScreenManager::Update( ALLEGRO_EVENT ev)
{
	currScreen->Update(ev);
}

void ScreenManager::Draw(ALLEGRO_DISPLAY *display)
{
	currScreen->Draw(display);
}
