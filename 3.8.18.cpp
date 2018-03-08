#include <iostream>
#include <string>
using namespace std;

class bros {
public:
	void limit();//Once past, character is dead
	void initplayer(int x, int y, string z);
	void printinfo();
	void takeDamage(int num);
	int NumLives();

private:
	int lives;
	int damage;
	int attack;
	string name;
};

int knockback(int D, int w, int p, double s, int b, double r);

int main() {
	bros Noctis;
	Noctis.initplayer(4, 0, "Noctis");
	while (Noctis.NumLives()>0) {

		Noctis.limit();
		Noctis.takeDamage(knockback(30, 75, 20, 1.5, 20, 1.2));
		Noctis.printinfo();
		system("pause");
	}

	cout << "your character has died" << endl;
}



void bros::initplayer(int x, int y, string z) {
	lives = 4;
	damage = 0;
	name = z;

}

void bros::printinfo() {

	cout << " " << lives << " " << damage << " " << name << endl;

}

void bros::limit() {
	if (damage > 120) {
		lives--;
		damage = 0;
	}
}


void bros::takeDamage(int num) {
	damage += num;
}

int knockback(int D, int w, int p, double s, int b, double r) {

	int num;
	num = ((((7 * (D + 2) * (D + p)) / (w + 100) + 9) * 2 * s) + b) * r;
	cout << "damage calculated is " << num;
	return num;
}

int bros::NumLives() {
	return lives;

