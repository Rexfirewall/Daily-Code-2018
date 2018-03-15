#include <iostream>
#include <string>

using namespace std;
string  inventory[3];

int main() {
	while (1) {
		cout << "What is your favorite food?" << endl;
		for (int i = 0; i < 3; i++) { // Bob
			getline(cin, inventory[i]);
			if (inventory[i].compare("taco") == 0) {
				cout << "You are cool." << endl << endl;
				break;
			} // end of if
			else {
				cout << "You suck." << endl << endl;
			} // end of else
			for (int i = 0; i < 3; i++)
				cout << "You said: " << inventory[i] << endl;
			cout << endl << endl;

		} // end of Bob
	} // end of while
} // end of main
