#pragma once
#include <string>
using namespace std;

class Player {
public:
	Player(int hps, int scr, string nm);
	~Player();
	int get_hit_points() const;
	int get_score() const;
	string get_name() const;
	void set_hit_points(int new_hit_points);
	void set_score(int new_score);
	void set_name(string new_name);
private:
	int hit_points;
	int* score;
	string* name;
};
