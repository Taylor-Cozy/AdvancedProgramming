#pragma once
#include "Enemy.h"
#include <iostream>

class ArmedEnemy : public Enemy {
public:
	static const int default_ammo = 10;
	ArmedEnemy() : ammo_level(default_ammo) {};
	ArmedEnemy(int hps, int ammo);
	virtual ~ArmedEnemy();
	ArmedEnemy(const ArmedEnemy& src);
	ArmedEnemy& operator=(const ArmedEnemy& rhs);
	friend ostream& operator<<(ostream& ostr, const ArmedEnemy& rhs);
	virtual void set_score(const int new_score);
	virtual void shoot();
	void set_ammo(int new_ammo);
	int get_ammo();
	virtual void print_type();
protected:
	int ammo_level;
};

// Lesson 10 Exercises
// If we don't make the base class destructor virtual then the derived class' destructor will not be called,
// allowing memory leaks to occur.

// Giving the class a virtual method means there will be a v-table (virtual table) created in memory at runtime.