#pragma once

#include "Node.h"
#include <iostream>
//David Amata
//February 17, 2015
class Tree
{
public:
	//Constructor
	Tree(int input);
	//Destructor
	~Tree(void);

	//Member Variables
	int endResult; //number of levels to create
	void Insert(Node* current, int currentLevel); //Insertion Algorithm to create tree
	void PrintNode(Node* node); //Prints Node data to console window
	Node* root;//Root Node
};

