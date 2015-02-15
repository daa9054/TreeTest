#include "Tree.h"

Tree::Tree(int input)
{
	endResult = input;
	root = new Node(1, 0, 1, "Root");
}


Tree::~Tree(void)
{
	delete root;
}

void Tree::Insert(Node* current, int currentLevel)
{
	if(currentLevel <= endResult)
	{
		currentLevel++;
		int childrenLvl = currentLevel;
		PrintNode(current);
		if(current->parent == 0)
		{
			current->left = new Node(current->data, current, childrenLvl, "Left");
			current->right = new Node(current->data, current, childrenLvl, "Right");
			Insert(current->left, childrenLvl);
			Insert(current->right, childrenLvl);
		}
		else
		{
			/*if(current->parent->left == 0)
			{
				current->left = new Node(current->data, current, childrenLvl, "Left");
				Insert(current->left, childrenLvl);
			}
			else
			{
				current->left = new Node(current->data + current->parent->left->data, current, childrenLvl, "Left");
				Insert(current->left, childrenLvl);
			}



			if(current->parent->right == 0)
			{
				current->right = new Node(current->data, current, childrenLvl, "Right");
				Insert(current->right, childrenLvl);
			}
			else
			{
				current->right = new Node(current->data + current->parent->right->data, current, childrenLvl, "Right");
				Insert(current->right, childrenLvl);
			}*/

			if(current->leftOrRight == "Left")
			{
				current->left = new Node(current->data, current, childrenLvl, "Left");
				current->right = new Node(current->data + current->parent->right->data, current, childrenLvl, "Right");
				Insert(current->left, childrenLvl);
				Insert(current->right, childrenLvl);
			}
			else if(current->leftOrRight == "Right")
			{
				current->left = new Node(current->data + current->parent->left->data,current, childrenLvl, "Left");
				current->right = new Node(current->data, current, childrenLvl, "Right");
				Insert(current->left, childrenLvl);
				Insert(current->right, childrenLvl);
			}
		}	
	}
}

void Tree::PrintNode(Node* node)
{
	std::cout<<"Node Level: " << node->level << " Node Placement: " << node->leftOrRight <<" Node Data: " << node->data << std::endl;
}