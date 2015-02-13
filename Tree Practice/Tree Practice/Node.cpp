#include "Node.h"


Node::Node(int input, Node* par)
{
	data = input;
	left = nullptr;
	right = nullptr;
	parent = par;
	
}


Node::~Node(void)
{
	delete left;
	delete right;
}
