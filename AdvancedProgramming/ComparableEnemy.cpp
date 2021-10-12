#include "ComparableEnemy.h"

ComparableEnemy::ComparableEnemy(int hps, int ammos) : Comparable(hps)
{
}

ComparableEnemy::~ComparableEnemy()
{
}

int ComparableEnemy::compare_to(const Comparable& rhs)
{
	if (compare < rhs.get_compare())
		return -1;
	else if (compare > rhs.get_compare())
		return 1;
	else
		return 0;
}
