#include <iostream>

#include "Lesson6.h"

using namespace std;

void some_namespace::some_function() {

	int a = 400;
	char letter = 'b';
	cout << "Some Namespace" << endl;
}


void some_other_namespace::some_function() {

	int a = 400;
	char letter = 'b';
	cout << "Some other namespace" << endl;
}

void Lesson6::Example() {
	cout << "global variable contains the value " << global_variable << "\n";

	int a = 100;
	int* b;

	{

		int a = 200;

		cout << "the value in a is " << a << "\n";

		int* local_ptr = new int(300);

		b = local_ptr;

	}

	cout << "the value in a is " << a << "\n";

	cout << "the value pointed to by 'b' is " << *b << "\n";
	delete b;
	b = NULL;

	std::cout << "output some data" << "\n";

	some_namespace::some_function();
	some_other_namespace::some_function();
}


#pragma region Exercises

	// Exercise 1 - When are global variables created and destroyed? How does this differ to variables created in a
	//				function?

	// A global variable is created when the program starts, and deleted when the program ends. This differs from 
	// function variables as they are created when the function is called and deleted when the function ends.

	// Exercise 2 - What is the scope of x?
	
	// X is scoped for as long as the for loop is running, when the for loop begins the variable x is created, when
	// the for loop ends the variable x goes out of scope.

	// Exercise 3 - Amend the code to create two integer variables in the main function with the same name, use what 
	// you've learned about scope and extend to prevent a naming conflict. (already exists within the main func lol)

	// Exercise 4 - Alter the program such that the some_function function belongs to a newly created namespace called
	//				some_namespace. Now create another some_function as a duplicate of the original, with another 
	//				namespace called some_other_namespace. Finally, call both functions within the main function using 
	//				the namespace syntax.



#pragma endregion

