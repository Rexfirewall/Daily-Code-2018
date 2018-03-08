#include <iostream>

using namespace std;

int main() {
	int i[5];

		cout << "put in the number" << endl;
		for (int h = 5; h >= 1; h--) {
			cin >> i[h];
		}
		i[5] = i[5] * 16;
		i[4] = i[4] * 8;
		i[3] = i[3] * 4;
		i[2] = i[2] * 2;
		i[1] = i[1] * 1;
		
		cout << "Your decimal number is: " << i[5] + i[4] + i[3] + i[2] + i[1] << endl;
		system("pause");
		
}
