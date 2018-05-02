#include<iostream>
#include<string>

using namespace std;
void print_menu();
void religion(int x);
double celsius(double);
int main() {
	int x;
	char input = 'a';
	print_menu();

	while (input != 'q') {
		cout << "command: ";
		cin >> input;
		switch (input) {
		case 'h':
			print_menu();
			break;
		case 't':
			cout << "Put in the number you want" << endl;
			cin >> x;
			cout << celsius(x) << endl;
			break;
		case 'r':
			cout << "Pick a Number From 1 to 10" << endl;
			cin >> x;
			religion(x);
			break;
		case 'q':
			cout << "see you" << endl;
			return 0;
		}
	}
}
void print_menu() {
	cout << "h: help" << endl;
	cout << "q: quit" << endl;
	cout << "t: temperature" << endl;
	cout << "r: religion" << endl;

}

void religion(int x) {

	switch (x) {
	case 1:
		cout << "Christianity is 31.2%" << endl;
		break;

	case 2:
		cout << "Islam is 24.1 %" << endl;
		break;
	case 3:
		cout << "Secular/Nonreligious/Agnostic/Atheist is 16 %" << endl;
		break;
	case 4:
		cout << "Hinduism is 15.1 %" << endl;
		break;
	case 5:
		cout << "Buddhism is 6.9 %" << endl;
		break;
	case 6:
		cout << "Chinese traditional religion	 5.50 %" << endl;
		break;
	case 7:
		cout << "Ethnic religions is 4.19 %" << endl;
		break;
	case 8:
		cout << "African traditional religions is 1.40 %" << endl;
		break;
	case 9:
		cout << "Sikhism is 0.32 %" << endl;
		break;
	case 10:
		cout << "Spiritism is 0.21% " << endl;
		break;
	default:// dumb user input
		cout << "Go away for that" << endl;

	}
}
double celsius(double x) {

	double C = (x - 32) / (9 / 5);
	return C;
}