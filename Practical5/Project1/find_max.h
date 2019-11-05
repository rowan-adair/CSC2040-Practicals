#ifndef FIND_MAX_H
#define FIND_MAX_H

#include <iostream>

using namespace std;

template <typename T>

int find_max(T* array, int &array_len) {
	if (!array || array_len < 0) {
		cout << "This array is invalid" << endl;
		return 0; 
	}
	int max_index = -1;
	T max_val = T();
	for (size_t i = 0; i < array_len; i++)
	{
		if (array[i] > max_val) {
			max_index = i;
			max_val = array[i];
		}
	}
	return max_index;
}

template <typename T>
T _find_max(T* array, int& array_len) {
	if (!array || array_len < 0) {
		cout << "This array is invalid" << endl;
		return 0;
	}
	int max_index = -1;
	T max_val = T();
	for (size_t i = 0; i < array_len; i++)
	{
		if (array[i] > max_val) {
			max_val = array[i];
		}
	}
	return max_val;
}

#endif // !FIND_MAX_H
