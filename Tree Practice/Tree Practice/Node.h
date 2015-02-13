#pragma once
class Node
{
public:
	Node(int input, Node* par);
	~Node(void);

	int data;
	Node* parent;
	Node* left;
	Node* right;

};

