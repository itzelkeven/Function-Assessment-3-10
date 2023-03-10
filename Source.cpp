#include<iostream>
using namespace std;
int drinkCoffee(char size);
int main() {
	char size;
	cout << "What size of Coffee do you want? " << endl;
	cin >> size;
	cout << "Caffeine Amount: " << drinkCoffee(size) << endl;
}
int drinkCoffee(char size) {
	if (size == 'L') {
		cout << "Large Coffee!" << endl;
		return 180;
	}
	else if (size == 'M') {
		cout << "Medium Coffee!" << endl;
		return 145;
	}
	else if (size == 'S') {
		cout << "Small Coffee Coming up!" << endl;
		return 109;
	}
}