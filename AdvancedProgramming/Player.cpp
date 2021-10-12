#include "Player.h"

Player::Player(int hps, int scr, string nm) : hit_points(hps)
{
	score = new int(scr);
	name = new string(nm);
}

Player::~Player()
{
	delete score;
	delete name;
}

int Player::get_hit_points() const
{
	return hit_points;
}

int Player::get_score() const
{
	return *score;
}

string Player::get_name() const
{
	return *name;
}

void Player::set_hit_points(int new_hit_points)
{
	hit_points = new_hit_points;
}

void Player::set_score(int new_score)
{
	*score = new_score;
}

void Player::set_name(string new_name)
{
	*name = new_name;
}
