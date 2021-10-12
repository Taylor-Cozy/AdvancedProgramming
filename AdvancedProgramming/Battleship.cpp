#include "Battleship.h"

Battleship::Battleship(int hps)
{
	hitpoints = hps;
}

Battleship::~Battleship()
{
}

int Battleship::get_score()
{
	return score;
}

int Battleship::get_hitpoints()
{
	return hitpoints;
}

void Battleship::set_score(int newscore)
{
	score = newscore;
}

void Battleship::set_hitpoints(int newhp)
{
	hitpoints = newhp;
}
