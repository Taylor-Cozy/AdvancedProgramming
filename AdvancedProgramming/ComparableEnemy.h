#pragma once
#include "Comparable.h"

class ComparableEnemy : 
	public Comparable
{
public:
	ComparableEnemy(int hp, int ammo);
	virtual ~ComparableEnemy();
	virtual int compare_to(const Comparable& rhs);
};