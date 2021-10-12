#include <iostream>
#include "Lesson2.h"

using namespace std;


int Lesson2::add(int x, int y) {

	return x + y;
}

int minus(int x, int y); // forward declaration!

void Lesson2::functions() {
	int a, b, c, exit;

	cout << "Please type in a number" << "\n";
	cin >> a;

	cout << "Please type in another number" << "\n";
	cin >> b;

	c = add(a, b);

	cout << a << '+' << b << '=' << c << "\n";

	cout << "enter another number to exit" << "\n";

	cin >> exit;
}



#pragma region Exercises

// Exercise 1
void Lesson2::product(int x, int y) {
	cout << x << "*" << y << "=" << x * y << "\n";
}

// Exercise 2
double Lesson2::quotient(double x, int y) {
	return x / y;
}

void Lesson2::Exercise2(double x, int y) {
	cout << quotient(x, y) << endl;
}

// Exercise 3
void Lesson2::calculator() {
	int x, y;
	char op;

	cout << "Enter first number: ";
	cin >> x;

	cout << "\nEnter second number: ";
	cin >> y;

	cout << "\nEnter Operator (+, -, *, or /): ";
	cin >> op;

	switch (op) {
	case '+':
		cout << x << "+" << y << "=" << x + y << endl;
		break;
	case '-':
		cout << x << "-" << y << "=" << x - y << endl;
		break;
	case '*':
		cout << x << "*" << y << "=" << x * y << endl;
		break;
	case '/':
		cout << x << "/" << y << "=" << x / y << endl;
		break;
	}
}
#pragma endregion