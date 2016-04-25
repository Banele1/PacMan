#include "TitleScreen.h"
#include"SplashScreen.h"


TitleScreen::TitleScreen(void)
{
}


TitleScreen::~TitleScreen(void)
{
}

void TitleScreen::LoadContent()
{
	font = al_load_font("Navia.ttf", 30, NULL);
}

void TitleScreen::UnloadContent()
{
	al_destroy_font(font);
}

void TitleScreen::Update(ALLEGRO_EVENT ev)
{

	if (input.IskeyPressed(ev, ALLEGRO_KEY_ENTER))
		ScreenManager::GetInstance().AddScreen(new SplashScreen);
}

void TitleScreen::Draw(ALLEGRO_DISPLAY *display)
{
	al_draw_text(font, al_map_rgb(150, 0, 150),100,100,NULL,"TitleScreen");

}