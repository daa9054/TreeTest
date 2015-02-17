#pragma once
#include <string>
//David Amata
//February 17, 2015
class Node
{
public:
	//Constructor
	Node(int input, Node* par, int lvl, std::string lor);
	//Destructor
	~Node(void);

	//Member Variables
	//Made Public for Quick Accessibility Outside Class
	int data; //what the node contains
	int level; //how far down the tree a node is
	Node* parent; // the parent in which the node is connected to on a higher level
	Node* left; //left child node 
	Node* right; //right child node
	std::string leftOrRight; // stores a string that states if the node is left, right, or root branch.

};

