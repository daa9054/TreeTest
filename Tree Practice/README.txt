Hello and Welcome to my Binary Tree Program.

The code is broken into three sections:
Tree class 
Node class 
Source(Main)

Source(Main):
This introduces the program and provides instructions for the user to 
input a number which they would like the binary tree to branch down.

That number is inputted into a new Tree which takes that number 
and starts a recursive algorithm that populates the branches with the information.

This information is then printed to the console window for the user to see.

Node Class:
This is a storage device that hold a number and is connected to its two left and 
right children as well as its single parent. This allows you to traverse the tree
to find the nodes connections to other nodes

Tree Class:
This manages and creates the tree through an recursive insertion algorithm
that populates lower level branches with the sum of the parents nearest neighbors.

It also handles the printing of Node data while creating the tree.

Compilation Instructions:
The Program is built with Visual Studio 2012 and written to C++.
To run the program, open the SLN file in Visual Studio and press
CRTL- F5 to run in debug mode. While running, follow the console 
instructions to input your desired branch levels.

Optimization:
The Algorithm for Tree creation is Recursive so it can be branched down to
the users preference. The maximum ammount is determined by Stack Overflow.

David Amata
February 17, 2015