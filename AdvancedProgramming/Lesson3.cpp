#include <iostream>
#include "Lesson3.h"
using namespace std;

int Lesson3::add(int x, int y) {
	return x + y;
}

int Lesson3::fac(int x) {
	int facSum = 1;

	for (int count = x; count > 0; count--) {
		facSum = facSum * count;
	}

	return facSum;
}

void Lesson3::Example() {
	int total = 0;

	int x;

	cout << "Please enter numbers, will finish if sum of factorals exceeds 2000" << "\n";

	while (total <= 2000) {
		cin >> x;
		total = add(fac(x), total);
	}

	cout << "The total is " << total << "\n";

	if (total > 3000)
		cout << "you overshot by a lot!" << "\n";
	else {
		cout << "You just went over" << "\n";
		cout << "Only over by " << total - 2000 << "\n";
	}

	cout << "enter a number to exit" << "\n";

	cin >> x;
}

#pragma region Exercises

// Exercise 1

bool Lesson3::positive(int x) {
	if (x >= 0)
		return true;
	else
		return false;
}

void Lesson3::Exercise1(int x) {
	cout << (positive(x) ? "true" : "false") << endl;
}

// Exercise 2
void Lesson3::Exercise2() {
	int x = 0;

	while (x >= 0) {
		cout << "Enter a number and press enter: ";
		cin >> x;
	}
}

// Exercise 3
void Lesson3::Exercise3(int total) {
	int x;
	cout << "Please enter number: ";
	cin >> x;

	total = add(fac(x), total);

	if (total <= 2000) {
		Exercise3(total);
	}
	else {
		cout << "Total is " << total << endl;
		if (total > 3000)
			cout << "you overshot by a lot!\n";
		else {
			cout << "You just went over\n";
			cout << "Only over by " << total - 2000 << "\n";
		}
	}

}

#pragma endregion


