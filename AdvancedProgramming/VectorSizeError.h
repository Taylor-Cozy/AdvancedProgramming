#pragma once
#include <stdexcept>

using namespace std;

class VectorSizeError : public exception {
public:
	VectorSizeError(string err_msg) : error_message(err_msg) {}
	virtual const char* what() const {
		return error_message.c_str();
	}
private:
	string error_message;
};