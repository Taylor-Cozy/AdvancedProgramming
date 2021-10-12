#pragma once
#include <cstddef>
#include "Comparable.h"
#include <iostream>

using namespace std; 

struct node {	int value;	struct node* left;	struct node* right;};class tree {
public:
	tree();
	~tree();

	struct node* root;	void insert_integer(struct node** tree, int value);	void print_tree(struct node* tree);	void terminate_tree(struct node* tree);	bool search_tree(struct node* tree, int value);};