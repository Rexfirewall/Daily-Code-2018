#include <iostream>
#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	al_init();
	al_init_primitives_addon();
	al_install_mouse();

	int level[10][10];
	
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_DISPLAY *display = al_create_display(500, 500);
	ALLEGRO_TIMER *timer = NULL;
	bool redraw = true;
	
	timer = al_create_timer(1.0 / 60);

	event_queue = al_create_event_queue();
	
	al_register_event_source(event_queue, al_get_display_event_source(display));

	al_register_event_source(event_queue, al_get_timer_event_source(timer));

	al_register_event_source(event_queue, al_get_mouse_event_source());
	
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_flip_display();

	for (int i = 0; i < 10; i++) {// rows
		for (int j = 0; j < 10; j++) // columns
			level[i][j] = rand() % 4 + 1;
		// create a random number between 1-4 fro each slot			
	}

	


	al_start_timer(timer);

	while (1)
	{
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);

		if (ev.type == ALLEGRO_EVENT_TIMER) {
			redraw = true;
		
		}

		else if (ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
			break;
		
		}

		else if (ev.type == ALLEGRO_EVENT_MOUSE_AXES ||
			ev.type == ALLEGRO_EVENT_MOUSE_ENTER_DISPLAY) {
			//bouncer_x = ev.mouse.x;
			//bouncer_y = ev.mouse.y;

		}

		else if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP) {
			break;
		
		}

		if (redraw && al_is_event_queue_empty(event_queue)) {
			redraw = false;

			//al_clear_to_color(al_map_rgb(0, 0, 0));

			//al_draw_bitmap(bouncer, bouncer_x, bouncer_y, 0);

			for (int i = 0; i < 10; i++) {// rows
				for (int j = 0; j < 10; j++) { // columns
					//cout << level[i][j] << " ";

					if (level[i][j] == 1)
						al_draw_filled_rectangle(i * 50, j * 50, i * 50 + 50, j * 50 + 50, al_map_rgb(255, 255, 0));

					else if (level[i][j] == 2)
						al_draw_filled_circle(i * 50 + 25, j * 50 + 25, 25, al_map_rgb(255, 0, 0));

					else if (level[i][j] == 3)
						al_draw_circle(i * 50 + 25, j * 50 + 25, 25, al_map_rgb(0, 255, 0), 0);

					if (level[i][j] == 4)
						al_draw_rectangle(i * 50, j * 50, i * 50 + 50, j * 50 + 50, al_map_rgb(255, 0, 255), 0);
				}
				//cout << endl;

			}

			al_draw_rectangle(0, 0, 50, 50, al_map_rgb(0, 0, 255), 8);


			al_flip_display();
		}
	}

	//al_destroy_bitmap(bouncer);
	al_destroy_timer(timer);
	al_destroy_display(display);
	al_destroy_event_queue(event_queue);

	al_flip_display();
	//system("pause");

	al_destroy_display(display);

	return 0;
}