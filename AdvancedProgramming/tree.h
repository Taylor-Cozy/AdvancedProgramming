#pragma once
#include <cstddef>
#include "Comparable.h"
#include <iostream>

using namespace std; 

struct node {
public:
	tree();
	~tree();

	struct node* root;