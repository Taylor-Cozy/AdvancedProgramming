#include "ArmedEnemy.h"
#include <iostream>

ArmedEnemy::ArmedEnemy(int hps, int ammo) :
	Enemy(hps), 
	ammo_level(ammo)
{
}

ArmedEnemy::~ArmedEnemy()
{
}

ArmedEnemy::ArmedEnemy(const ArmedEnemy& src)
{
	ammo_level = src.ammo_level;
	hit_points = src.hit_points;
	delete score;
	score = new int(*src.score);
}

ArmedEnemy& ArmedEnemy::operator=(const ArmedEnemy& rhs)
{
	if (this == &rhs)
		return *this;

	ammo_level = rhs.ammo_level;
	hit_points = rhs.hit_points;
	delete score;
	score = new int(*rhs.score);

	return *this;
}

ostream& operator<<(ostream& ostr, const ArmedEnemy& rhs) {
	ostr << "Ammo: " << rhs.ammo_level;
	return ostr;
};

void ArmedEnemy::set_score(const int new_score)
{
	*score = new_score;
	cout << "score is now " << *score << endl;
}

void ArmedEnemy::shoot()
{
	if (ammo_level > 0) {
		cout << "bang!" << endl;
		--ammo_level;
	}
	else {
		cout << "no ammo!" << endl;
	}
}

void ArmedEnemy::set_ammo(int new_ammo)
{
	ammo_level = new_ammo;
}

int ArmedEnemy::get_ammo()
{
	return ammo_level;
}

void ArmedEnemy::print_type()
{
	cout << "Armed Enemy" << endl;
}
