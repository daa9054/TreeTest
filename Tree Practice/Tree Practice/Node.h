#pragma once
#include <string>
class Node
{
public:
	Node(int input, Node* par, int lvl, std::string lor);
	~Node(void);

	int data;
	int level;
	Node* parent;
	Node* left;
	Node* right;
	std::string leftOrRight;

};

