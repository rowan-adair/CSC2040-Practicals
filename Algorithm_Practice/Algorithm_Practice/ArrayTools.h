#ifndef ARRAY_TOOLS_H
#define ARRAY_TOOLS_H

#include <iostream>
#include <ctime>

using namespace std;

template <typename T>
void printArray(T* arr, int N) {
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
	cout << endl;
}

#endif // !ARRAY_TOOLS_H
