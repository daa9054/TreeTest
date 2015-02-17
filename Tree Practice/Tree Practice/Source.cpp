#include <iostream>
#include "Tree.h"
//David Amata
//February 17, 2015

int main()
{
	//Introduce the Program and Provide Instructions
	std::cout<< "Welcome to My Dynamic Tree Creation Program" << std::endl
		<<"Please Enter How Many Levels You Would Like to Generate." << std::endl;

	//Create variable to store input number for tree creation
	int input;
	std::cin>>input;

	//Create Tree with Input Variable
	Tree tree(input);
	//Start Insertion Algorithm
	tree.Insert(tree.root, 1);
	//End Program
	return 0;
}