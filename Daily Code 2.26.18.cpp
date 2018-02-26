#include <iostream>
#include <allegro5\allegro.h>
#include <allegro5/allegro_primitives.h>
#include <ctime>
#include<windows.h>
int main() {
	ALLEGRO_DISPLAY *windo = NULL;

	al_init();
	al_init_primitives_addon();

	windo = al_create_display(600, 480);
	al_set_window_title(windo, "WHY MEEEEEEEMMMMMMMMMMMMMMMMEEEEE!!?!?!?!?!?!");
	srand(time(NULL));
	int a;
	int b;
	while (1) {
		a = rand() % 666 + 666;
		b = rand() % 666 + 666;
		Beep(a, b);
		al_draw_filled_circle(rand() % 600, rand() % 480, rand() % 150, al_map_rgb(rand() % 200, rand() % 25, rand() % 90));
al_flip_display();
		al_rest(0.0002);

		al_draw_filled_triangle(rand() % 600, rand() % 150, rand() % 200, rand() % 321, rand() % 50, rand() % 50, al_map_rgb(rand() % 600, rand() % 50, rand() % 595));
		al_flip_display();
		al_rest(0.02);
	}
	al_destroy_display(windo);
}