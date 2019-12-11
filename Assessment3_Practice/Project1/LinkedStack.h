#ifndef LINKEDSTACK_H
#define LINKEDSTACK_H

#include "StackNode.h"
#include <iostream>

using namespace std;

template <typename T>
class LinkedStack
{
public:
	LinkedStack();
	~LinkedStack();

	void push(T val);
	T* pop();			// Removes and returns the pointer to the top item
	T* top();			// Returns the pointer to the top item; no change
	bool isEmpty();		// Returns true if the stack has no item
	int size();			// Returns the number of items in the stack

	int countStack(T item);

private:
	StackNode<T>* tos;	// Pointer to the top item of the stack
	int stackSize;		// Number of items currently in the stack
	T temp_item;		// Storage, for the item to pop off
};

template <typename T>
LinkedStack<T>::LinkedStack()
{
	tos = NULL;
	stackSize = 0;
}

template <typename T>
LinkedStack<T>::~LinkedStack()
{
	while (tos != NULL) {
		StackNode<T>* l = tos;
		tos = tos->next;
		delete l;
	}
}

template <typename T>
void LinkedStack<T>::push(T item)
{
	StackNode<T>* l = new StackNode<T>(item, tos);
	tos = l;
	stackSize++;
}

template <typename T>
T* LinkedStack<T>::pop()
{
	if (tos == NULL) {
		cout << "Stack Underflow" << endl;
		return NULL;
	}

	temp_item = tos->item;
	StackNode<T>* l = tos;
	tos = tos->next;
	delete l;
	stackSize--;
	return &temp_item;
}

template <typename T>
T* LinkedStack<T>::top()
{
	if (tos == NULL) {
		cout << "Stack Underflow" << endl;
		return NULL;
	}
	return &tos->item;
}

template <typename T>
bool LinkedStack<T>::isEmpty()
{
	return stackSize == 0;
}

template <typename T>
int LinkedStack<T>::size()
{
	return stackSize;
}

template <typename T>
int LinkedStack<T>::countStack(T item) {
	int counter = 0;
	int static_len = stackSize;
	T* list = new T[static_len];
	for (int i = 0; i < static_len; i++) {
		T* pointer = pop();
		temp_item;
		if (temp_item == item) counter++;
		list[i] = temp_item;
	}

	for (int i = static_len - 1; i >= 0; i--)
	{
		push(list[i]);
	}

	return counter;
}

#endif