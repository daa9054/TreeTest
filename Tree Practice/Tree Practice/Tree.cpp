#include "Tree.h"
//David Amata
//February 17, 2015
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
	//Only Continue Branching Tree if the Current Level is Less than or Equal to Desired Number of Levels
	if(currentLevel <= endResult)
	{
		//increment Level value for branching children 
		currentLevel++;
		//temp variable to pass into the created children
		int childrenLvl = currentLevel;
		//Print the Value of the current Node to the Console
		PrintNode(current);
		//If Parent is Equal to 0 than the Current Node is the Root Node.
		if(current->parent == 0)
		{
			current->left = new Node(current->data, current, childrenLvl, "Left");
			current->right = new Node(current->data, current, childrenLvl, "Right");
			Insert(current->left, childrenLvl);
			Insert(current->right, childrenLvl);
		}
		//If Child Node
		else
		{
			//If the Node is the Left than the children will be assigned values accordingly
			if(current->leftOrRight == "Left")
			{
				current->left = new Node(current->data, current, childrenLvl, "Left");
				current->right = new Node(current->data + current->parent->right->data, current, childrenLvl, "Right");
				//Start Recursion to create lower levels 
				Insert(current->left, childrenLvl);
				Insert(current->right, childrenLvl);
			}
			//If the Node is the Right than the children will be assigned values accordingly
			else if(current->leftOrRight == "Right")
			{
				current->left = new Node(current->data + current->parent->left->data,current, childrenLvl, "Left");
				current->right = new Node(current->data, current, childrenLvl, "Right");
				//Start Recursion to create lower levels.
				Insert(current->left, childrenLvl);
				Insert(current->right, childrenLvl);
			}
		}	
	}
}

//Prints the Node Level, Placement, and Stored Data to Console Window
void Tree::PrintNode(Node* node)
{
	std::cout<<"Node Level: " << node->level << " Node Placement: " << node->leftOrRight <<" Node Data: " << node->data << std::endl;
}