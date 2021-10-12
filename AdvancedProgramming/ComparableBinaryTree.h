#pragma once
#include <cstddef>
#include "Comparable.h"

using namespace std;

struct cnode {	Comparable* value;	struct cnode* left;	struct cnode* right;};class ComparableBinaryTree {
public:
	ComparableBinaryTree();
	~ComparableBinaryTree();

	struct cnode* root;	void insert_integer(struct cnode** tree, Comparable* value);	void print_tree(struct cnode* tree);	void terminate_tree(struct cnode* tree);	bool search_tree(struct cnode* tree, int value);};