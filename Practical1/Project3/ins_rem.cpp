#include "ins_rem.h"
#include <iostream>

using namespace std;

void insert(int*& array, int& array_len, int pos, int val)
{
	if (!array || array_len < 1)
	{
		cout << "Invalid array" << endl;
		return;
	}
	if (pos < 0 || pos >= array_len) 
	{
		cout << "Invalid position" << endl;
		return;
	}
	// New array length
	array_len++;
	// Declare temporary array to replace original array
	int* temp = new int[array_len];

	// Populate all elements after position
	for (int i = 0; i < pos; i++)
	{
		array[i] = temp[i];
	}
	// Set element to be changed to value
	temp[pos] = val;


	for (int i = pos + 1; i < array_len; i++)
	{
		temp[i] = array[i - 1];
	}

	delete[] array;
	array = temp;
}

void remove(int*& array, int& array_len, int pos)
{
	if (!array || array_len < 1)
	{
		cout << "Invalid array" << endl;
		return;
	}
	if (pos < 0 || pos >= array_len)
	{
		cout << "Invalid position" << endl;
		return;
	}
	// Decrease array length
	array_len--;
	int* temp = new int[array_len];

	// Populate all elements after position
	for (int i = 0; i < pos; i++)
	{
		array[i] = temp[i];
	}
	for (int i = pos; i < array_len; i++)
	{
		temp[i] = array[i - 1];
	}
	delete[] array;
	array = temp;
}

