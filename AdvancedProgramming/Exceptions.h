#pragma once

#include <iostream>
#include <vector>
#include <stdexcept>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "VectorSizeError.h"

using namespace std;

class Exceptions {
public:
	const string file_name = "data.txt";

	void read_scores(vector<int>& scores, string file = "data.txt") throw (invalid_argument);

	double find_average(const int sum, const int divisor) throw (runtime_error);

	void throwing_ftn() throw (runtime_error);

	void memory_leak() throw (runtime_error);

	void no_memory_leak() throw (runtime_error);

	void check_vector_size(vector<int>& scores) throw (VectorSizeError);

	void Example();
};
