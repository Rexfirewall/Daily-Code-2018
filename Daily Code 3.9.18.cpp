//#include <iostream>
#include <allegro5\allegro.h>
#include <allegro5\allegro_image.h>

class Potato {
private:
	int xPos;
	int yPos;


public:
	void initPotato(int x, int y);
	void drawPotato(ALLEGRO_BITMAP *potato);


};


int main() {
	srand(time(NULL));

	al_init();
	al_init_image_addon();

	ALLEGRO_DISPLAY *win = al_create_display(1000, 1000);
	//al_clear_to_color(al_map_rgb(252, 252, 252));
	ALLEGRO_BITMAP *potato = al_load_bitmap("Potato_Mine.png");
	ALLEGRO_BITMAP *background = al_load_bitmap("galaxy.jpg");
	al_convert_mask_to_alpha(potato, al_map_rgb(255, 255, 255));
	al_set_window_title(win, "WWWWWWWWWWWWWWWOOOOOOOOOOOOOOOOWWWWWWWWWWWWWWW!!!!!!!!!!!!!!");
	al_set_window_position(win, 400, 0);
	al_draw_bitmap(background, 0, 0, 0);
	while (1) {
		al_draw_bitmap(potato, rand() & 1200, rand() % 1200, 0);
		al_flip_display();
	}

	Potato s1;
	Potato s2;
	Potato s3;

	s1.initPotato(rand(), rand());
	s2.initPotato(rand(), rand());
	s3.initPotato(rand(), rand());

	al_draw_bitmap(background, 0, 0, 0);
	s1.drawPotato(potato);
	s2.drawPotato(potato);
	s3.drawPotato(potato);



	al_destroy_display(win);
	al_destroy_bitmap(potato);
}

void Potato::initPotato(int x, int y) {
	xPos = x;
	yPos = y;
}

void Potato::drawPotato(ALLEGRO_BITMAP*potato) {
	al_draw_bitmap(potato, xPos, yPos, 0);
}