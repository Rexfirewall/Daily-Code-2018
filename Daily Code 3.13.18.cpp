#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main() {
	int input = 5;
	int temp;
	vector<int> one;
	vector<int> ::iterator i;

	while (input != 0) {
		cin >> input;
		one.push_back(input);
		

	}
	sort(one.begin(), one.end());

		for (i = one.begin(); i < one.end(); i++) {
			//cout << "the numbers in order are: ";
			cout << *i << endl;

		}
		system("pause");
}