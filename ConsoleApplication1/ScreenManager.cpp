#include "ScreenManager.h"


ScreenManager::ScreenManager()
{
}


ScreenManager::~ScreenManager()
{
}

void ScreenManager::Initialise()
{
	currScreen = new SplashScreen();
}

void ScreenManager::LoadContent()
{
	currScreen->LoadContent();
}

void ScreenManager::Update()
{
	currScreen->Update();
}

void ScreenManager::Draw(ALLEGRO_DISPLAY *display)
{
	currScreen->Draw(display);
}
