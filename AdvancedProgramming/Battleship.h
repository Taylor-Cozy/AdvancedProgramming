#pragma once
using namespace std;

class Battleship {
public:
	Battleship(int hps);
	~Battleship();

	int get_score();
	int get_hitpoints();
	void set_score(int);
	void set_hitpoints(int);

private:
	int score = 0;
	int hitpoints;
};