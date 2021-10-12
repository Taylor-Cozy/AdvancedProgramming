#pragma once
using namespace std;

class Enemy {
public:
	static const int default_hps = 4;
	Enemy() :hit_points(default_hps) { score = new int(0); }
	Enemy(int hps, int scr);
	Enemy(int hps);
	Enemy(const Enemy& src);
	Enemy& operator=(const Enemy& rhs);
	virtual ~Enemy();
	virtual int get_hit_points() const;
	virtual int get_score() const;
	virtual void set_hit_points(int new_hit_points);
	virtual void set_score(int new_score);
	//virtual void print_type() = 0;

	friend void decrement_hp(Enemy& enemy);
protected:
	int hit_points;
	int* score;
};