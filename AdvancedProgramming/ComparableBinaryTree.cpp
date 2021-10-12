#include "ComparableBinaryTree.h"
#include <iostream>

using namespace std;

ComparableBinaryTree::ComparableBinaryTree()
{
	root = NULL;
}

ComparableBinaryTree::~ComparableBinaryTree()
{
	//delete root;
	//root = nullptr;
}

void ComparableBinaryTree::insert_integer(cnode** pos, Comparable* value)
{
	if (!pos) return;
	if (!(*pos)) {
		*pos = new cnode;
		(*pos)->left = nullptr;
		(*pos)->right = nullptr;
		(*pos)->value = value;
	}
	else {
		if (value->compare_to(*(*pos)->value) == -1) {
			insert_integer(&(*pos)->left, value);
		}
		else if (value->compare_to(*(*pos)->value) == 1) {
			insert_integer(&(*pos)->right, value);
		}
	}
}

void ComparableBinaryTree::print_tree(cnode* pos)
{
	if (!pos) return;

	print_tree(pos->left);
	cout << pos->value->get_compare() << endl;
	print_tree(pos->right);
}

void ComparableBinaryTree::terminate_tree(cnode* pos)
{
	if (pos->left)
		terminate_tree(pos->left);
	if (pos->right)
		terminate_tree(pos->right);

	delete pos;
	pos = nullptr;
}

//bool ComparableBinaryTree::search_tree(cnode* pos, int value)
//{
//	if (pos->value == value)
//		return true;
//
//	if (value < pos->value) {
//		if (pos->left)
//			search_tree(pos->left, value);
//		else
//			return false;
//	}
//	else {
//		if (value > pos->value) {
//			if (pos->right)
//				search_tree(pos->right, value);
//			else
//				return false;
//		}
//	}
//
//}
