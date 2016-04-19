#include<iostream>
#include<allegro5\allegro.h>
#include<allegro5\allegro_native_dialog.h>
#include<allegro5/allegro_primitives.h>

#define sw 800//screen width
#define sh 600//screen height

int main()

{
	const int  FPS = 60;
	enum Direction { UP, Down, Left, Right };

	ALLEGRO_DISPLAY *display;
	if (!al_init())
	{
		al_show_native_message_box(NULL, NULL, NULL, "could not initialize allegro 5", NULL, NULL);
	}
	al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
	display = al_create_display(sw, sh);//creates the display with the size sw and sh

	al_set_window_position(display, 200, 100);//positioning of the display in you computer screen
	al_set_window_title(display, "PACMAN TIMER ADDED");//the window title
	al_install_keyboard();//installing the keyboard so that the compiler will know when we want to use the keboard
	al_init_primitives_addon();//alllows us to draw primitive on the screen

	ALLEGRO_COLOR mycolor = al_map_rgb(44, 177, 223);
	ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();//we creating a line up to execute when a corresponing key is pressed
	al_register_event_source(event_queue, al_get_keyboard_event_source());//now we are are registerering what we want in our queue event
	

	bool done = true, draw = true;
	int x = 10, y = 10;
	int Directionio = Down; // sset directin to down
	int movespeed=2;//each move will be 5 spaces 
	ALLEGRO_TIMER*timer = al_create_timer(1.0 / FPS);
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_start_timer(timer);

	while (done)
	{
		
			    ALLEGRO_EVENT events;
			al_wait_for_event(event_queue, &events);

			if (events.type == ALLEGRO_EVENT_KEY_DOWN)
			{
				switch (events.keyboard.keycode)
				{
				case ALLEGRO_KEY_DOWN:
					Directionio = Down;
					break;
				case ALLEGRO_KEY_UP:
					Directionio = UP;
					break;
				case ALLEGRO_KEY_RIGHT:
					Directionio = Right;
					break;
				case ALLEGRO_KEY_LEFT:
					Directionio = Left;
					break;
				case ALLEGRO_KEY_ESCAPE:
					done = true;
					break;
				}

			}
			

			if (events.type==ALLEGRO_EVENT_TIMER)
			{
				switch (Directionio)
				{
				case Down:
					y += movespeed;
					break;
				case UP:
					y -= movespeed;
					break;
				case Right:
					x += movespeed;
					break;
				case Left:
					x -= movespeed;

					break;


				default:
					break;
				
			}
				draw = true;
		}

	// we do not want to randomly draw
		if (draw){
			draw = false;
			//basically this is for creating an animation  
			al_draw_rectangle(x, y, x + 20, y + 20, mycolor, 2.0);//drawing my rectangle
			al_flip_display();//the drawn rectangle is displayed on screen
			al_clear_to_color(al_map_rgb(0, 0, 0));//it is then cleared off the screen 
		}
	}
	if (!display)
	{
		al_show_native_message_box(NULL, NULL, NULL, "could not create allegro window", NULL, NULL);
	}
	al_destroy_display(display);
	al_destroy_event_queue(event_queue);
	return 0;
};
