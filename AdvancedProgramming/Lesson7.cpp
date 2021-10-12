#include "Lesson7.h"
#include <iostream>

using namespace std;

void Lesson7::swap(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void Lesson7::swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void Lesson7::swap_ref(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

void Lesson7::Example() {
	int a, b;

	cout << "Please type in a number" << "\n";
	cin >> a;
	cout << "Please type in another number" << "\n";
	cin >> b;

	cout << "before swap, a = " << a << " and b = " << b << "\n";
	swap(a, b);
	cout << "after swap (by value), a = " << a << " and b = " << b << "\n";
	swap(&a, &b);
	cout << "after swap by pointer reference, a = " << a << " and b = " << b << "\n";

	swap_ref(a, b);
	cout << "after swap using references, a = " << a << " and b = " << b << "\n";

	int& a_ref = a;

	cout << "=============================================================" << endl;

	char x = 'a', y = 'b';
	cout << "A: " << x << " B: " << y << endl;
	swap(x, y);
	cout << "A: " << x << " B: " << y << endl;
}

#pragma region Exercises

// Exercise 1 - What is wrong with these two lines of code?

// There cannot be an empty reference, references are required to be initialised. References need to be assigned
// to variables, i.e. they need to be assigned using already reserved memory, after all a reference is referencing
// memory that already exists - therefore we cannot assign 5 as 5 is not a memory address, it is an integer.

// Exercise 2 - What is the value of x_ref after these lines of code execute.

// x_ref is first initialised to be the address of x. This means that any subsequent operations performed on x_ref
// will directly affect x. x_ref is then set to y, this does not mean that x_ref now points to y, rather it means
// that x is now set to the value of y - meaning x is now 4. It is important to note that after initialisation, 
// it is not possible to change what a reference refers to.

// Exercise 3

// You should never return a local variable by reference because as soon as the reference is returned, the function
// ends and the variable goes out of scope, meaning it will be destroyed.

// Exercise 4

void Lesson7::swap(char& a, char& b) {
	char temp = a;
	a = b;
	b = temp;
}

void Lesson7::sort(int (&nums)[10])
{

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (nums[j] > nums[j + 1]) {
				swap_ref(nums[j], nums[j + 1]);
			}
		}
	}
}

void Lesson7::Exercise2()
{
	int x = 3, y = 4;
	int& x_ref = x;

	cout << x_ref << endl;

	x_ref = y;
	cout << x_ref << endl;
}



#pragma endregion