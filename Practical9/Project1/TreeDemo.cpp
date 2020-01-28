#include <iostream>
#include <string>
#include "TreeNode.h"

using namespace std;

int main()
{
	cout << "Tree Demo Program" << endl << endl;

	// set up an integer binanry tree node with i, l, r
	TreeNode<int> *i_tree = new TreeNode<int>(5,
		new TreeNode<int>(3),
		new TreeNode<int>(7));
	// print the tree
	i_tree->traverse(); 
	cout << endl;
	// delete i_tree to free memory
	delete i_tree;

	// set up the same by insert
	i_tree = new TreeNode<int>(5);
	i_tree = i_tree->insert(i_tree, 7);
	i_tree = i_tree->insert(i_tree, 3);
	// print the tree
	//i_tree->traverse(); 
	cout << endl;

	// more insert
	i_tree = i_tree->insert(i_tree, 2);
	i_tree = i_tree->insert(i_tree, 4);
	i_tree = i_tree->insert(i_tree, 6);
	i_tree = i_tree->insert(i_tree, 8);
	// print the tree
	//i_tree->traverse(); 
	cout << endl;
	// delete i_tree to free memory
	delete i_tree;

	// set up a binary string tree
	TreeNode<string>* s_tree = new TreeNode<string>("Wednesday",
		new TreeNode<string>("Monday", new TreeNode<string>("Sunday"), new TreeNode<string>("Tuesday")),
		new TreeNode<string>("Friday", new TreeNode<string>("Thursday"), new TreeNode<string>("Saturday")));
	// print the tree
	//s_tree->traverse(); 
	if (s_tree->isInTree("Monday", s_tree)) {
		cout << "This is in the tree " << endl;
	}
	else {
		cout << "This is not in the tree" << endl;
	}
	// delete s_tree to free memory
	delete s_tree;

	return 0;
}

