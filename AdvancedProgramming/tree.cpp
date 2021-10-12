#include "tree.h"
#include <iostream>

using namespace std;

tree::tree()
{
	root = NULL;
}

tree::~tree()
{
	//delete root;
	//root = nullptr;
}

void tree::insert_integer(node** pos, int value)
{
	if (!pos) return;
	if (!(*pos)) {
		*pos = new node;
		(*pos)->left = nullptr;
		(*pos)->right = nullptr;
		(*pos)->value = value;
	}
	else {
		if (value < (*pos)->value) {
			insert_integer(&(*pos)->left, value);
		}
		else if(value > (*pos)->value) {
			insert_integer(&(*pos)->right, value);
		}
	}
}

void tree::print_tree(node* pos)
{
	if (!pos) return;

	print_tree(pos->left);
	cout << pos->value << endl;
	print_tree(pos->right);
}

void tree::terminate_tree(node* pos)
{
	if (pos->left)
		terminate_tree(pos->left);
	if (pos->right)
		terminate_tree(pos->right);

	delete pos;
	pos = nullptr;
}

bool tree::search_tree(node* pos, int value)
{
	if (pos->value == value)
		return true;

	if (value < pos->value) {
		if (pos->left)
			search_tree(pos->left, value);
		else
			return false;
	}
	else {
		if (value > pos->value) {
			if (pos->right)
				search_tree(pos->right, value);
			else
				return false;
		}
	}

}
