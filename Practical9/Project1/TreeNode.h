#ifndef TREENODE_H
#define TREENODE_H

#include <iostream>
using namespace std;

// An object of type TreeNode holds three things: 
//		- an item (of type T)
//		- a left subtree
//		- a right subtree

template <typename T>
class TreeNode
{
public:
	TreeNode(T i, TreeNode<T>* l, TreeNode<T>* r);
	TreeNode(T i);
	~TreeNode();
	bool isInTree(T item, TreeNode<T>* tree);

	TreeNode<T> *insert(TreeNode<T>* tree, T item);
	void traverse();

private:
	// The three things held in a TreeNode
	T item;
	TreeNode<T> *left, *right;
};

template <typename T>
TreeNode<T>::TreeNode(T i, TreeNode<T>* l, TreeNode<T>* r)
	: item(i), left(l), right(r)
{
}

template <typename T>
TreeNode<T>::TreeNode(T i)
	: item(i), left(0), right(0)
{
}

template <typename T>
TreeNode<T>::~TreeNode()
{
	delete left;
	delete right;
}

template <typename T>
TreeNode<T>* TreeNode<T>::insert(TreeNode<T>* tree, T item)
{  
	// Inserts item in sorted tree, and returns the new tree
	if (!tree)
		tree = new TreeNode<T>(item);
	else
		if (item < tree->item)
			tree->left = insert(tree->left, item);
		else
			tree->right = insert(tree->right, item);
	return tree;
}

template <typename T>
bool TreeNode<T>::isInTree(T item, TreeNode<T>* tree){
	if (tree->item== item) {
		return true;
	}
	else if(tree->right != NULL){
		isInTree(item, tree->right);
	}
	else if (tree->left != NULL) {
		isInTree(item, tree->left);
	}
	else {
		return false;
	}
	
}

template <typename T>
void TreeNode<T>::traverse()
{
	if (left != 0)
		left->traverse();
	cout << item << endl;
	if (right != 0)
		right->traverse();
}

#endif