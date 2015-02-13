#pragma once

#include "Node.h"
class Tree
{
public:
	Tree(int input);
	~Tree(void);

	int endResult;
	void Insert(int input, Node* current);
	void PrintTree();
private:
	Node* root;
};

