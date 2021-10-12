#include <iostream>
#include "Lesson4.h"

using namespace std;

void Lesson4::Example() {
	int a = 100;

	cout << "Value in memory location a is " << a << "\n";

	int* b = &a;

	cout << "Value in memory location pointer to by b is " << *b << "\n";
	cout << "b is actually at memory location " << &b << endl;

	int** c;
	c = &b;
	cout << "c is now pointing to what b points to: " << **c << endl;

	cout << "c points to: " << *c << endl;

	cout << "c actually holds the value: " << c << endl;
	cout << c << " is the same value as b's memory location " << &b << endl;
	cout << "c is actually at memory location " << &c << endl;

	cout << "c is eventually retrieving what is in memory location " << **&c << endl;
	cout << "the value of a is in memory location " << &a << endl;

	int x;
	cout << "Type a number to finish: ";
	cin >> x;
}

#pragma region Exercises

// Exercise 1 - Given that a pointer holds the value of a memory address, why is it permitted to add an integer
// data type value to a pointer variable but not a double data type ?

// You can add integers to pointers to iterate through memory, you cannot add a double because you cannot have 0.6 of a bit, 
// it is either 1 or 0, i.e. whole numbers only.

// Exercise 2 - Suppose we have a pointer to float data type which contains the memory address value 100.
// If we add the integer value 3 to this pointer, what will be the value of the pointer if float data
// types are 4 bytes in length ?

// The memory address will go up to 103, this is because the type of the pointer dicates how much an increment of 1 will jump by in memory - 
// so a float will jump by 4 bytes when the pointer is incremented by 1.

// Exercise 3

void Lesson4::swap(int* a, int* b) {
	int* temp = a;

	a = b;
	b = temp;
}

void Lesson4::testSwap() {
	int a = 10;
	int b = 5;

	int* ptrA = &a;
	int* ptrB = &b;

	cout << "A: " << a << endl;
	cout << "B: " << b << endl << endl;

	cout << "Pointer A: " << *ptrA << endl;
	cout << "Pointer B: " << *ptrB << endl << endl;

	swap(ptrA, ptrB);
	cout << "=== SWAP ===" << endl << endl;

	cout << "A: " << a << endl;
	cout << "B: " << b << endl << endl;

	cout << "Pointer A: " << *ptrA << endl;
	cout << "Pointer B: " << *ptrB << endl;
}

// Exercise 4

void Lesson4::IterateArray(int* arrayPtr) {

	int* end = arrayPtr + 10;

	for (arrayPtr; arrayPtr < end; arrayPtr++) {

		if (*arrayPtr % 2 == 0) {
			cout << *arrayPtr << endl;
		}

	}
}

void Lesson4::Exercise4() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int* arrayPtr = arr;
	IterateArray(arrayPtr);
}

#pragma endregion
