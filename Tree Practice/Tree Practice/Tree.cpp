#include "Tree.h"


Tree::Tree(int input)
{
	endResult = input;
	root = new Node(1, root);
}


Tree::~Tree(void)
{
	delete root;
}

void Tree::Insert(int input, Node* current)
{
	if(current == root && root->left == nullptr && root->right == nullptr)
	{
		root->left = new Node(root->data, root);
		root->right = new Node(root->data, root);
	}
	else
	{
		if(current->left == nullptr && current->right == nullptr && current->data != endResult)
		{

		}
	}
}