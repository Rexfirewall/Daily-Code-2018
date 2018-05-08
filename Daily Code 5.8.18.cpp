#include <iostream>
#include <allegro5\allegro.h>
#include <allegro5\allegro_primitives.h>
#include <ctime>

using namespace std;

int main() {
	srand(time(NULL));
	al_init();
	al_init_primitives_addon();

	int level[10][10];

	ALLEGRO_DISPLAY *display = al_create_display(500, 500);
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_flip_display();

	for (int i = 0; i < 10; i++) {// rows
		for (int j = 0; j < 10; j++) // columns
			level[i][j] = rand() % 4 + 1;
		// create a random number between 1-4 fro each slot			
	}

	for (int i = 0; i < 10; i++) {// rows
		for (int j = 0; j < 10; j++) { // columns
			cout << level[i][j] << " ";

			if (level[i][j] == 1)
				al_draw_filled_rectangle(i * 50, j * 50, i * 50 + 50, j * 50 + 50, al_map_rgb(255, 255, 0));

			else if (level[i][j] == 2)
				al_draw_filled_circle(i * 50 + 25, j * 50 + 25, 25, al_map_rgb(255, 0, 0));

			else if (level[i][j] == 3)
				al_draw_circle(i * 50 + 25, j * 50 + 25, 25, al_map_rgb(0, 255, 0),0);

			if (level[i][j] == 4)
				al_draw_rectangle(i * 50, j * 50, i * 50 + 50, j * 50 + 50, al_map_rgb(255, 0, 255), 0);
		
		
		}
		cout << endl;
		
	}






	al_flip_display();
	system("pause");
}