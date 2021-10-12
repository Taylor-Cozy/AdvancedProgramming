#pragma once
#include "ArmedEnemy.h"

class Boss : public ArmedEnemy {
public:
	Boss(int hps, int ammo, int armour);
	virtual ~Boss();
	void set_armour_level(int new_armour_level);
	int get_armour_level();
	virtual void print_type();
protected:
	int armour_level;
};