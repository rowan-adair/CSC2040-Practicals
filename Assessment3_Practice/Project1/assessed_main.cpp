#include "LinkedList.h"
#include "LinkedStack.h"
#include "ListNode.h"
#include "StackNode.h"
#include "TreeNode.h"
#include <iostream>
#include <sstream> 
#include <ctime>

using namespace std;

int main1() {
	
	LinkedStack<int>* stack = new LinkedStack<int>();
	srand((unsigned)time(NULL));
	for (size_t i = 0; i < 100; i++) stack->push(rand() % 10);
	for (size_t i = 0; i < 10; i++) cout << "Number of " << i << " in the stack is : " << stack->countStack(i) << endl;
	
	//for (size_t i = 10; i < 20; i++) cout << "Number of " << i << " in the stack is : " << stack->countStack(i) << endl;
	return 0;
}

int main2() {
	// a linked list of characters
	LinkedList<char> sentence;
	// reading and set up the list terminated by a full stop
	char ch;
	while (ch = cin.get()) {
		sentence.addAtEnd(ch);
		if (ch == '.') break;
	}

	sentence.printList();
	cout << sentence.searchList('b') << endl;

	return 0;
}

int evaluate(TreeNode<string>* tree, int X, int Y) {
	// Check root node
	if (tree->item == "+") {
		return X + Y;

	}
	if (tree->item == "-") {
		return X - Y;

	}
	if (tree->item == "/") {
		return X / Y;
	}
	if (tree->item == "*") {
		return X * Y;
	}
	else {
		return stoi(tree->item);
	}
	

}

int main() {
	TreeNode<string>* Y = new TreeNode<string>("Y");
	TreeNode<string>* twenty_three = new TreeNode<string>("23");
	TreeNode<string>* minus = new TreeNode<string>("-",Y,twenty_three);
	TreeNode<string>* six = new TreeNode<string>("6");
	TreeNode<string>* multiply = new TreeNode<string>("*",minus,six);
	TreeNode<string>* X = new TreeNode<string>("X");
	TreeNode<string>* plus = new TreeNode<string>("+", X, multiply);


	cout << evaluate(minus, 2, 3) << endl;;
	return 0;
}