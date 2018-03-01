#include <iostream>
#include <allegro5\allegro.h>
#include <allegro5/allegro_primitives.h>

using namespace std;

int main() {
	ALLEGRO_DISPLAY *win = NULL;

	al_init();
	al_init_primitives_addon();

	win = al_create_display(600, 600);

	al_clear_to_color(al_map_rgb(0, 0, 0));

	al_draw_filled_circle(300, 250, 200, al_map_rgb(128, 128, 128));
	al_draw_arc(300, 250, 300, 400, 75, al_map_rgb(128, 128, 128), 5);
	al_draw_filled_ellipse(400, 200, 50, 55, al_map_rgb(255, 0, 0));
	al_draw_filled_ellipse(250, 200, 50, 55, al_map_rgb(255, 0, 0));
	al_draw_filled_rectangle(250, 300, 450, 500, al_map_rgb(255, 0, 0));
	al_draw_filled_triangle(355, 300, 390, 290, 450, 455, al_map_rgb(30, 30, 30));
	al_draw_filled_triangle(345, 300, 290, 290, 380, 455, al_map_rgb(30, 30, 30));
	al_draw_pieslice(500, 500, 100, 500, 200, al_map_rgb(0, 255, 255), 5);

	al_flip_display();

	al_rest(20);

	al_destroy_display(win);
}

