#pragma once

using namespace std;

class Lesson7 {
public:
	void swap(int x, int y);

	void swap(int* x, int* y);

	void swap_ref(int& x, int& y);

	void Example();

	void Exercise2();

	void swap(char& a, char& b);

	void sort(int (&nums)[10]);

	int nums[10] = { 7, 3, 5, 2, 1, 4, 6, 9, 10, 8 };
};
