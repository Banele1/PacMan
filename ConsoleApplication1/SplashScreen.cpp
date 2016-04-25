#include "SplashScreen.h"



SplashScreen::SplashScreen()
{
}


SplashScreen::~SplashScreen()
{
}
void SplashScreen::LoadContent()
{
	font = al_load_font("Navia.ttf", 30, NULL);
}

void SplashScreen::UnloadContent()
{
	al_destroy_font(font);
} 

void SplashScreen::Update(ALLEGRO_EVENT ev)
{

	if (input.IskeyPressed(ev, ALLEGRO_KEY_Z))
		ScreenManager::GetInstance().AddScreen(new TitleScreen);
}
 
void SplashScreen::Draw(ALLEGRO_DISPLAY *DISPLAY)
{
	al_draw_text(font, al_map_rgb(0, 150, 150), 100, 100, NULL, "SplashScreen");

}
