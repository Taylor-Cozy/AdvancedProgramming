#include <iostream>
#include "Lesson1.h"
using namespace std;

void Lesson1::HelloWorld() {
	cout << "Hello" << ' ' << "World" << "\n";
	std::cout << "What is 7 + 2?" << "\n";
	int x;
	cin >> x;
}

#pragma region Exercises


/* Exercise 1
	Find out what is the difference between a “signed” and an “unsigned” integer. When might you
	use an unsigned integer instead of a signed integer?

	Unsigned integers can hold positive numbers only (including 0). Signed integers can hold negative integers too, this shifts
	the range to include negative numbers meaning the number of positive numbers that can be held is effectively halved.
*/

void Lesson1::Exercise2() {
	char c = 'a';
	bool b = true;
	double d = 0.5;

	cout << "Character: " << c << '\n' << "Boolean: " << b << '\n' << "Double: " << d << endl;
}

void Lesson1::Exercise3() {
	int a, b;

	cout << "Please input two numbers (press enter each time)" << '\n';
	cin >> a;
	cin >> b;
	cout << "Sum: " << a + b << '\n' << "Product: " << a * b << endl;
}

void Lesson1::Exercise4() {
	string name;

	cout << "Enter ye name: " << endl;
	cin >> name;
	cout << "Hello " << name << "!" << endl;
}

#pragma endregion