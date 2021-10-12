#include <iostream>
#include <numeric>
#include "Lesson5.h"

using namespace std;

void Lesson5::Example() {

	int a;

	int* b;

	a = 100;

	b = new int;

	cout << "The pointer b points to the memory address " << b << " located on the heap\n";
	cout << "The value in memory location b is " << *b << endl;

	*b = a;

	cout << "The value of stack variable a is " << a << "\n";
	cout << "The 'heap' memory pointed to by b contains " << *b << endl;

	delete b;
	b = NULL;

	// Exercise 3
	char c = 'c';
	string* d = new string;

	*d = c;

	delete d;
	d = NULL;

	// Exercise 4
	int* e = new int[10];
	//int* e = (int*)malloc(sizeof(int) * 10);

	iota(e, e + 10, 0);

	for (int i = 0; i < 10; i++)
		cout << e[i] << endl;

	delete[] e;
	//free(e);
	e = NULL;
}

#pragma region Exercises

// Exercise 1 -  What is “Stack Overflow” and why might a Recursive method be susceptible to this kind of
//				 problem?

// Stack overflow occurs when the program uses more space than is available on the stack - recursive functions are
// susceptible as there can be instances where the base condition is unable to be met, in which case the recursive
// function will be indefinitely called and use up all the remaining memory.

// Exercise 2 -  Memory Leaks are a problem associated with which type of memory? What must you do to try
//				 and avoid causing Memory Leaks in your programs ?// Memory leaks are associated with heap memory, to avoid them you must delete/ free up any memory you reserve on the// heap during runtime.// Exercise 5

#pragma endregion