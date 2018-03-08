#include <allegro5\allegro.h>
#include <allegro5/allegro_primitives.h>


class spot {
private:
	int xPos;
	int yPos;

public:
	void initspot(int x, int y);
	void drawcircle();
};

int main() {
	ALLEGRO_DISPLAY *win = NULL;

	al_init();
	al_init_primitives_addon();

	win = al_create_display(600, 600);


	spot b1;
	spot b2;
	spot b3;
	spot b4;
	spot b5;

	b1.initspot(100, 100);
	b2.initspot(200, 200);
	b3.initspot(300, 300);
	b4.initspot(400, 400);
	b5.initspot(500, 500);

	b1.drawcircle();
	b2.drawcircle();
	b3.drawcircle();
	b4.drawcircle();
	b5.drawcircle();

	al_flip_display();
	al_rest(20);
	al_destroy_display(win);
}

void spot::initspot(int x, int y) {
	xPos = x;
	yPos = y;
}

void spot::drawcircle() {
	al_draw_filled_circle(xPos, yPos, 45, al_map_rgb(50, 200, 100));
}
