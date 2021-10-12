#pragma once

class Comparable {
public:
	virtual int compare_to(const Comparable& rhs) = 0;

	Comparable(int compare_int);
	virtual ~Comparable();

	int get_compare() const {
		return compare;
	}
protected:
	int compare;
};