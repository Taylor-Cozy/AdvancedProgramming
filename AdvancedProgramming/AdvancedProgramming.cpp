#include <iostream>

#pragma region Lessons
#include "Lesson1.h"
#include "Lesson2.h"
#include "Lesson3.h"
#include "Lesson4.h"
#include "Lesson5.h"
#include "Lesson6.h"
#include "Lesson7.h"
#include "Lesson8.h"
#include "Enemy.h"
#include "ArmedEnemy.h"
#include "Boss.h"
#include "tree.h"
#include "ComparableBinaryTree.h"
#include "ComparableEnemy.h"
#include "Battleship.h"
#include "Matrix.h"
#include "MatrixInt.h"
#include <vector>
#include <stack>
#include <algorithm>
#include "Exceptions.h"
#pragma endregion

using namespace std;

void battleship_game();
void some_function(Enemy& enemy);
void decrement_hp(Enemy& enemy);
bool sortFunc(ArmedEnemy a, ArmedEnemy b);

int main()
{
	//Lesson1 l1;
	//l1.Exercise4();

	//Lesson2 l2;
	//l2.calculator();

	//Lesson3 l3;
	//l3.Exercise3();

	//Lesson4 l4;
	//l4.Exercise4();

	//Lesson5 l5;
	//l5.Example();

	//tree t;
	//t.insert_integer(&t.root, 5);
	//t.insert_integer(&t.root, 7);
	//t.insert_integer(&t.root, 6);
	//t.insert_integer(&t.root, 9);
	//t.insert_integer(&t.root, 8);
	//t.insert_integer(&t.root, 10);
	//t.insert_integer(&t.root, 3);
	//t.insert_integer(&t.root, 4);
	//t.insert_integer(&t.root, 2);
	//t.insert_integer(&t.root, 1);
	//t.insert_integer(&t.root, 5);
	//
	//t.print_tree(t.root);
	//bool correct = t.search_tree(t.root, 11);
	//
	//cout << (correct ? "Found." : "Not Found.") << endl;

	//t.terminate_tree(t.root);

	//Lesson6 l6;
	//l6.Example();

	//Lesson7 l7;

	//for (int i = 0; i < 10; i++)
	//	cout << l7.nums[i] << " ";

	//l7.sort(l7.nums);

	//cout << endl;
	//for (int i = 0; i < 10; i++)
	//	cout << l7.nums[i] << " ";
	//return 0;

	//Lesson8 l8;
	//l8.BattleShip();

	//Enemy e1(2, 10);
	//cout << "Hit points: " << e1.get_hit_points() << endl;

	//Enemy* e2 = new Enemy(2, 10);
	//e2->set_hit_points(3);
	//cout << "Hit points: " << e2->get_hit_points() << endl;

	//e2->set_score(2);
	//cout << "Score: " << e2->get_score() << endl;

	//delete e2;
	//e2 = NULL;

	//battleship_game();

	//ArmedEnemy* ae = new ArmedEnemy(2, 5);
	//ae->set_hit_points(3);
	//cout << "Hit points: " << ae->get_hit_points() << endl;
	//
	//ae->shoot();
	//
	//some_function(*ae);
	//
	//delete ae;
	//ae = NULL;
	
	//Boss b(10, 5, 2);
	//cout << "HP:\t" << b.get_hit_points() << "\nAmmo:\t" << b.get_ammo() << "\nArmour:\t" << b.get_armour_level() << endl;

	//Enemy* enemies[10];
	//
	//for (int i = 0; i < 9; i++) {
	//	enemies[i] = new ArmedEnemy(10, 5);
	//}
	//
	//enemies[9] = new Boss(20, 10, 5);
	//
	//for (Enemy* e : enemies) {
	//	cout << "HP: " << e->get_hit_points() << " -> ";
	//	decrement_hp(*e);
	//	cout << e->get_hit_points() << endl;
	//}
	//
	//for (int i = 0; i < 10; i++) {
	//	delete enemies[i];
	//}

	//Comparable* enemies[10];
	//
	//for (int i = 0; i < 10; i++) {
	//	enemies[i] = new ComparableEnemy(i + 1, 5);
	//}


	//ComparableBinaryTree t;
	//t.insert_integer(&t.root, enemies[5]);
	//t.insert_integer(&t.root, enemies[3]);
	//t.insert_integer(&t.root, enemies[2]);
	//t.insert_integer(&t.root, enemies[1]);
	//t.insert_integer(&t.root, enemies[4]);
	//t.insert_integer(&t.root, enemies[0]);
	//t.insert_integer(&t.root, enemies[9]);
	//t.insert_integer(&t.root, enemies[7]);
	//t.insert_integer(&t.root, enemies[8]);
	//t.insert_integer(&t.root, enemies[6]);

	//t.print_tree(t.root);
	//t.terminate_tree(t.root);

	//for (Comparable* e : enemies) {
	//	delete e;
	//	e = nullptr;
	//}

	//MatrixInt m(3, 4);
	//m.set_element(2, 2, 8);
	//cout << "element at 2,2 is " << m.get_element(2, 2) << "\n";

	//Matrix<int> m_int;
	//m_int.set_element(1, 1, 4);
	//cout << "element at 1,1 is " << m_int.get_element(1, 1) << "\n";

	//Matrix<double> m_doub;
	//m_doub.set_element(2, 2, 8.421);
	//cout << "element at 2,2 is " << m_doub.get_element(2, 2) << "\n";

	//return 0;

	//Matrix<int> mtx1;
	//mtx1.set_element(0, 0, 1);
	//mtx1.set_element(1, 1, 4);
	//mtx1.set_element(2, 2, 6);
	//cout << "matrix 1:\n" << mtx1;

	//Matrix<int> mtx2;
	//mtx2.set_element(0, 0, 1);
	//mtx2.set_element(1, 1, 4);
	//mtx2.set_element(2, 2, 2);

	//cout << "matrix 2:\n" << mtx2;

	//Matrix<int> mtx3;
	//mtx3 = mtx2;
	//cout << "matrix 3 assigned from matrix 2:\n" << mtx3;

	//Matrix<int> product = (mtx1 * mtx3);
	//cout << "matrix product assigned from mtx1 * mtx3:\n" << product;

	//int x;
	//cin >> x;
	//return 0;

	//vector<int> scores(5, 0);
	//scores[0] = 1; scores[1] = 2; scores[2] = 3;

	//for (int i = 0; i < scores.size(); ++i) {
	//	cout << "scores " << i << " = " << scores[i] << endl;
	//}

	//vector<Enemy>* enemies = new vector<Enemy>(3);

	//Enemy fourth, fifth;

	//enemies->push_back(fourth);
	//enemies->push_back(fifth);
	//cout << "size of enemies = " << enemies->size() << "\n";

	//int i = 0;
	//for (vector<Enemy>::iterator it = enemies->begin(); it != enemies->end(); ++it)
	//{
	//	it->set_score(scores[i]);
	//	cout << "score = " << it->get_score() << "\n";
	//	++i;
	//}

	//Enemy newthird;
	//enemies->insert(enemies->begin() + 2, newthird);
	//enemies->erase(enemies->begin() + 2);

	//Enemy& back = enemies->back();
	//cout << "hit points last element = " << back.get_hit_points() << "\n";

	//enemies->pop_back();
	//cout << "new size of enemies = " << enemies->size() << "\n";

	//// clear enemies of elements
	//enemies->clear();

	//delete enemies;

	//vector<ArmedEnemy>* armedenemies = new vector<ArmedEnemy>(2);

	//ArmedEnemy a, b, c;

	//armedenemies->push_back(a);
	//armedenemies->push_back(b);
	//armedenemies->push_back(c);

	//for (vector<ArmedEnemy>::iterator it = armedenemies->begin(); it != armedenemies->end(); ++it) {
	//	cout << "Ammo: " << it->get_ammo();
	//	it->set_ammo(5);
	//	cout << " -> " << it->get_ammo() << endl;
	//}

	//armedenemies->clear();
	//delete armedenemies;

	//stack<ArmedEnemy> s;
	//s.push(a);
	//s.push(b);
	//s.push(c);

	//cout << s.top() << endl;

	//vector<ArmedEnemy> ae;

	//for (int i = 0; i < 10; i++) {
	//	ArmedEnemy temp(i,0);
	//	ae.push_back(temp);
	//}

	//std::random_shuffle(ae.begin(), ae.end());

	//cout << "[";
	//for (int i = 0; i < ae.size() - 1; i++) {
	//	cout << ae[i].get_hit_points() << ", ";
	//}
	//cout << ae[ae.size() - 1].get_hit_points() << "]" << endl;

	//std::sort(ae.begin(), ae.end(), sortFunc);

	//cout << "[";
	//for (int i = 0; i < ae.size() - 1; i++) {
	//	cout << ae[i].get_hit_points() << ", ";
	//}
	//cout << ae[ae.size() - 1].get_hit_points() << "]" << endl;

	//return 0;

	Exceptions e;
	e.Example();

	return 0;
}

bool sortFunc(ArmedEnemy a, ArmedEnemy b) {
	if (a.get_hit_points() < b.get_hit_points())
		return true;
	else
		return false;

	return(a.get_hit_points() < b.get_hit_points() ? true : false);
}

// Forward Declaration for Lesson2.cpp
int minus(int x, int y) {
	return x - y;
}

// Battleship definition for Lesson 9
void battleship_game() {
	const int board_size = 5;
	int guesses = 10;
	Battleship* board[board_size][board_size] = { NULL };
	Battleship* bs = new Battleship(5);
	
	for (int i = 0; i < 5; i++)
		board[i][0] = bs;

	while ((bs->get_score() < bs->get_hitpoints()) && guesses > 0) {
		int guessX, guessY;

		cout << "Guesses Remaining: " << guesses << endl;
		cout << "Pick X (0-4): ";
		cin >> guessX;
		cout << "Pick Y (0-4): ";
		cin >> guessY;
		
		if (board[guessX][guessY]) {
			bs->set_score(bs->get_score() + 1);
			board[guessX][guessY] = NULL;
			cout << "Hit!" << endl;
		}
		else {
			cout << "Miss!" << endl;
		}

		guesses--;
	}

	if (bs->get_hitpoints() == bs->get_score())
		cout << "Winner!" << endl;

	delete bs;
	bs = nullptr;
}

// Inheritance function for Lesson 10
void some_function(Enemy& enemy) {
	enemy.set_score(6);
}

void decrement_hp(Enemy& enemy) {
	enemy.hit_points--;
}

// Vector Questions

// Question 1 = How does storage differ between a vector container and a list container? Given the way
// Caches reduce costly memory access, which container do you think might sometimes be better
// in terms of improving “cache hit rate” ?

// Vectors are stored in memory contiguously, meaning each element of the vector is one after the other in memory.
// 