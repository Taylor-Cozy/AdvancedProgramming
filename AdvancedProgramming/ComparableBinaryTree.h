#pragma once
#include <cstddef>
#include "Comparable.h"

using namespace std;

struct cnode {
public:
	ComparableBinaryTree();
	~ComparableBinaryTree();

	struct cnode* root;