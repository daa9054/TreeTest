#pragma once

#include "Node.h"
#include <iostream>
class Tree
{
public:
	Tree(int input);
	~Tree(void);

	int endResult;
	void Insert(Node* current, int currentLevel);
	void PrintNode(Node* node);
	Node* root;
};

