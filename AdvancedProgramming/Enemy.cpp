#include "Enemy.h"
#include <iostream>

Enemy::Enemy(int hps, int scr) : hit_points(hps)
{
	score = new int(scr);
}

Enemy::Enemy(int hps) : hit_points(hps)
{
	score = new int(0);
}

Enemy::Enemy(const Enemy& src) :
	hit_points(src.hit_points),
	score(new int(*src.score))
{
}

Enemy& Enemy::operator=(const Enemy& rhs)
{
	if (this == &rhs) {
		return (*this);
	}
	//free old memory
	delete score;

	//copy new memory
	hit_points = rhs.hit_points;
	score = new int(*rhs.score);

	return *this;
}

Enemy::~Enemy()
{
	delete score;
}

int Enemy::get_hit_points() const
{
	return hit_points;
}

int Enemy::get_score() const
{
	return *score;
}

void Enemy::set_hit_points(int new_hit_points)
{
	hit_points = new_hit_points;
}

void Enemy::set_score(int new_score)
{
	*score = new_score;
}
