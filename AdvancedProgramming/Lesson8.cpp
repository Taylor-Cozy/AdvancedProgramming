#include "Lesson8.h"
#include <iostream>

float Lesson8::calc_avg(const int* arr, const int val)
{
	int sum = 0;

	for (int i = 0; i < val; ++i)
		sum += arr[i];

	return (sum / (float)val);
}

void Lesson8::Example()
{
	const int CONST_VALUE = 3;
	float ave;

	// stack based 1-d arrays
	int array_nums[CONST_VALUE] = { 2, 4, 5 };

	// print out the first element
	cout << "value at index 0 is " << array_nums[0] << "\n";

	//stack based 2-d arrays
	char naughts_n_xs[3][3];

	// set the middle square to x
	naughts_n_xs[1][1] = 'X';

	//arrays on the heap 1-d
	int* sum = new int[CONST_VALUE];

	for (int i = 0; i < CONST_VALUE; ++i)
	{
		cout << "enter a value...\n";
		cin >> sum[i];
	}

	ave = calc_avg(sum, CONST_VALUE);

	cout << "the average is " << ave << "\n";

	delete[] sum;
}

#pragma region Exercises

void Lesson8::Exercise1() {
	char fullName[19] = { 'T','a','y','l','o','r',' ','H','e','t','h','e','r','i','n','g','t','o','n' };
	printName(fullName, 19);
}

void Lesson8::Exercise2()
{
	char fullName[19] = { 'T','a','y','l','o','r',' ','H','e','t','h','e','r','i','n','g','t','o','n' };
	char* first = new char[6];
	char* last = new char[12];

	copyName(fullName, first, last);

	printNameHeap(first, 6);
	printNameHeap(last, 12);
}

void Lesson8::copyName(char name[], char* first, char* last)
{
	for (int i = 0; i < 6; i++) {
		*first = name[i];
		first++;
	}

	for (int i = 7; i < 19; i++) {
		*last = name[i];
		last++;
	}
}

void Lesson8::printName(char name[], int length) {
	for (int i = 0; i < length; i++) {
		cout << name[i];
	}
	cout << endl;
}

void Lesson8::printNameHeap(char* name, int length) {
	for (int i = 0; i < length; i++) {
		cout << *name;
		name++;
	}
	cout << endl;
}

void Lesson8::BattleShip()
{
	bool board[5][5]{ false };

	board[1][1] = true;
	board[2][1] = true;
	board[3][1] = true;
	board[4][1] = true;

	int noGuesses = 10;
	bool win;

	for (int i = noGuesses; i > 0; i--) {

		int guessX, guessY;
		cout << "Remaining Guesses: " << i << endl;
		cout << "Pick X: ";
		cin >> guessX;
		cout << "Pick Y: ";
		cin >> guessY;
		cout << endl;

		if (board[guessX][guessY]) {
			cout << "HIT!" << endl;
			board[guessX][guessY] = false;
		}

		win = true;

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (board[i][j])
					win = false;
			}
		}

		if (win) {
			break;
		}
	}

	if (win)
		cout << "You Win!" << endl;
	else
		cout << "You Lose!" << endl;
}

#pragma endregion