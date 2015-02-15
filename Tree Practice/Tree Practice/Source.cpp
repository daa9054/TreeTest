#include <iostream>
#include "Tree.h"

int main()
{
	std::cout<< "Welcome to My Dynamic Tree Creation Program" << std::endl
		<<"Please Enter How Many Levels You Would Like to Generate." << std::endl;

	int input;
	std::cin>>input;

	Tree tree(input);
	tree.Insert(tree.root, 1);
	return 0;
}