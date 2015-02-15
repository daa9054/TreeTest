#include "Node.h"

Node::Node(int input, Node* par, int lvl, std::string lor)
{
	data = input;
	left = 0;
	right = 0;
	parent = par;
	level = lvl;
	leftOrRight = lor;
	
}


Node::~Node(void)
{
	delete left;
	delete right;
}
