#include "Boss.h"
#include <iostream>

Boss::Boss(int hps, int ammo, int armour) :
	ArmedEnemy(hps, ammo),
	armour_level(armour)
{
}

Boss::~Boss()
{
}

void Boss::set_armour_level(int new_armour_level)
{
	armour_level = new_armour_level;
}

int Boss::get_armour_level()
{
	return armour_level;
}

void Boss::print_type()
{
	cout << "Boss" << endl;
}
